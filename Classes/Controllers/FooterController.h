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

	void homeCallback(CCObject* pSender);
    
    void battleCallback(CCObject* pSender);
    
    void helpCallback(CCObject* pSender);
};
NS_CC_UI_END

#endif //CCUI_CONTROLLERS_FOOTERCONTROLLER_H_
