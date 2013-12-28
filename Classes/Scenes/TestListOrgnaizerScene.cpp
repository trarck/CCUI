#include "TestListOrgnaizerScene.h"
#include "Controllers/TestListOrgnaizerController.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN
// on "init" you need to initialize your instance
void TestListOrgnaizerScene::loadContents()
{
	TestListOrgnaizerController* testListOrgnaizerController=new TestListOrgnaizerController();
	testListOrgnaizerController->init();
    
	this->addChild(testListOrgnaizerController->getLayer());
    addLayerController(testListOrgnaizerController);
    testListOrgnaizerController->release();
}

NS_CC_UI_END