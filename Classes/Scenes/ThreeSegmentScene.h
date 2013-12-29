#ifndef CCUI_SCENES_THREESEGMENTSCENE_H_
#define CCUI_SCENES_THREESEGMENTSCENE_H_

#include "BaseScene.h"

NS_CC_UI_BEGIN

class ThreeSegmentScene : public BaseScene
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone

    void loadContents();

	// implement the "static node()" method manually
    CREATE_FUNC(ThreeSegmentScene);
private:

    
};

NS_CC_UI_END

#endif // CCUI_SCENES_THREESEGMENTSCENE_H_
