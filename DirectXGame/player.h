#pragma once

#include "Model.h"
#include "WorldTransform.h"

///<summary>
//自キャラ
///<summary>

class Player {

public:
	
	Player();

	~Player();

	/// <summary>
	/// 初期化処理
	/// </summary>
	/// <param name="model">モデルのポインタ</param>
	/// <param name="textureHandle">テクスチャハンドル</param>
	
	void Initialize(Model*model,uint32_t textureHandle);

	///< summary>
	///更新
	///< summary>
	void Update();

	///< summary>
	///描画
	///< summary>
	void Draw();

private:

	//ワールド変換データ
	WorldTransform worldTransform_;

	// 3Dモデル
	Model* model_ = nullptr;

	//テクスチャハンドル
	uint32_t textureHandle_ = 0u;


};