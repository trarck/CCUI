#ifndef CCUI_CONTROLLERS_MAINCONTROLLER_H_
#define CCUI_CONTROLLERS_MAINCONTROLLER_H_

#include <yhmvc/yhmvc.h>
#include "CCUIMacros.h"

NS_CC_UI_BEGIN

class MainController:public yhmvc::Controller
{
public:
	MainController(void);
	~MainController(void);

	void viewDidLoad();

	void menuCloseCallback(CCObject* pSender);
    
    void menuRunCallback(CCObject* pSender);
    void menuStopCallback(CCObject* pSender);
    void menuMoveToCallback(CCObject* pSender);

protected:

	void createTestMenuItem(const std::string& name,const std::string& gotoSceneName);

private:

	CCArray* m_menuItems;
	CCArray* m_proxys;
};

NS_CC_UI_END

#endif //CCUI_CONTROLLERS_MAINCONTROLLER_H_
