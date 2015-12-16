#include "fallingObject.h"
#include "cocostudio/CocoStudio.h"
#include "ui/CocosGUI.h"


fallingObject::fallingObject()
{

}


fallingObject::~fallingObject()
{
}

void fallingObject::initObject(cocos2d::Sprite* passedSpite)
{
	currentSpite = passedSpite;
	randomX = rand() % 925 + 35;
	downSpeed = rand() % 3 + 1;
	currentPosition = currentSpite->getPosition();
	Touched = false;
	currentPosition.x = randomX;

}

void fallingObject::update()
{

	currentPosition.y -= downSpeed;
	currentSpite->setPosition(currentPosition);

	if (currentPosition.y <= 30)
	{
		currentPosition.x = rand() % 925 + 35;
		currentPosition.y = 700;
		Touched = true;
		downSpeed = rand() % 3 + 1;

	}
	else
	{
		Touched = false;
	}
}


