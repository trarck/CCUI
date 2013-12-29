#ifndef CCUI_SCENES_TESTDOCUMENTORGNAIZERSCENE_H_
#define CCUI_SCENES_TESTDOCUMENTORGNAIZERSCENE_H_

#include "ThreeSegmentScene.h"

NS_CC_UI_BEGIN

class TestDocumentOrgnaizerScene : public ThreeSegmentScene
{
public:

    void loadContents();

    CREATE_FUNC(TestDocumentOrgnaizerScene);
    
private:
    
};

class TestDocumentOrgnaizerPerformanceScene : public ThreeSegmentScene
{
public:

    void loadContents();

    CREATE_FUNC(TestDocumentOrgnaizerPerformanceScene);   
};

class TestDocumentOrgnaizerZOrderScene : public ThreeSegmentScene
{
public:

    void loadContents();

    CREATE_FUNC(TestDocumentOrgnaizerZOrderScene);   
};

NS_CC_UI_END

#endif // CCUI_SCENES_TESTDOCUMENTORGNAIZERSCENE_H_
