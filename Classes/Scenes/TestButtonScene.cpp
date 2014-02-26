#include "TestButtonScene.h"
#include "Controllers/ThreeSegmentController.h"
#include "Controllers/TestButtonController.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN
// on "init" you need to initialize your instance
void TestButtonScene::loadContents()
{
	ThreeSegmentScene::loadContents();
    
    ThreeSegmentController* threeSegmentController=static_cast<ThreeSegmentController*>(getControllerByName("ThreeSegmentController"));

	TestButtonController* testButtonController=new TestButtonController();
	testButtonController->init();
    
	threeSegmentController->getBodyLayer()->addChild(testButtonController->getView());
    addController(testButtonController);
    testButtonController->release();
    
}

NS_CC_UI_END