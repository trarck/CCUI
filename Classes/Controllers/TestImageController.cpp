#include "TestImageController.h"
#include <yhge/yhge.h>
#include <yhgui/yhgui.h>
#include <yhmvc/yhmvc.h>
#include <yhgui/labels/LabelTTF.h>
#include <yhgui/labels/LabelBMFont.h>
#include <yhgui/labels/LabelAtlas.h>

#include "Scenes/GameSceneDirector.h"

USING_NS_CC;
USING_NS_CC_YHGE;
USING_NS_CC_YHGUI;
USING_NS_CC_YHMVC;

NS_CC_UI_BEGIN

TestImageController::TestImageController(void)
{
    
}


TestImageController::~TestImageController(void)
{
    CCLOG("TestImageController destroy");
}

void TestImageController::viewDidLoad()
{
    CCSize contentSize = this->getPreferredContentSize();

    Image* image=new Image();
    image->initWithFile("buttons/anniu_green_02.png");
    
    image->setPosition(ccp(100, 100));
    
    m_view->addChild(image);
    
    image->release();
    
    
    Image* image1=new Image();
    image1->initWithFile("buttons/anniu_green_02.png");
    image1->setPosition(ccp(100, 140));
    image1->setContentSize(CCSizeMake(48, 32));
    m_view->addChild(image1);
    image1->release();
    
    Image* image2=new Image();
    image2->initWithFile("buttons/anniu_green_02.png");
    image2->setPosition(ccp(100, 60));
    image2->setContentSize(CCSizeMake(20, 32));
    m_view->addChild(image2);
    image2->release();

    
}


NS_CC_UI_END