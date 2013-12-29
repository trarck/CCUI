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

	//======================�������� ͬʱ����message=====================//
	/**
     * ��ʼ����һ��Scene,ʹ��ע�������
     */
    void runWithScene(const std::string& name);
    
    /**
     * ����һ��Scene��
     * ���Scene,ʹ��name����һ���µ�Scene������ʾ�����Ϸ�
     */
    void pushScene(const std::string& name);
    
    /**
     * �滻һ��Scene��
     * ���Scene,ʹ��name����һ���µ�Scene�����滻��ǰ���е�Scene
     */
    void replaceScene(const std::string& name);
    
    /**
     * �˳���ǰSceneջ�ϵ��������Scene,�����������ʾ����
     */
    void popScene();
    
    /**
     * �˳���ջ��,����ջ�׵�Scene��ʾ����
     */
    void popToRootScene();
    
    /**
     * ����ջԪ�أ�ֱ��ջ����level��Ԫ��,����ջ����Scene��ʾ����
     */
	void popToSceneStackLevel(int level);
};

NS_CC_UI_END

#endif /* defined(CCUI_GAMESCENEDIRECTOR_H_) */
