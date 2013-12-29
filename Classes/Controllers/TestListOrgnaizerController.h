#ifndef CCUI_CONTROLLERS_TESTLISTORGNAIZERCONTROLLER_H_
#define CCUI_CONTROLLERS_TESTLISTORGNAIZERCONTROLLER_H_

#include <yhge/Event/Event.h>
#include "yhmvc/Core/LayerController.h"
#include "yhmvc/Core/Layer.h"
#include "CCUIMacros.h"

NS_CC_UI_BEGIN

/**
 * 单独的。
 * 由Scene来组合controller。
 * 可以添加其它controller来作为显示内容
 * 由于结构简单不容易出错。
 */
class TestListOrgnaizerController:public yhmvc::LayerController
{
public:
	
    TestListOrgnaizerController(void);
    
	~TestListOrgnaizerController(void);

	void layerDidLoad();
};

class TestListOrgnaizerPerformanceController:public yhmvc::LayerController
{
public:
	void layerDidLoad();
};

class TestListOrgnaizerZOrderController:public yhmvc::LayerController
{
public:

	void layerDidLoad();
};

NS_CC_UI_END

#endif //CCUI_CONTROLLERS_ONECONTROLLER_H_
