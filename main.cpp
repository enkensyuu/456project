#include "DxLib.h"
#include "Title.h"
#include "Manual.h"
#include "GameScene.h"
#include "Clear.h"
#include "GameOver.h"
#include "GameScene_2.h"
#include "GameScene_3.h"
#include "GameScene_4.h"
#include "GameScene_5.h"

// ウィンドウのタイトルに表示する文字列
const char TITLE[] = "3245_四字熟GO";

// ウィンドウ横幅
const int WIN_WIDTH = 1920;

// ウィンドウ縦幅
const int WIN_HEIGHT = 980;

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine,
                   _In_ int nCmdShow) {
	// ウィンドウモードに設定
	ChangeWindowMode(TRUE);

	// ウィンドウサイズを手動では変更させず、
	// かつウィンドウサイズに合わせて拡大できないようにする
	SetWindowSizeChangeEnableFlag(FALSE, FALSE);

	// タイトルを変更
	SetMainWindowText(TITLE);

	// 画面サイズの最大サイズ、カラービット数を設定(モニターの解像度に合わせる)
	SetGraphMode(WIN_WIDTH, WIN_HEIGHT, 32);

	// 画面サイズを設定(解像度との比率で設定)
	SetWindowSizeExtendRate(1.0);

	// 画面の背景色を設定する
	SetBackgroundColor(0x00, 0x00, 0x00);

	// DXlibの初期化
	if (DxLib_Init() == -1) { return -1; }

	// (ダブルバッファ)描画先グラフィック領域は裏面を指定
	SetDrawScreen(DX_SCREEN_BACK);

	// 画像などのリソースデータの変数宣言と読み込み


	// ゲームループで使う変数の宣言
	GameScene* gameScene = new GameScene;
	GameScene_2* gameScene_2 = new GameScene_2;
	GameScene_3* gameScene_3 = new GameScene_3;
	GameScene_4* gameScene_4 = new GameScene_4;
	GameScene_5* gameScene_5 = new GameScene_5;

	gameScene->Initialize();
	//gameScene_2->Initialize();
	//gameScene_3->Initialize();
	//gameScene_4->Initialize();
	//gameScene_5->Initialize();

	// 最新のキーボード情報用
	char keys[256] = {0};

	// 1ループ(フレーム)前のキーボード情報
	char oldkeys[256] = {0};

	// ゲームループ
	while (true) {
		// 最新のキーボード情報だったものは1フレーム前のキーボード情報として保存
		// 最新のキーボード情報を取得
		GetHitKeyStateAll(keys);

		// 画面クリア
		ClearDrawScreen();
		//---------  ここからプログラムを記述  ----------//

		// 更新処理
		gameScene->Update();
		//gameScene_2->Update();
		//gameScene_3->Update();
		//gameScene_4->Update();
		//gameScene_5->Update();

		// 描画処理
		gameScene->Draw();
		//gameScene_2->Draw();
		//gameScene_3->Draw();
		//gameScene_4->Draw();
		//gameScene_5->Draw();

		//---------  ここまでにプログラムを記述  ---------//
		// (ダブルバッファ)裏面
		ScreenFlip();

		// 20ミリ秒待機(疑似60FPS)
		WaitTimer(20);

		// Windowsシステムからくる情報を処理する
		if (ProcessMessage() == -1) {
			break;
		}

		// ESCキーが押されたらループから抜ける
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) {
			break;
		}
	}
	// Dxライブラリ終了処理
	DxLib_End();

	delete gameScene;
	delete gameScene_2;
	delete gameScene_3;
	delete gameScene_4;
	delete gameScene_5;

	// 正常終了
	return 0;
}
