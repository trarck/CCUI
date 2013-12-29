//
//  Box.h
//  CCUI
//
//  Created by duanhouhai on 13-12-18.
//
//

#ifndef CCUI_TESTS_MENUITEMUTIL_H_
#define CCUI_TESTS_MENUITEMUTIL_H_

#include "cocos2d.h"
#include "yhgui/yhgui.h"

#include "CCUIMacros.h"

NS_CC_UI_BEGIN

class GotoSceneProxy:public CCObject
{
public:
	GotoSceneProxy():m_gotoSceneName("")
	{

	}

	~GotoSceneProxy();

	bool init(const std::string& gotoSceneName)
	{
		m_gotoSceneName=gotoSceneName;
		return true;
	}

	void menuItemCallback(CCObject* pSender);

private:

	std::string m_gotoSceneName;

};

class MenuItemUtil:public CCObject
{
public:
	static CCMenuItemLabel* createTestMenuItemLabel(const std::string& name,const std::string& gotoSceneName);

};

NS_CC_UI_END

#endif /* defined(CCUI_TESTS_MENUITEMUTIL_H_) */
