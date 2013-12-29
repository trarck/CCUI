//
//  Box.cpp
//  CCUI
//
//  Created by duanhouhai on 13-12-18.
//
//

#include "MenuItemUtil.h"
#include "Scenes/GameSceneDirector.h"


NS_CC_UI_BEGIN

GotoSceneProxy::~GotoSceneProxy()
{
	CCLOG("GotoSceneProxy destroy");
}

void GotoSceneProxy::menuItemCallback(CCObject* pSender)
{
	GameSceneDirector::getInstance()->pushScene(m_gotoSceneName);
}

CCMenuItemLabel* MenuItemUtil::createTestMenuItemLabel(const std::string& name,const std::string& gotoSceneName)
{
	GotoSceneProxy* proxy=new GotoSceneProxy();
	proxy->init(gotoSceneName);

	CCMenuItemLabel *pItem=CCMenuItemLabel::create(CCLabelTTF::create(name.c_str(), "Arial", 20),
                                                      proxy, 
                                                      menu_selector(GotoSceneProxy::menuItemCallback));
	pItem->setUserObject(proxy);

	proxy->release();

	return pItem;
}

NS_CC_UI_END