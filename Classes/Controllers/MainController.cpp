#include "MainController.h"
#include "yhmvc/Core/Layer.h"
#include "Scenes/GameSceneDirector.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN

class GotoSceneProxy:public CCObject
{
public:
	GotoSceneProxy():m_gotoSceneName("")
	{

	}

	bool init(const std::string& gotoSceneName)
	{
		m_gotoSceneName=gotoSceneName;
		return true;
	}

	void menuItemCallback(CCObject* pSender)
	{
		GameSceneDirector::getInstance()->pushScene(m_gotoSceneName);
	}

private:

	std::string m_gotoSceneName;

};

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

void MainController::layerDidLoad()
{
	m_menuItems=new CCArray();
	m_menuItems->init();

	m_proxys=new CCArray();
	m_proxys->init();

	createTestMenuItem("test button",kTestButtonScene);
	createTestMenuItem("test document orgnaizer",kTestDocumentOrgnaizerScene);
	createTestMenuItem("test list orgnaizer",kTestListOrgnaizerScene);

	CCSize screenSize=CCDirector::sharedDirector()->getWinSize();

    // create menu, it's an autorelease object
    CCMenu* pMenu = CCMenu::createWithArray(m_menuItems);
	pMenu->setPosition( ccp(screenSize.width/2,0) );
	pMenu->alignItemsVertically();
    m_layer->addChild(pMenu, 1);

    /////////////////////////////
    // 3. add your codes below...
    
}

void MainController::createTestMenuItem(const std::string& name,const std::string& gotoSceneName)
{
	GotoSceneProxy* proxy=new GotoSceneProxy();
	proxy->init(gotoSceneName);

	CCMenuItemLabel *pItem=CCMenuItemLabel::create(CCLabelTTF::create(name.c_str(), "Arial", 20),
                                                      proxy, 
                                                      menu_selector(GotoSceneProxy::menuItemCallback));
	m_menuItems->addObject(pItem);

	m_proxys->addObject(proxy);

	proxy->release();
}

void MainController::menuCloseCallback(CCObject* pSender)
{
    m_layer->removeAllChildrenWithCleanup(true);
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