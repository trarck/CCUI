#ifndef CCUI_CONTROLLERS_FOOTERCONTROLLER_H_
#define CCUI_CONTROLLERS_FOOTERCONTROLLER_H_

#include "yhmvc/Core/LayerController.h"
#include "yhmvc/Core/Layer.h"
#include "CCUIMacros.h"

NS_CC_UI_BEGIN
class FooterController:public yhmvc::LayerController
{
public:
	
    FooterController(void);
    
	~FooterController(void);

	void layerDidLoad();

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
