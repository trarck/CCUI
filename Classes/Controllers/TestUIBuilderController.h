#ifndef CCUI_CONTROLLERS_TESTUIBUILDERCONTROLLER_H_
#define CCUI_CONTROLLERS_TESTUIBUILDERCONTROLLER_H_

#include <yhge/Event/Event.h>
#include <yhmvc/yhmvc.h>
#include <yhgui/yhgui.h>
#include "CCUIMacros.h"

NS_CC_UI_BEGIN

/**
 * 单独的。
 * 由Scene来组合controller。
 * 可以添加其它controller来作为显示内容
 * 由于结构简单不容易出错。
 */
class TestUIBuilderController:public yhmvc::Controller
{
public:
	
    TestUIBuilderController(void);
    
	~TestUIBuilderController(void);

	void viewDidLoad();
    
    void onTestA(yhge::Event* event);
    
    yhgui::ElementEventParser* createEventParser();
};

NS_CC_UI_END

#endif //CCUI_CONTROLLERS_TESTUIBUILDERCONTROLLER_H_
