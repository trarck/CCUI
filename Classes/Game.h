//
//  Game.h
//  CCMVC
//
//  Created by duanhouhai on 13-11-1.
//
//

#ifndef __CCMVC__Game__
#define __CCMVC__Game__

#include "cocos2d.h"
#include "CCUIMacros.h"

NS_CC_UI_BEGIN

class Game:public CCObject
{
public:
    
    
    static Game* getInstance();

    /**
	 * ���ó�������
	 */
    void setupSceneDirector();
};

NS_CC_UI_END



#endif /* defined(__CCMVC__Game__) */
