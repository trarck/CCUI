#include "TestUIBuilderController.h"
#include <yhge/yhge.h>
#include <yhgui/yhgui.h>
#include <yhmvc/yhmvc.h>

#include "Scenes/GameSceneDirector.h"

USING_NS_CC;
USING_NS_CC_YHGE;
USING_NS_CC_YHGUI;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN

TestUIBuilderController::TestUIBuilderController(void)
{
    
}

TestUIBuilderController::~TestUIBuilderController(void)
{
    CCLOG("TestUIBuilderController destroy");
}

void TestUIBuilderController::viewDidLoad()
{
    CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
    CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();
    
    NormalDocumentTreeOrganizer* treeOrganizer=new NormalDocumentTreeOrganizer();
    treeOrganizer->init();
    treeOrganizer->registerWithTouchDispatcher();
    
    yhgui::Component* document=yhgui::Component::create();
    m_view->addChild(document);
    
    treeOrganizer->setDocument(document);

    UIBuilder* uiBuilder=new UIBuilder();
    uiBuilder->init();
    uiBuilder->setElementEventParser(createEventParser());
    
    CCNode* root=uiBuilder->buildWithJSONFile("ui/test.json");
    document->addChild(root);
}

void TestUIBuilderController::onTestA(yhge::Event* event)
{
    CCLOG("onTestA button click");
}

yhgui::ElementEventParser* TestUIBuilderController::createEventParser()
{
    yhgui::ElementEventParser* eventParser=new yhgui::ElementEventParser();
    eventParser->init();
    eventParser->addEventHandle("testa",this,YH_EVENT_SELECTOR(TestUIBuilderController::onTestA));
    
    eventParser->autorelease();
    return eventParser;
}

NS_CC_UI_END