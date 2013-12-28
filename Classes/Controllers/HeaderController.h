#ifndef CCUI_CONTROLLERS_HEADERCONTROLLER_H_
#define CCUI_CONTROLLERS_HEADERCONTROLLER_H_

#include "yhmvc/Core/LayerController.h"
#include "yhmvc/Core/Layer.h"
#include "CCUIMacros.h"

NS_CC_UI_BEGIN
class HeaderController:public yhmvc::LayerController
{
public:
	
    HeaderController(void);
    
	~HeaderController(void);

	void layerDidLoad();

	void showUserInfoCallback(CCObject* pSender);
};
NS_CC_UI_END

#endif //CCUI_CONTROLLERS_HEADERCONTROLLER_H_
