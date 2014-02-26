#ifndef CCUI_SCENES_SCENEREGISTERDATA_H_
#define CCUI_SCENES_SCENEREGISTERDATA_H_

#include <yhmvc/Core/SceneDirector.h>
#include "CCUIMacros.h"
//this file generate by tools.do not modify directorly

#include "Scenes/MainScene.h"
#include "Scenes/TestButtonScene.h"
#include "Scenes/TestComplexButtonScene.h"
#include "Scenes/TestDocumentOrgnaizerScene.h"
#include "Scenes/TestListOrgnaizerScene.h"
#include "Scenes/TestLabelScene.h"
#include "Scenes/TestUIBuilderScene.h"


NS_CC_UI_BEGIN

typedef struct SceneRegisterItem
{
    std::string name;
    cocos2d::yhmvc::SceneCreate createFun;
} SceneRegisterItem;

static SceneRegisterItem kSceneRegisterData[]=
{
	{kMainScene,SCENE_CREATE_SELECTOR(MainScene::create)},
	{kTestButtonScene,SCENE_CREATE_SELECTOR(TestButtonScene::create)},
	{kTestComplexButtonScene,SCENE_CREATE_SELECTOR(TestComplexButtonScene::create)},
	{kTestDocumentOrgnaizerScene,SCENE_CREATE_SELECTOR(TestDocumentOrgnaizerScene::create)},
	{kTestListOrgnaizerScene,SCENE_CREATE_SELECTOR(TestListOrgnaizerScene::create)},
	{kTestLabelScene,SCENE_CREATE_SELECTOR(TestLabelScene::create)},
	{kTestDocumentOrgnaizerPerformanceScene,SCENE_CREATE_SELECTOR(TestDocumentOrgnaizerPerformanceScene::create)},
	{kTestDocumentOrgnaizerZOrderScene,SCENE_CREATE_SELECTOR(TestDocumentOrgnaizerZOrderScene::create)},
	{kTestListOrgnaizerPerformanceScene,SCENE_CREATE_SELECTOR(TestListOrgnaizerPerformanceScene::create)},
	{kTestListOrgnaizerZOrderScene,SCENE_CREATE_SELECTOR(TestListOrgnaizerZOrderScene::create)},
	{kTestUIBuilderScene,SCENE_CREATE_SELECTOR(TestUIBuilderScene::create)},

};

NS_CC_UI_END

#endif //CCUI_SCENES_SCENEREGISTERDATA_H_
