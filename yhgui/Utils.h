#ifndef COCOS_YHGUI_UTILS_H_
#define COCOS_YHGUI_UTILS_H_

#include "cocos2d.h"
#include "YHGUIMacros.h"
#include "./event/UIEventListenerManager.h"

NS_CC_YHGUI_BEGIN
	
class Utils
{
public:

    static CCRect CCRectUnion(const CCRect& src1, const CCRect& src2);
    
};


NS_CC_YHGUI_END

#endif // COCOS_YHGUI_UTILS_H_
