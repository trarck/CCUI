#include "TestLabelScene.h"
#include "Controllers/ThreeSegmentController.h"
#include "Controllers/TestLabelController.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN
// on "init" you need to initialize your instance
void TestLabelScene::loadContents()
{
	ThreeSegmentScene::loadContents();
    
    ThreeSegmentController* threeSegmentController=static_cast<ThreeSegmentController*>(getControllerByName("ThreeSegmentController"));

	TestLabelController* testLabelController=new TestLabelController();
	testLabelController->init();
    testLabelController->setPreferredContentSize(threeSegmentController->getBodyLayer()->getContentSize());
    
	threeSegmentController->getBodyLayer()->addChild(testLabelController->getView());
    addController(testLabelController);
    testLabelController->release();
    
}

NS_CC_UI_END