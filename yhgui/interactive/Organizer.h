#ifndef COCOS_YHGUI_INTERACTIVE_ORGANIZER_H_
#define COCOS_YHGUI_INTERACTIVE_ORGANIZER_H_

#include "cocos2d.h"
#include "../YHGUIMacros.h"
#include "Range.h"

NS_CC_YHGUI_BEGIN

/**
 * 处理交互事件
 * 主要处理UItouch事件
 * SAT(Separating Axis Theorem)分离轴
 * 注意:对于点，世界做标和本地坐标没有区别。
       对于矩形区域在转成世界坐标的时候，新的矩形和以前可能不一样。同样世界坐标转成本地坐标也会不一样。
       对于矩形和点的比较，则把点转换成矩形的本地坐标进行比较。
       对于矩形和矩形的比较，首先比较一个矩形的中心，再比较4个顶点是否在另一个矩形内。按矩形与点的比较方法。
 */
class Organizer:public CCObject,public CCTouchDelegate
{
public:
    
    Organizer();
    
    ~Organizer();
    
    bool init();

    /**
     * 取得所有包含点的结点
     */
    virtual CCArray* getNodesContainPoint(CCPoint point){};
   
    /**
     * 取得所有在某个范围的结点
     */
    virtual CCArray* getNodesInRange(CCRect range){};

    /**
     * 注册一个touch dispatcher。
     */
    virtual void registerWithTouchDispatcher(void);
    
    /**
     * 取消注册一个touch dispatcher。
     */
    virtual void unregisterWithTouchDispatcher(void);
    
    
    void setInteractivePriority(int interactivePriority);
    
    inline int getInteractivePriority()
    {
        return m_interactivePriority;
    }
    
    inline void setRegisteredTouchDispatcher(bool registeredTouchDispatcher)
    {
        m_registeredTouchDispatcher = registeredTouchDispatcher;
    }
    
    inline bool isRegisteredTouchDispatcher()
    {
        return m_registeredTouchDispatcher;
    }
protected:
    /**
     * 处理交互事件的优先级
     */
    int m_interactivePriority;
    
    /**
     * 是否注册过交互事件处理
     */
    bool m_registeredTouchDispatcher;
    
};


NS_CC_YHGUI_END

#endif // COCOS_YHGUI_INTERACTIVE_ORGANIZER_H_
