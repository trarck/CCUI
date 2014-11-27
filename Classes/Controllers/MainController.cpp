#include "MainController.h"
#include <yhmvc/yhmvc.h>
#include "Scenes/GameSceneDirector.h"
#include "Tests/MenuItemUtil.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN

MainController::MainController(void)
	:m_menuItems(NULL)
	,m_proxys(NULL)
{

}


MainController::~MainController(void)
{
    CCLOG("MainController destroy");
	CC_SAFE_RELEASE_NULL(m_menuItems);
	CC_SAFE_RELEASE_NULL(m_proxys);
}

void MainController::viewDidLoad()
{
	m_menuItems=new CCArray();
	m_menuItems->init();

	m_proxys=new CCArray();
	m_proxys->init();

	createTestMenuItem("test button",kTestButtonScene);
    createTestMenuItem("test complex button",kTestComplexButtonScene);
    createTestMenuItem("test label",kTestLabelScene);
	createTestMenuItem("test document orgnaizer",kTestDocumentOrgnaizerScene);
	createTestMenuItem("test list orgnaizer",kTestListOrgnaizerScene);
    createTestMenuItem("test ui builder",kTestUIBuilderScene);
    createTestMenuItem("test image",kTestImageScene);

	CCSize screenSize=CCDirector::sharedDirector()->getWinSize();

    // create menu, it's an autorelease object
    CCMenu* pMenu = CCMenu::createWithArray(m_menuItems);
	pMenu->setPosition( ccp(screenSize.width/2,0) );
	pMenu->alignItemsVertically();
    m_view->addChild(pMenu, 1);
        
    /////////////////////////////
    // 3. add your codes below...
    
}

void MainController::createTestMenuItem(const std::string& name,const std::string& gotoSceneName)
{

	CCMenuItemLabel *pItem=MenuItemUtil::createTestMenuItemLabel(name,gotoSceneName);
	m_menuItems->addObject(pItem);
}

void MainController::menuCloseCallback(CCObject* pSender)
{
    m_view->removeAllChildrenWithCleanup(true);
    CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}

void MainController::menuRunCallback(CCObject* pSender)
{
    //GameSceneDirector::getInstance()->pushScene(kShopScene);
}

void MainController::menuStopCallback(CCObject* pSender)
{
    //GameSceneDirector::getInstance()->pushScene(kOneScene);
}

void MainController::menuMoveToCallback(CCObject* pSender)
{
    
}

NS_CC_UI_END