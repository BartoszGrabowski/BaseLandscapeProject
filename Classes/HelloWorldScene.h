#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"

class fallingObject;
class HelloWorld : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);

	cocos2d::Sprite*	randomSprite();
	cocos2d::Sprite*	currentSprite;

	cocos2d::Sprite*        bean_1;
	cocos2d::Sprite*        bean_2;
	cocos2d::Sprite*        bean_3;
	cocos2d::Sprite*        bean_4;
	cocos2d::Sprite*        cane;
	cocos2d::Sprite*        corn;
	cocos2d::Sprite*        heart_1;
	cocos2d::Sprite*        heart_2;
	cocos2d::Sprite*        heart_3;
	cocos2d::Sprite*        heart_4;
	cocos2d::Sprite*        jelly_1;
	cocos2d::Sprite*        jelly_2;
	cocos2d::Sprite*        jelly_3;
	cocos2d::Sprite*        jelly_4;
	cocos2d::Sprite*        wrapped_1;
	cocos2d::Sprite*        wrapped_2;
	cocos2d::Sprite*        wrapped_3;
	cocos2d::Sprite*        wrapped_4;
	cocos2d::Sprite*        Life_1;
	cocos2d::Sprite*        Life_2;
	cocos2d::Sprite*        Life_3;

	fallingObject*	Object1;
	fallingObject*	Object2;
	fallingObject*	Object3;
	fallingObject*	Object4;

	int			Lives;
	bool		isGameLive;

	void update(float);
	void LooseLife();
	void ResetLives();
	void PlayButtonPressed(Ref *sender, cocos2d::ui::Widget::TouchEventType type);
	void StartGame();
	void EndGame();
private:

	cocos2d::ui::Button*    playButton;
	cocos2d::Label*         scoreLabel;
	cocos2d::Label*			titleLabel;
	cocos2d::Label*			gameOverLabel;

};

#endif // __HELLOWORLD_SCENE_H__
