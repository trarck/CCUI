#ifndef CCUI_SCENES_TESTLISTORGNAIZERSCENE_H_
#define CCUI_SCENES_TESTLISTORGNAIZERSCENE_H_

#include "ThreeSegmentScene.h"

NS_CC_UI_BEGIN

class TestListOrgnaizerScene : public ThreeSegmentScene
{
public:

    void loadContents();

    CREATE_FUNC(TestListOrgnaizerScene);
};

class TestListOrgnaizerPerformanceScene : public ThreeSegmentScene
{
public:

    void loadContents();

    CREATE_FUNC(TestListOrgnaizerPerformanceScene);
};

class TestListOrgnaizerZOrderScene : public ThreeSegmentScene
{
public:

    void loadContents();

    CREATE_FUNC(TestListOrgnaizerZOrderScene);
};


NS_CC_UI_END

#endif // CCUI_SCENES_TESTLISTORGNAIZERSCENE_H_
