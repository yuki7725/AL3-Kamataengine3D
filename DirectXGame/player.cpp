#include "player.h"
#include <cassert>

Player::Player() {}

Player::~Player() {

}

void Player::Initialize(Model* model, uint32_t textureHandle) 
{	
	//nullポインタチェック
	assert(model);

	//引数として受け取ったデータをメンバ変数に記録

	//ワールド変換の初期化

}

//void Player::Initialize() {}

void Player::Update() {}

void Player::Draw() {}



