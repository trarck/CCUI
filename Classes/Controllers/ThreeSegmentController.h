#ifndef CCUI_CONTROLLERS_THREESEGMENTCONTROLLER_H_
#define CCUI_CONTROLLERS_THREESEGMENTCONTROLLER_H_

#include <yhmvc/yhmvc.h>
#include "CCUIMacros.h"

NS_CC_UI_BEGIN
class ThreeSegmentController:public cocos2d::yhmvc::Controller
{
public:
	
    ThreeSegmentController(void);
    
	~ThreeSegmentController(void);

	void viewDidLoad();    
    
    //get setter
    
    inline yhmvc::View* getHeaderLayer()
    {
        return m_headerLayer;
    }
    
    inline yhmvc::View* getFooterLayer()
    {
        return m_footerLayer;
    }
    
    inline yhmvc::View* getBodyLayer()
    {
        return m_bodyLayer;
    }
    
protected:
    
    yhmvc::View* m_headerLayer;
    yhmvc::View* m_footerLayer;
    yhmvc::View* m_bodyLayer;
};

NS_CC_UI_END

#endif //CCUI_CONTROLLERS_THREESEGMENTCONTROLLER_H_
