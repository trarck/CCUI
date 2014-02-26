#include "TestListOrgnaizerController.h"
#include <yhge/Event/EventHandle.h>
#include "yhgui/yhgui.h"
#include "yhgui/interactive/ListOrganizer.h"
#include "yhgui/interactive/OrderedListOrganizer.h"
#include <yhmvc/yhmvc.h>
#include "Scenes/GameSceneDirector.h"
#include "Tests/Box.h"
#include "Tests/MenuItemUtil.h"
#include "HeaderController.h"

USING_NS_CC;
USING_NS_CC_YHGE;
USING_NS_CC_YHGUI;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN

TestListOrgnaizerController::TestListOrgnaizerController(void)
{
    
}


TestListOrgnaizerController::~TestListOrgnaizerController(void)
{
    CCLOG("TestListOrgnaizerController destroy");
}

void TestListOrgnaizerController::viewDidLoad()
{

	CCArray* items=CCArray::create();

	items->addObject(MenuItemUtil::createTestMenuItemLabel("test performens",kTestListOrgnaizerPerformanceScene));
	items->addObject(MenuItemUtil::createTestMenuItemLabel("test zorder",kTestListOrgnaizerZOrderScene));
    
    // create menu, it's an autorelease object
	CCSize contentSize=getPreferredContentSize();
    CCMenu* pMenu = CCMenu::createWithArray(items);
    pMenu->setPosition(ccp(contentSize.width/2,0));
	pMenu->alignItemsVertically();

    m_view->addChild(pMenu, 1);

}


void TestListOrgnaizerPerformanceController::viewDidLoad()
{
	yhmvc::Scene* scene=GameSceneDirector::getInstance()->getRunningScene();
	HeaderController* headerController=static_cast<HeaderController*>(scene->getControllerByName("HeaderController"));
	if (headerController)
	{
		headerController->setTitle("test list orgnaizer performance");
	}
//    ListOrganizer* organizer=new ListOrganizer();
    OrderedListOrganizer* organizer=new OrderedListOrganizer();
    organizer->init();
    organizer->registerWithTouchDispatcher();
    
    Component* root=Component::create();
    m_view->addChild(root);
    

    
    CCSize gridSize=CCSizeMake(100, 100);
    CCSize margin=CCSizeMake(20, 20);
    
    ccColor4B colors[4]={
        ccc4(255, 0, 0, 255),
        ccc4(0, 255, 0, 255),
        ccc4(0, 0, 255, 255),
        ccc4(255, 255, 0, 255)
    };
    
    //    ccDrawColor4B(colors[i].r,colors[i].g,colors[i].b,colors[i].a);
    
    for (int i=0; i<4; i++) {
        
        Box* child1=Box::create();
        child1->setContentSize(CCSizeMake(gridSize.width+margin.width, (gridSize.height+margin.height)*4));
        child1->setPosition(i*(gridSize.width+margin.width)+60,60);
        child1->color=ccc4(128, 128, 128, 255);
        child1->x=i;
        child1->y=0;
        
        root->addChild(child1);
        
        for (int j=0; j<400; j++) {
            Box* child11=Box::create();
            child11->setContentSize(gridSize);
            child11->setPosition(ccp(margin.width/2, margin.height/2 +j*20));
            child11->color=colors[i];
            child11->x=i+1;
            child11->y=j+1;
            
            if (j<100) {
                organizer->addComponent(child11);
            }
            
            child1->addChild(child11);
        }
    }
}

void TestListOrgnaizerZOrderController::viewDidLoad()
{
	yhmvc::Scene* scene=GameSceneDirector::getInstance()->getRunningScene();
	HeaderController* headerController=static_cast<HeaderController*>(scene->getControllerByName("HeaderController"));
	if (headerController)
	{
		headerController->setTitle("test list orgnaizer zorder");
	}
//    ListOrganizer* organizer=new ListOrganizer();
    OrderedListOrganizer* organizer=new OrderedListOrganizer();
    organizer->init();
    organizer->registerWithTouchDispatcher();
    
    Component* root=Component::create();
    m_view->addChild(root);
    
    
    SolidBox* child1=SolidBox::create();
    
    child1->setContentSize(CCSizeMake(400,400));
    child1->setPosition(ccp(10, 10));
    child1->color=ccc4(255, 0, 0, 150);
    child1->x=0;
    child1->y=0;
    organizer->addComponent(child1);
    
    root->addChild(child1);
    
    
    SolidBox* child2=SolidBox::create();
    
    child2->setContentSize(CCSizeMake(400,400));
    child2->setPosition(ccp(200, 200));
    child2->color=ccc4(0, 0, 128, 150);
    child2->x=1;
    child2->y=0;
    organizer->addComponent(child2);
    
    root->addChild(child2);
    
    
    SolidBox* child3=SolidBox::create();
    
    child3->setContentSize(CCSizeMake(400,400));
    child3->setPosition(ccp(100, 200));
    child3->color=ccc4(0, 128, 0, 150);
    child3->x=2;
    child3->y=0;
    organizer->addComponent(child3);
    
    root->addChild(child3);
}

NS_CC_UI_END