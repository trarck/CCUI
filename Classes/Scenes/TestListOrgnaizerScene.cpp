﻿#include "TestListOrgnaizerScene.h"
#include "Controllers/ThreeSegmentController.h"
#include "Controllers/TestListOrgnaizerController.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN
// on "init" you need to initialize your instance
void TestListOrgnaizerScene::loadContents()
{	
	ThreeSegmentScene::loadContents();
    
    ThreeSegmentController* threeSegmentController=static_cast<ThreeSegmentController*>(getLayerControllerByName("ThreeSegmentController"));

	TestListOrgnaizerController* testListOrgnaizerController=new TestListOrgnaizerController();
	testListOrgnaizerController->init();
    testListOrgnaizerController->setPreferredContentSize(threeSegmentController->getBodyLayer()->getContentSize());

	threeSegmentController->getBodyLayer()->addChild(testListOrgnaizerController->getLayer());
    addLayerController(testListOrgnaizerController);
    testListOrgnaizerController->release();
}

void TestListOrgnaizerPerformanceScene::loadContents()
{	
	ThreeSegmentScene::loadContents();
    
    ThreeSegmentController* threeSegmentController=static_cast<ThreeSegmentController*>(getLayerControllerByName("ThreeSegmentController"));

	TestListOrgnaizerPerformanceController* testListOrgnaizerController=new TestListOrgnaizerPerformanceController();
	testListOrgnaizerController->init();
    testListOrgnaizerController->setPreferredContentSize(threeSegmentController->getBodyLayer()->getContentSize());

	threeSegmentController->getBodyLayer()->addChild(testListOrgnaizerController->getLayer());
    addLayerController(testListOrgnaizerController);
    testListOrgnaizerController->release();
}

void TestListOrgnaizerZOrderScene::loadContents()
{	
	ThreeSegmentScene::loadContents();
    
    ThreeSegmentController* threeSegmentController=static_cast<ThreeSegmentController*>(getLayerControllerByName("ThreeSegmentController"));

	TestListOrgnaizerZOrderController* testListOrgnaizerController=new TestListOrgnaizerZOrderController();
	testListOrgnaizerController->init();
	testListOrgnaizerController->setPreferredContentSize(threeSegmentController->getBodyLayer()->getContentSize());
    
	threeSegmentController->getBodyLayer()->addChild(testListOrgnaizerController->getLayer());
    addLayerController(testListOrgnaizerController);
    testListOrgnaizerController->release();
}

NS_CC_UI_END