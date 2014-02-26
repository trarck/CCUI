#ifndef CCUI_CONTROLLERS_TESTCCBBUILDERCONTROLLER_H_
#define CCUI_CONTROLLERS_TESTCCBBUILDERCONTROLLER_H_

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
class TestCCBBuilderController:public yhmvc::Controller
{
public:
	
    TestCCBBuilderController(void);
    
	~TestCCBBuilderController(void);

	void viewDidLoad();
};

NS_CC_UI_END

#endif //CCUI_CONTROLLERS_TESTCCBBUILDERCONTROLLER_H_
