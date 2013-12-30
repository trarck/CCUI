#include "TestCCBBuilderScene.h"
#include "Controllers/ThreeSegmentController.h"
#include "Controllers/TestCCBBuilderController.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN
// on "init" you need to initialize your instance
void TestCCBBuilderScene::loadContents()
{
	ThreeSegmentScene::loadContents();
    
    ThreeSegmentController* threeSegmentController=static_cast<ThreeSegmentController*>(getLayerControllerByName("ThreeSegmentController"));

	TestCCBBuilderController* testCCBBuilderController=new TestCCBBuilderController();
	testCCBBuilderController->init();
    testCCBBuilderController->setPreferredContentSize(threeSegmentController->getBodyLayer()->getContentSize());
    
	threeSegmentController->getBodyLayer()->addChild(testCCBBuilderController->getLayer());
    addLayerController(testCCBBuilderController);
    testCCBBuilderController->release();
    
}

NS_CC_UI_END