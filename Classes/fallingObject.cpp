#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"
#include "fallingObject.h"

using namespace cocos2d;
USING_NS_CC;


fallingObject::fallingObject()
{

}


fallingObject::~fallingObject()
{
}

void fallingObject::initObject(cocos2d::Sprite* passedSpite)
{
	currentSpite = passedSpite;

	downSpeed = rand() % 3 + 1;
	currentPosition = currentSpite->getPosition();
	winsize = Director::getInstance()->getVisibleSize();

	scrWidth = winsize.width * 0.95;
	scrHeight = winsize.height;
	randomX = rand() % (scrWidth + 32);

	currentPosition.x = randomX;
	Touched = false;


}

void fallingObject::update()
{

	currentPosition.y -= downSpeed;
	currentSpite->setPosition(currentPosition);

	if (currentPosition.y <= 5)
	{
		currentPosition.x = rand() % scrWidth;
		currentPosition.y = scrHeight + 40;
		Touched = true;
		downSpeed = rand() % 3 + 1;

	}
	else
	{
		Touched = false;
	}
}

void fallingObject::ObjClicked()
{

	currentPosition.x = rand() % scrWidth;
	currentPosition.y = scrHeight + 40;
	downSpeed = rand() % 3 + 1;
	currentSpite->setPosition(currentPosition) ;
}


