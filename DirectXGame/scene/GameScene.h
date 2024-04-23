#pragma once

//#include "DebugCamera.h"
//#include "Audio.h"
//#include "DirectXCommon.h"
//#include "Input.h"
//#include "Sprite.h"
#include "ViewProjection.h"
#include "player.h"

/// <summary>
/// ゲームシーン
/// </summary>
class GameScene {

public: // メンバ関数
	/// <summary>
	/// コンストクラタ
	/// </summary>
	GameScene();

	/// <summary>
	/// デストラクタ
	/// </summary>
	~GameScene();

	/// <summary>
	/// 初期化
	/// </summary>
	void Initialize();

	/// <summary>
	/// 毎フレーム処理
	/// </summary>
	void Update();

	/// <summary>
	/// 描画
	/// </summary>
	void Draw();

private: // メンバ変数
	
	//3Dモデル
	Model* model_ = nullptr;
	//自キャラ
	Player* player_ = nullptr;

	//ビュープロジェクション
	ViewProjection viewProjection_;


	//DirectXCommon* dxCommon_ = nullptr;
	//Input* input_ = nullptr;
	//Audio* audio_ = nullptr;
	////デバッグカメラ
	//DebugCamera* debugCamera_ = nullptr;

	
	////テクスチャハンドル
	//uint32_t textureHandle_ = 0;
	////サウンドデータハンドル
	//uint32_t soundDataHandle_ = 0;
	////音声再生ハンドル
	//uint32_t voiceHandle_ = 0;

	//ImGuiで値を入力する変数
	//float inputFloat3[3] = {0, 0, 0};

	/// <summary>
	/// ゲームシーン用
	/// </summary>
};
