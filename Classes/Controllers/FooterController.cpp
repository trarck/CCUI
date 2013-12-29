#include "FooterController.h"
#include "yhmvc/Core/Layer.h"
#include "Scenes/GameSceneDirector.h"

USING_NS_CC;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN

FooterController::FooterController(void)
{
    
}


FooterController::~FooterController(void)
{
    
}

void FooterController::layerDidLoad()
{
    CCSize screenSize=CCDirector::sharedDirector()->getWinSize();
    
    m_backButton=CCMenuItemLabel::create(CCLabelTTF::create("back", "Arial", 20),
                                                      this,
                                                      menu_selector(FooterController::backCallback));
    m_backButton->setPosition(ccp(60,20));
    
    CCMenuItemLabel *exitItem=CCMenuItemLabel::create(CCLabelTTF::create("exit", "Arial", 20),
                                                        this,
                                                        menu_selector(FooterController::exitCallback));
    exitItem->setPosition(ccp(screenSize.width-100,20));
    
    CCMenu* menu=CCMenu::create(m_backButton,exitItem,NULL);
    
    menu->setPosition( CCPointZero );
    
    m_layer->addChild(menu);
}

void FooterController::backCallback(CCObject* pSender)
{
	if (GameSceneDirector::getInstance()->getSceneStackSize()>1)
	{
		GameSceneDirector::getInstance()->popScene();
	}
}

void FooterController::exitCallback(CCObject* pSender)
{
	m_layer->removeAllChildrenWithCleanup(true);
    CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
    //GameSceneDirector::getInstance()->replaceScene(kMainScene);
}

NS_CC_UI_END