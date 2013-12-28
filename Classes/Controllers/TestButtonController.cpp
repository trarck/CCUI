#include "TestButtonController.h"
#include <yhge/Event/EventHandle.h>
#include "yhgui/yhgui.h"
#include "yhgui/interactive/DocumentTreeOrganizer.h"
#include "yhmvc/Core/Layer.h"
#include "Scenes/GameSceneDirector.h"

USING_NS_CC;
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
    CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    
    DocumentTreeOrganizer* treeOrganizer=new DocumentTreeOrganizer();
    treeOrganizer->init();
    treeOrganizer->registerWithTouchDispatcher();
    
    Component* document=Component::create();
    m_layer->addChild(document);
    
    treeOrganizer->setDocument(document);
    
    
    NormalButton* button=new NormalButton();
    button->init();
    button->setPosition(ccp(visibleSize.width/2,visibleSize.height/2));
    
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
    
    NormalButton* backBtn=new NormalButton();
    backBtn->init();
    backBtn->setPosition(ccp(visibleSize.width/2,visibleSize.height/2-100));
    
    CCLabelTTF* backLabel=CCLabelTTF::create("back", "Arial", 24);
    
    backBtn->setLabel(backLabel);
    
    backBtn->addEventListener("touchUpInside", this, YH_EVENT_SELECTOR(TestButtonController::onBack));
    backBtn->changeState(NormalButton::kNormal);
    document->addChild(backBtn);
    backBtn->release();

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