#include "TestImageScene.h"
#include "Controllers/ThreeSegmentController.h"
#include "Controllers/TestImageController.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN
// on "init" you need to initialize your instance
void TestImageScene::loadContents()
{
	ThreeSegmentScene::loadContents();
    
    ThreeSegmentController* threeSegmentController=static_cast<ThreeSegmentController*>(getControllerByName("ThreeSegmentController"));

	TestImageController* testImageController=new TestImageController();
	testImageController->init();
    testImageController->setPreferredContentSize(threeSegmentController->getBodyLayer()->getContentSize());
    
	threeSegmentController->getBodyLayer()->addChild(testImageController->getView());
    addController(testImageController);
    testImageController->release();
    
}

NS_CC_UI_END