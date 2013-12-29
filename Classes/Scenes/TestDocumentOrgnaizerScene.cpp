﻿#include "TestDocumentOrgnaizerScene.h"
#include "Controllers/ThreeSegmentController.h"
#include "Controllers/TestDocumentOrgnaizerController.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN
// on "init" you need to initialize your instance
void TestDocumentOrgnaizerScene::loadContents()
{
	ThreeSegmentScene::loadContents();
    
    ThreeSegmentController* threeSegmentController=static_cast<ThreeSegmentController*>(getLayerControllerByName("ThreeSegmentController"));

	TestDocumentOrgnaizerController* testDocumentOrgnaizerController=new TestDocumentOrgnaizerController();
	testDocumentOrgnaizerController->init();
    testDocumentOrgnaizerController->setPreferredContentSize(threeSegmentController->getBodyLayer()->getContentSize());

	threeSegmentController->getBodyLayer()->addChild(testDocumentOrgnaizerController->getLayer());
    addLayerController(testDocumentOrgnaizerController);
    testDocumentOrgnaizerController->release();
    
}

void TestDocumentOrgnaizerPerformanceScene::loadContents()
{
	ThreeSegmentScene::loadContents();
    
    ThreeSegmentController* threeSegmentController=static_cast<ThreeSegmentController*>(getLayerControllerByName("ThreeSegmentController"));

	TestDocumentOrgnaizerPerformanceController* testDocumentOrgnaizerController=new TestDocumentOrgnaizerPerformanceController();
	testDocumentOrgnaizerController->init();
    testDocumentOrgnaizerController->setPreferredContentSize(threeSegmentController->getBodyLayer()->getContentSize());

	threeSegmentController->getBodyLayer()->addChild(testDocumentOrgnaizerController->getLayer());
    addLayerController(testDocumentOrgnaizerController);
    testDocumentOrgnaizerController->release();
    
}

void TestDocumentOrgnaizerZOrderScene::loadContents()
{
	ThreeSegmentScene::loadContents();
    
    ThreeSegmentController* threeSegmentController=static_cast<ThreeSegmentController*>(getLayerControllerByName("ThreeSegmentController"));

	TestDocumentOrgnaizerZOrderController* testDocumentOrgnaizerController=new TestDocumentOrgnaizerZOrderController();
	testDocumentOrgnaizerController->init();
    testDocumentOrgnaizerController->setPreferredContentSize(threeSegmentController->getBodyLayer()->getContentSize());

	threeSegmentController->getBodyLayer()->addChild(testDocumentOrgnaizerController->getLayer());
    addLayerController(testDocumentOrgnaizerController);
    testDocumentOrgnaizerController->release();
    
}

NS_CC_UI_END