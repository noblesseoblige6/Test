// stdafx.h : 標準のシステム インクルード ファイルのインクルード ファイル、または
// 参照回数が多く、かつあまり変更されない、プロジェクト専用のインクルード ファイル
// を記述します。
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーから使用されていない部分を除外します。
// Windows ヘッダー ファイル:
#include <windows.h>

// C ランタイム ヘッダー ファイル
#include <cstdlib>
#include <memory>
#include <malloc.h>
#include <tchar.h>

// TODO: プログラムに必要な追加ヘッダーをここで参照してください
#include <d3d12.h>
#include <dxgi1_4.h>
#include <D3Dcompiler.h>
#include <DirectXMath.h>

#include <wrl/client.h>
#include <shlwapi.h>

#define DIRECTINPUT_VERSION		0x0800		// DirectInputのバージョン情報
#include<dinput.h>

#include "acLib.h"

#include "Shader.h"
#include "Vertex.h"

#include "Node.h"
#include "Camera.h"
#include "Light.h"
#include "Model.h"

#include "Scene.h"

#include "RenderContext.h"

#include "RenderPass.h"
#include "RenderPassClear.h"
#include "RenderPassForward.h"
#include "RenderPassShadow.h"

#include "InputManager.h"

//#include "App.h"

using namespace acLib;
using namespace acLib::constant;
using namespace acLib::util;
using namespace acLib::vec;
using namespace acLib::mat;
using namespace acLib::DX12;
