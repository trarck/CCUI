#include "TestButtonController.h"
#include "cocos-ext.h"
#include <yhge/Event/EventHandle.h>
#include "yhgui/yhgui.h"
#include "yhgui/interactive/DocumentTreeOrganizer.h"
#include "yhmvc/Core/Layer.h"
#include "Scenes/GameSceneDirector.h"

USING_NS_CC;
USING_NS_CC_EXT;
USING_NS_CC_YHGE;
USING_NS_CC_YHGUI;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN

TestButtonController::TestButtonController(void)
{
    
}


TestButtonController::~TestButtonController(void)
{
    CCLOG("TestButtonController destroy");
}

void TestButtonController::layerDidLoad()
{
    CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
    
    DocumentTreeOrganizer* treeOrganizer=new DocumentTreeOrganizer();
    treeOrganizer->init();
    treeOrganizer->registerWithTouchDispatcher();
    
    Component* document=Component::create();
    m_layer->addChild(document);
    
    treeOrganizer->setDocument(document);
    
    //纯文字按钮
    NormalButton* button=new NormalButton();
    button->init();
    button->setPosition(ccp(visibleSize.width/2,0));
    
    CCLabelTTF* labelTTF=CCLabelTTF::create("click me", "Arial", 24);
    
    button->setLabel(labelTTF);
    
    ccColor3B pressColor=ccc3(255, 0, 0);
    button->setStateLabelColor(NormalButton::kPressed, pressColor);
    
    button->addEventListener("touchDown", this, YH_EVENT_SELECTOR(TestButtonController::onTouchDown));
    button->addEventListener("touchMove", this, YH_EVENT_SELECTOR(TestButtonController::onTouchMove));
    button->addEventListener("touchMoveEndter", this, YH_EVENT_SELECTOR(TestButtonController::onTouchMoveEnter));
    button->addEventListener("touchMoveExit", this, YH_EVENT_SELECTOR(TestButtonController::onTouchMoveExit));
    button->addEventListener("touchUpInside", this, YH_EVENT_SELECTOR(TestButtonController::onTouchUpInside));
    button->addEventListener("touchUpOutside", this, YH_EVENT_SELECTOR(TestButtonController::onTouchUpOutside));
    
    button->changeState(NormalButton::kNormal);
    
    document->addChild(button);
    button->release();
    
    //文字加背景
    NormalButton* testBtn1=NormalButton::create();
    testBtn1->setPosition(ccp(visibleSize.width/2,60));
    
    CCLabelTTF* testLabel1=CCLabelTTF::create("back", "Arial", 24);
    testBtn1->setLabel(testLabel1);
    testBtn1->setLabelOffset(ccp(0,3));
    
	ccColor3B pressColor3=ccc3(140, 140, 140);
    testBtn1->setStateLabelColor(NormalButton::kPressed, pressColor3);

    testBtn1->setStateBackground(NormalButton::kNormal, "buttons/btn-test-0.png");
    testBtn1->setStateBackground(NormalButton::kPressed, "buttons/btn-test-1.png");
    testBtn1->setStateBackground(NormalButton::kDisabled, "buttons/btn-test-2.png");
    testBtn1->changeState(NormalButton::kNormal);
    document->addChild(testBtn1);
    
    //bmfont 文字加背景
    NormalButton* testBtn2=NormalButton::create();
    testBtn2->setPosition(ccp(visibleSize.width/2,120));
    
	CCLabelBMFont* testLabel2=CCLabelBMFont::create("bmfont","fonts/boundsTestFont.fnt");
    
	testBtn2->setLabel(testLabel2);
	testBtn2->setLabelType(NormalButton::kLabelTypeBMFont);
    testBtn2->setLabelOffset(ccp(0,-6));
    testBtn2->setStateLabelColor(NormalButton::kPressed, pressColor3);
    
    testBtn2->setStateBackground(NormalButton::kNormal, "buttons/btn-test-0.png");
    testBtn2->setStateBackground(NormalButton::kPressed, "buttons/btn-test-1.png");
    testBtn2->setStateBackground(NormalButton::kDisabled, "buttons/btn-test-2.png");
    testBtn2->changeState(NormalButton::kNormal);
    
    testBtn2->setTouchDownZoomable(true);
    
    document->addChild(testBtn2);
    
    //纯背景
	NormalButton* testBtn3=NormalButton::create();
    testBtn3->setStateBackground(NormalButton::kNormal, "buttons/btn-a-0.png");
    testBtn3->setStateBackground(NormalButton::kPressed, "buttons/btn-a-1.png");
    testBtn3->setStateBackground(NormalButton::kDisabled, "buttons/btn-a-2.png");
    testBtn3->changeState(NormalButton::kNormal);
    testBtn3->setPosition(ccp(visibleSize.width/2,180));
    testBtn3->setScale(0.5);
    document->addChild(testBtn3);

    
    //9宫格的背景
    CCSize buttonSize4=CCSizeMake(300, 70);
    
    NormalButton* testBtn4=NormalButton::create();
    
	CCLabelBMFont* testLabel4=CCLabelBMFont::create("bmfont","fonts/boundsTestFont.fnt");
	testBtn4->setLabel(testLabel4);
	testBtn4->setLabelType(NormalButton::kLabelTypeBMFont);
    testBtn4->setLabelOffset(ccp(0,-6));
    testBtn4->setStateLabelColor(NormalButton::kPressed, pressColor3);
    
    CCScale9Sprite* normalBg4=CCScale9Sprite::create("buttons/btn-test-0.png");
    normalBg4->setContentSize(buttonSize4);
    
    CCScale9Sprite* pressedBg4=CCScale9Sprite::create("buttons/btn-test-1.png");
    pressedBg4->setContentSize(buttonSize4);
    
    testBtn4->setStateBackground(NormalButton::kNormal, normalBg4);
    testBtn4->setStateBackground(NormalButton::kPressed,pressedBg4);

    testBtn4->changeState(NormalButton::kNormal);
    testBtn4->setTouchDownZoomable(true);
    
    testBtn4->setPosition(ccp(visibleSize.width/2,280));
    testBtn4->setAnchorPoint(ccp(0.5, 0.5));
    
    document->addChild(testBtn4);
	

}


void TestButtonController::onTouchDown(yhge::Event* event)
{
    CCLOG("onTouchDown");
}

void TestButtonController::onTouchMove(yhge::Event* event)
{
    CCLOG("onTouchMove,is inside:%d",static_cast<CCBool*>(event->getData())->getValue());
}

void TestButtonController::onTouchMoveEnter(yhge::Event* event)
{
     CCLOG("onTouchMoveEnter");
}

void TestButtonController::onTouchMoveExit(yhge::Event* event)
{
    CCLOG("onTouchMoveExit");
}

void TestButtonController::onTouchUpInside(yhge::Event* event)
{
    CCLOG("onTouchUpInside");
}

void TestButtonController::onTouchUpOutside(yhge::Event* event)
{
    CCLOG("onTouchUpOutside");
}

void TestButtonController::onBack(yhge::Event *event)
{
	GameSceneDirector::getInstance()->popScene();
}

NS_CC_UI_END