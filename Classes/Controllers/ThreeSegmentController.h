#ifndef CCUI_CONTROLLERS_THREESEGMENTCONTROLLER_H_
#define CCUI_CONTROLLERS_THREESEGMENTCONTROLLER_H_

#include "yhmvc/Core/LayerController.h"
#include "yhmvc/Core/Layer.h"
#include "CCUIMacros.h"

NS_CC_UI_BEGIN
class ThreeSegmentController:public cocos2d::yhmvc::LayerController
{
public:
	
    ThreeSegmentController(void);
    
	~ThreeSegmentController(void);

	void layerDidLoad();    
    
    //get setter
    
    inline yhmvc::Layer* getHeaderLayer()
    {
        return m_headerLayer;
    }
    
    inline yhmvc::Layer* getFooterLayer()
    {
        return m_footerLayer;
    }
    
    inline yhmvc::Layer* getBodyLayer()
    {
        return m_bodyLayer;
    }
    
protected:
    
    yhmvc::Layer* m_headerLayer;
    yhmvc::Layer* m_footerLayer;
    yhmvc::Layer* m_bodyLayer;
};

NS_CC_UI_END

#endif //CCUI_CONTROLLERS_THREESEGMENTCONTROLLER_H_
