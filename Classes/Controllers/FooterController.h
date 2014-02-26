#ifndef CCUI_CONTROLLERS_FOOTERCONTROLLER_H_
#define CCUI_CONTROLLERS_FOOTERCONTROLLER_H_

#include <yhmvc/yhmvc.h>
#include "CCUIMacros.h"

NS_CC_UI_BEGIN
class FooterController:public yhmvc::Controller
{
public:
	
    FooterController(void);
    
	~FooterController(void);

	void viewDidLoad();

	void backCallback(CCObject* pSender);
    
    void exitCallback(CCObject* pSender);

	void showBackButton(){
		m_backButton->setVisible(true);
	}

	void hideBackButton(){
		m_backButton->setVisible(false);
	}

private:

	CCMenuItemLabel* m_backButton;

};
NS_CC_UI_END

#endif //CCUI_CONTROLLERS_FOOTERCONTROLLER_H_
