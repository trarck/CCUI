#include "TestUIBuilderScene.h"
#include "Controllers/ThreeSegmentController.h"
#include "Controllers/TestUIBuilderController.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN
// on "init" you need to initialize your instance
void TestUIBuilderScene::loadContents()
{
	ThreeSegmentScene::loadContents();
    
    ThreeSegmentController* threeSegmentController=static_cast<ThreeSegmentController*>(getControllerByName("ThreeSegmentController"));

	TestUIBuilderController* testUIBuilderController=new TestUIBuilderController();
	testUIBuilderController->init();
    testUIBuilderController->setPreferredContentSize(threeSegmentController->getBodyLayer()->getContentSize());
    
	threeSegmentController->getBodyLayer()->addChild(testUIBuilderController->getView());
    addController(testUIBuilderController);
    testUIBuilderController->release();
    
}

NS_CC_UI_END