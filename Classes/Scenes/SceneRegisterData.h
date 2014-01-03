//
//  SceneRegisterData.h
//  CCMVC
//
//  Created by duanhouhai on 13-11-1.
//
//

#ifndef CCUI_SCENES_SCENEREGISTERDATA_H_
#define CCUI_SCENES_SCENEREGISTERDATA_H_

#include <yhmvc/Core/SceneDirector.h>
#include "CCUIMacros.h"

typedef struct SceneRegisterItem
{
    std::string name;
    cocos2d::yhmvc::SceneCreate createFun;
} SceneRegisterItem;

//TODO use generate tool to create this file
#include "SceneDefine.h"
#include "Scenes/MainScene.h"
#include "Scenes/TestButtonScene.h"
#include "Scenes/TestDocumentOrgnaizerScene.h"
#include "Scenes/TestListOrgnaizerScene.h"
#include "Scenes/TestLabelScene.h"

NS_CC_UI_BEGIN

static SceneRegisterItem kSceneRegisterData[]=
{
    {kMainScene,SCENE_CREATE_SELECTOR(MainScene::create)},
	{kTestButtonScene,SCENE_CREATE_SELECTOR(TestButtonScene::create)},
	{kTestDocumentOrgnaizerScene,SCENE_CREATE_SELECTOR(TestDocumentOrgnaizerScene::create)},
	{kTestDocumentOrgnaizerPerformanceScene,SCENE_CREATE_SELECTOR(TestDocumentOrgnaizerPerformanceScene::create)},
	{kTestDocumentOrgnaizerZOrderScene,SCENE_CREATE_SELECTOR(TestDocumentOrgnaizerZOrderScene::create)},
	{kTestListOrgnaizerScene,SCENE_CREATE_SELECTOR(TestListOrgnaizerScene::create)},
	{kTestListOrgnaizerPerformanceScene,SCENE_CREATE_SELECTOR(TestListOrgnaizerPerformanceScene::create)},
	{kTestListOrgnaizerZOrderScene,SCENE_CREATE_SELECTOR(TestListOrgnaizerZOrderScene::create)},
    {kTestLabelScene,SCENE_CREATE_SELECTOR(TestLabelScene::create)},
};

NS_CC_UI_END

#endif //CCUI_SCENES_SCENEREGISTERDATA_H_
