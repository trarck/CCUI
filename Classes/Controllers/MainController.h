#ifndef CCUI_CONTROLLERS_MAINCONTROLLER_H_
#define CCUI_CONTROLLERS_MAINCONTROLLER_H_

#include "yhmvc/Core/LayerController.h"
#include "yhmvc/Core/Layer.h"
#include "CCUIMacros.h"

NS_CC_UI_BEGIN

class MainController:public yhmvc::LayerController
{
public:
	MainController(void);
	~MainController(void);

	void layerDidLoad();

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
