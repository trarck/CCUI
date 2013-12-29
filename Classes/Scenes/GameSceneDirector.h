//
//  GameSceneDirector.h
//  CCMVC
//
//  Created by duanhouhai on 13-11-1.
//
//

#ifndef CCUI_GAMESCENEDIRECTOR_H_
#define CCUI_GAMESCENEDIRECTOR_H_

#include <yhmvc/Core/SceneDirector.h>
#include "CCUIMacros.h"
#include "SceneDefine.h"

NS_CC_UI_BEGIN

class GameSceneDirector:public yhmvc::SceneDirector
{
public:
    
    static GameSceneDirector* getInstance();

	//======================场景操作 同时加上message=====================//
	/**
     * 开始运行一个Scene,使用注册的名子
     */
    void runWithScene(const std::string& name);
    
    /**
     * 叠加一个Scene。
     * 这个Scene,使用name创建一个新的Scene，并显示在最上方
     */
    void pushScene(const std::string& name);
    
    /**
     * 替换一个Scene。
     * 这个Scene,使用name创建一个新的Scene，并替换当前运行的Scene
     */
    void replaceScene(const std::string& name);
    
    /**
     * 退出当前Scene栈上的最上面的Scene,并把下面的显示出来
     */
    void popScene();
    
    /**
     * 退出到栈底,并把栈底的Scene显示出来
     */
    void popToRootScene();
    
    /**
     * 弹出栈元素，直到栈还有level个元素,并把栈顶的Scene显示出来
     */
	void popToSceneStackLevel(int level);
};

NS_CC_UI_END

#endif /* defined(CCUI_GAMESCENEDIRECTOR_H_) */
