#include "TestComplexButtonScene.h"
#include "Controllers/ThreeSegmentController.h"
#include "Controllers/TestComplexButtonController.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN
// on "init" you need to initialize your instance
void TestComplexButtonScene::loadContents()
{
	ThreeSegmentScene::loadContents();
    
    ThreeSegmentController* threeSegmentController=static_cast<ThreeSegmentController*>(getLayerControllerByName("ThreeSegmentController"));

	TestComplexButtonController* testComplexButtonController=new TestComplexButtonController();
	testComplexButtonController->init();
    
	threeSegmentController->getBodyLayer()->addChild(testComplexButtonController->getLayer());
    addLayerController(testComplexButtonController);
    testComplexButtonController->release();
    
}

NS_CC_UI_END