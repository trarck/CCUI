#include "TestComplexButtonController.h"
#include <yhge/Event/EventHandle.h>
#include "yhgui/yhgui.h"
#include "yhgui/interactive/DocumentTreeOrganizer.h"
#include <yhmvc/yhmvc.h>
#include "Scenes/GameSceneDirector.h"

USING_NS_CC;
USING_NS_CC_YHGE;
USING_NS_CC_YHGUI;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN

TestComplexButtonController::TestComplexButtonController(void)
{
    
}


TestComplexButtonController::~TestComplexButtonController(void)
{
    CCLOG("TestComplexButtonController destroy");
}

void TestComplexButtonController::viewDidLoad()
{
    CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();


    DocumentTreeOrganizer* treeOrganizer=new DocumentTreeOrganizer();
    treeOrganizer->init();
    treeOrganizer->registerWithTouchDispatcher();
    
    Component* document=Component::create();
    m_view->addChild(document);
    
    treeOrganizer->setDocument(document);
    
    //文字按钮
    ComplexButton* button=new ComplexButton();
    button->init();
    button->setPosition(ccp(visibleSize.width/2,0));
    
    button->setStateLabelTTF(Button::kNormal, "click me", "Arial", 24);
    button->setStateLabelTTF(Button::kPressed, "click me", "Arial", 24,ccc3(255, 0, 0));
    
    button->addEventListener("touchDown", this, YH_EVENT_SELECTOR(TestComplexButtonController::onTouchDown));
    button->addEventListener("touchMove", this, YH_EVENT_SELECTOR(TestComplexButtonController::onTouchMove));
    button->addEventListener("touchMoveEndter", this, YH_EVENT_SELECTOR(TestComplexButtonController::onTouchMoveEnter));
    button->addEventListener("touchMoveExit", this, YH_EVENT_SELECTOR(TestComplexButtonController::onTouchMoveExit));
    button->addEventListener("touchUpInside", this, YH_EVENT_SELECTOR(TestComplexButtonController::onTouchUpInside));
    button->addEventListener("touchUpOutside", this, YH_EVENT_SELECTOR(TestComplexButtonController::onTouchUpOutside));
    
    button->changeState(Button::kNormal);
    
    document->addChild(button);
    button->release();
    
    
    ComplexButton* testBtn1=ComplexButton::create();
    testBtn1->setPosition(ccp(visibleSize.width/2,60));
    
    testBtn1->setStateLabelTTF(Button::kNormal, "click me", "Arial", 24);
    testBtn1->setStateLabelTTF(Button::kPressed, "click me", "Arial", 24,ccc3(255, 0, 0));
    
    testBtn1->setStateBackground(NormalButton::kNormal, "buttons/btn-test-0.png");
    testBtn1->setStateBackground(NormalButton::kPressed, "buttons/btn-test-1.png");
    testBtn1->setStateBackground(NormalButton::kDisabled, "buttons/btn-test-2.png");
    
    testBtn1->changeState(NormalButton::kNormal);
    
    document->addChild(testBtn1);
    
    
    ComplexButton* testBtn2=ComplexButton::create();
    testBtn2->setPosition(ccp(visibleSize.width/2,120));
    
    CCLabelTTF* normalLabel2=CCLabelTTF::create("click me", "Arial", 24);
    normalLabel2->setPosition(ccp(0, 3));
    
    CCLabelTTF* pressedLabel2=CCLabelTTF::create("click me", "Arial", 24);
    pressedLabel2->setPosition(ccp(0, 3));
    pressedLabel2->setColor(ccc3(140, 140, 140));
    
    testBtn2->setStateLabelTTF(Button::kNormal, normalLabel2);
    testBtn2->setStateLabelTTF(Button::kPressed, pressedLabel2);
    
    testBtn2->setStateBackground(NormalButton::kNormal, "buttons/btn-test-0.png");
    testBtn2->setStateBackground(NormalButton::kPressed, "buttons/btn-test-1.png");
    testBtn2->setStateBackground(NormalButton::kDisabled, "buttons/btn-test-2.png");
    
    testBtn2->changeState(NormalButton::kNormal);
    
    document->addChild(testBtn2);
}


void TestComplexButtonController::onTouchDown(yhge::Event* event)
{
    CCLOG("onTouchDown");
}

void TestComplexButtonController::onTouchMove(yhge::Event* event)
{
    CCLOG("onTouchMove,is inside:%d",static_cast<CCBool*>(event->getData())->getValue());
}

void TestComplexButtonController::onTouchMoveEnter(yhge::Event* event)
{
     CCLOG("onTouchMoveEnter");
}

void TestComplexButtonController::onTouchMoveExit(yhge::Event* event)
{
    CCLOG("onTouchMoveExit");
}

void TestComplexButtonController::onTouchUpInside(yhge::Event* event)
{
    CCLOG("onTouchUpInside");
}

void TestComplexButtonController::onTouchUpOutside(yhge::Event* event)
{
    CCLOG("onTouchUpOutside");
}

void TestComplexButtonController::onBack(yhge::Event *event)
{
	GameSceneDirector::getInstance()->popScene();
}

NS_CC_UI_END