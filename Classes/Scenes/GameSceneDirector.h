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
};

NS_CC_UI_END

#endif /* defined(CCUI_GAMESCENEDIRECTOR_H_) */
