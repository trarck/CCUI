#include "TestButtonScene.h"
#include "Controllers/TestButtonController.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN
// on "init" you need to initialize your instance
void TestButtonScene::loadContents()
{
	TestButtonController* testButtonController=new TestButtonController();
	testButtonController->init();
    
	this->addChild(testButtonController->getLayer());
    addLayerController(testButtonController);
    testButtonController->release();
    
}

NS_CC_UI_END