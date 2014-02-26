#ifndef CCUI_CONTROLLERS_TestComplexButtonController_H_
#define CCUI_CONTROLLERS_TestComplexButtonController_H_

#include <yhge/Event/Event.h>
#include <yhmvc/yhmvc.h>
#include "CCUIMacros.h"

NS_CC_UI_BEGIN

/**
 * 单独的。
 * 由Scene来组合controller。
 * 可以添加其它controller来作为显示内容
 * 由于结构简单不容易出错。
 */
class TestComplexButtonController:public yhmvc::Controller
{
public:
	
    TestComplexButtonController(void);
    
	~TestComplexButtonController(void);

	void viewDidLoad();

    void onTouchDown(cocos2d::yhge::Event* event);
    void onTouchMove(cocos2d::yhge::Event* event);
    void onTouchMoveEnter(cocos2d::yhge::Event* event);
    void onTouchMoveExit(cocos2d::yhge::Event* event);
    void onTouchUpInside(cocos2d::yhge::Event* event);
    void onTouchUpOutside(cocos2d::yhge::Event* event);
    
    void onBack(cocos2d::yhge::Event* event);
};
NS_CC_UI_END

#endif //CCUI_CONTROLLERS_TestComplexButtonController_H_
