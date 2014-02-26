#ifndef CCUI_CONTROLLERS_HEADERCONTROLLER_H_
#define CCUI_CONTROLLERS_HEADERCONTROLLER_H_

#include <yhmvc/yhmvc.h>
#include "CCUIMacros.h"

NS_CC_UI_BEGIN
class HeaderController:public yhmvc::Controller
{
public:
	
    HeaderController(void);
    
	~HeaderController(void);

	void viewDidLoad();

	void showUserInfoCallback(CCObject* pSender);

	void setTitle(const std::string& title);

private:
	CCLabelTTF* m_title;
};
NS_CC_UI_END

#endif //CCUI_CONTROLLERS_HEADERCONTROLLER_H_
