#include "TestLabelController.h"
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

TestLabelController::TestLabelController(void)
{
    
}


TestLabelController::~TestLabelController(void)
{
    CCLOG("TestLabelController destroy");
}

void TestLabelController::viewDidLoad()
{
    CCSize contentSize = this->getPreferredContentSize();

    //middle
    yhgui::LabelTTF* label1=yhgui::LabelTTF::create("this in middle", "Helvetica", 22);
    label1->setPosition(ccp(contentSize.width/2,contentSize.height/2));
    m_view->addChild(label1);
    
    //top
    yhgui::LabelTTF* label2=yhgui::LabelTTF::create("this in top", "Helvetica", 22);
    label2->setPosition(ccp(contentSize.width/2,contentSize.height));
    m_view->addChild(label2);
    
    //bottom
    yhgui::LabelTTF* label3=yhgui::LabelTTF::create("this in botton", "Helvetica", 22);
    label3->setPosition(ccp(contentSize.width/2,0));
    m_view->addChild(label3);
    
    CCLOG("size:%f,%f",label1->getContentSize().width,label1->getContentSize().height);
    CCLOG("size:%f,%f",label2->getContentSize().width,label2->getContentSize().height);
    CCLOG("size:%f,%f",label3->getContentSize().width,label3->getContentSize().height);
}


NS_CC_UI_END