#include "TestDocumentOrgnaizerScene.h"
#include "Controllers/TestDocumentOrgnaizerController.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN
// on "init" you need to initialize your instance
void TestDocumentOrgnaizerScene::loadContents()
{
	TestDocumentOrgnaizerController* testDocumentOrgnaizerController=new TestDocumentOrgnaizerController();
	testDocumentOrgnaizerController->init();
    
	this->addChild(testDocumentOrgnaizerController->getLayer());
    addLayerController(testDocumentOrgnaizerController);
    testDocumentOrgnaizerController->release();
    
}

NS_CC_UI_END