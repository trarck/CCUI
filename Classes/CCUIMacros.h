//
//  GameMacros.h
//  CCMVC
//
//  Created by duanhouhai on 13-11-1.
//
//

#ifndef CCUI_CCUIMACROS_H_
#define CCUI_CCUIMACROS_H_

#ifdef __cplusplus
#define NS_CC_UI_BEGIN                     namespace cocos2d { namespace ccui {
#define NS_CC_UI_END                       }}
#define USING_NS_CC_UI					using namespace cocos2d::ccui
#else
#define NS_CC_UI_BEGIN
#define NS_CC_UI_END
#define USING_NS_CC_UI
#endif //__cplusplus

#endif //CCUI_CCUIMACROS_H_
