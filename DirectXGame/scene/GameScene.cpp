#include "GameScene.h"
#include "TextureManager.h"
#include <cassert>
#include "ImGuiManager.h"
#include "PrimitiveDrawer.h"
#include "AxisIndicator.h"

GameScene::GameScene() {}

GameScene::~GameScene() { 

	//3Dモデルデータの解放
	delete model_;
	//自キャラの解放
	delete player_;
}

void GameScene::Initialize() {

	//dxCommon_ = DirectXCommon::GetInstance();
	//input_ = Input::GetInstance();
	//audio_ = Audio::GetInstance();

	////ファイル名を指定してテクスチャを読み込む
	//textureHandle_ = TextureManager::Load("sample.png");
	

	//3Dモデルの生成
	model_ = Model::Create();

	//ビュープロジェクションの初期化
	viewProjection_.Initialize();

	//自キャラの生成
	player_ = new Player();
	//自キャラの初期化
	player_->Initialize();


	////ワールドトランスフォームの初期化
	//worldTransform_.Initialize();

	////サウンドデータの読み込み
	//soundDataHandle_ = audio_->LoadWave("fanfare.wav");
	//////音声再生
	////audio_->PlayWave(soundDataHandle_);
	////再生(停止)
	//voiceHandle_ = audio_->PlayWave(soundDataHandle_, true);

	////ライン描画が参照するビュープロジェクションを指定する(アドレス渡し)
	//PrimitiveDrawer::GetInstance()->SetViewProjection(&viewProjection_);

	////デバッグカメラの生成
	//debugCamera_ = new DebugCamera(1280, 720);

	////軸方向表示の表示を有効にする
	//AxisIndicator::GetInstance()->SetVisible(true);
	////軸方向表示が参照するビュープロジェクションを指定する(アドレス渡し)
	//AxisIndicator::GetInstance()->SetTargetViewProjection(&debugCamera_->GetViewProjection());

}

void GameScene::Update() { 

	//自キャラの更新
	player_->Update();

	////2D
	////スプライトの今の座標を取得
	//Vector2 position = sprite_->GetPosition(); 
	////座標を{2,1}移動
	//position.x += 2.0f;
	//position.y += 2.0f;
	////移動した座標をスプライトに反映
	//sprite_->SetPosition(position);

	////音声
	////スペースキーを押した瞬間
	//if (input_->TriggerKey(DIK_SPACE)) {
	////音声停止
	//	audio_->StopWave(voiceHandle_);
	//}

#ifdef DEBUG

	//デバッグテキストの表示
	ImGui::Begin("Debub1");
	//float3入力ボックス
	ImGui::InputFloat3("InputFloat3", inputFloat3);
	//float3スライダー
	ImGui::SliderFloat3("sliderFloat3", inputFloat3, 0.0f, 1.0f);
	ImGui::Text("Kamata Tarou %d %d %d", 2050, 12, 31);
	ImGui::End();

	//デモウィンドウの表示を有効化
	ImGui::ShowDemoWindow();

#endif // DEBUG

	//デバッグカメラの更新
	//debugCamera_->Update();

}

void GameScene::Draw() {

	//自キャラの描画
	player_->Draw();

	// コマンドリストの取得
	//ID3D12GraphicsCommandList* commandList = dxCommon_->GetCommandList();

#pragma region 背景スプライト描画
	// 背景スプライト描画前処理
	//Sprite::PreDraw(commandList);

	/// <summary>
	/// ここに背景スプライトの描画処理を追加できる
	/// </summary>
	
	//ラインを描画する
	//PrimitiveDrawer::GetInstance()->DrawLine3d({0, 0, 0}, {0, 10, 0}, {1.0f, 0.0f, 0.0f, 1.0f});

	// スプライト描画後処理
	//Sprite::PostDraw();
	// 深度バッファクリア
	//dxCommon_->ClearDepthBuffer();
#pragma endregion

#pragma region 3Dオブジェクト描画
	// 3Dオブジェクト描画前処理
	//Model::PreDraw(commandList);

	/// <summary>
	/// ここに3Dオブジェクトの描画処理を追加できる
	/// </summary>
	//3D
	//model_->Draw(worldTransform_, debugCamera_->GetViewProjection(), textureHandle_);

	// 3Dオブジェクト描画後処理
	//Model::PostDraw();
#pragma endregion

#pragma region 前景スプライト描画
	// 前景スプライト描画前処理
	//Sprite::PreDraw(commandList);

	/// <summary>
	/// ここに前景スプライトの描画処理を追加できる
	/// </summary>
	////2D
	//sprite_->Draw();

	// スプライト描画後処理
	//Sprite::PostDraw();

#pragma endregion
}
