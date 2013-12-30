#include "TestCCBBuilderController.h"
#include <yhge/yhge.h>
#include <yhgui/yhgui.h>
#include <yhmvc/yhmvc.h>

#include "Scenes/GameSceneDirector.h"

USING_NS_CC;
USING_NS_CC_YHGE;
USING_NS_CC_YHGUI;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN

TestCCBBuilderController::TestCCBBuilderController(void)
{
    
}


TestCCBBuilderController::~TestCCBBuilderController(void)
{
    CCLOG("TestCCBBuilderController destroy");
}

void TestCCBBuilderController::layerDidLoad()
{
    CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
    CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

    
}

NS_CC_UI_END