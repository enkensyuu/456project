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
#include "SceneManager.h"

// �E�B���h�E�̃^�C�g���ɕ\�����镶����
const char TITLE[] = "3245_�l���nGO";

// �E�B���h�E����
const int WIN_WIDTH = 1920;

// �E�B���h�E�c��
const int WIN_HEIGHT = 980;

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine,
                   _In_ int nCmdShow) {
	// �E�B���h�E���[�h�ɐݒ�
	ChangeWindowMode(TRUE);

	// �E�B���h�E�T�C�Y���蓮�ł͕ύX�������A
	// ���E�B���h�E�T�C�Y�ɍ��킹�Ċg��ł��Ȃ��悤�ɂ���
	SetWindowSizeChangeEnableFlag(FALSE, FALSE);

	// �^�C�g����ύX
	SetMainWindowText(TITLE);

	// ��ʃT�C�Y�̍ő�T�C�Y�A�J���[�r�b�g����ݒ�(���j�^�[�̉𑜓x�ɍ��킹��)
	SetGraphMode(WIN_WIDTH, WIN_HEIGHT, 32);

	// ��ʃT�C�Y��ݒ�(�𑜓x�Ƃ̔䗦�Őݒ�)
	SetWindowSizeExtendRate(1.0);

	// ��ʂ̔w�i�F��ݒ肷��
	SetBackgroundColor(0x00, 0x00, 0x00);

	// DXlib�̏�����
	if (DxLib_Init() == -1) { return -1; }

	// (�_�u���o�b�t�@)�`���O���t�B�b�N�̈�͗��ʂ��w��
	SetDrawScreen(DX_SCREEN_BACK);

	// �摜�Ȃǂ̃��\�[�X�f�[�^�̕ϐ��錾�Ɠǂݍ���


	// �Q�[�����[�v�Ŏg���ϐ��̐錾
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
	//�V�[���̏�����
	SceneManager scene = SceneManager::TITLE;

	//�^�C�g���̏�����
	Title* title = new Title();
	title->Intialize();

	//�}�j���A���̏�����
	Manual* manual = new Manual();
	manual->Intialize();

	//�N���A��ʂ̏�����
	Clear* clear = new Clear();
	clear->Intialize();

	//�Q�[���I�[�o�[��ʂ̏�����
	GameOver* gameOver = new GameOver();
	gameOver->Intialize();


	// �ŐV�̃L�[�{�[�h���p
	char keys[256] = {0};

	// 1���[�v(�t���[��)�O�̃L�[�{�[�h���
	char oldkeys[256] = {0};

	// �Q�[�����[�v
	while (true) {
		// �ŐV�̃L�[�{�[�h��񂾂������̂�1�t���[���O�̃L�[�{�[�h���Ƃ��ĕۑ�
		for (int i = 0; i < 256; i++)
		{
			oldkeys[i] = keys[i];
		}
		// �ŐV�̃L�[�{�[�h�����擾
		GetHitKeyStateAll(keys);

		// ��ʃN���A
		ClearDrawScreen();
		//---------  ��������v���O�������L�q  ----------//

		// �X�V����

		//�Q�[���̃V�[���J��
		switch (scene)
		{
			case SceneManager::TITLE:
			
				//�^�C�g���V�[���̍X�V����
				title->Update(keys, oldkeys);

				//�V�[���̐؂�ւ�
				if (keys[KEY_INPUT_SPACE] == 1 && oldkeys[KEY_INPUT_SPACE] == 0)
				{
					scene = title->GetNextScene();
				}

				break;

			case SceneManager::MANUAL:

				//�}�j���A���V�[���̍X�V����
				manual->Update(keys, oldkeys);

				//�V�[���̐؂�ւ�
				if (keys[KEY_INPUT_SPACE] == 1 && oldkeys[KEY_INPUT_SPACE] == 0)
				{
					scene = manual->GetNextScene();
				}

				break;

			case SceneManager::GAMESCENE:

				//�Q�[���V�[���̍X�V����

				break;

			case SceneManager::CLEAR:

				//�N���A�V�[���̍X�V����
				clear->Update(keys, oldkeys);

				//�V�[���̐؂�ւ�
				if (keys[KEY_INPUT_SPACE] == 1 && oldkeys[KEY_INPUT_SPACE] == 0)
				{
					scene = clear->GetNextScene();
				}

				break;

			case SceneManager::GAMEOVER:

				//�Q�[���I�[�o�[�V�[���̍X�V����
				gameOver->Update(keys, oldkeys);

				//�V�[���̐؂�ւ�
				if (keys[KEY_INPUT_SPACE] == 1 && oldkeys[KEY_INPUT_SPACE] == 0)
				{
					scene = gameOver->GetNextScene();
				}
		gameScene->Update();
		//gameScene_2->Update();
		//gameScene_3->Update();
		//gameScene_4->Update();
		//gameScene_5->Update();

				break;
		}

		// �`�揈��
		gameScene->Draw();
		//gameScene_2->Draw();
		//gameScene_3->Draw();
		//gameScene_4->Draw();
		//gameScene_5->Draw();

		//�e�V�[���̕`��
		switch (scene)
		{
			case SceneManager::TITLE:

				//�^�C�g���V�[���̕`�揈��
				title->Draw();

				break;

			case SceneManager::MANUAL:

				//�}�j���A���V�[���̕`�揈��
				manual->Draw();

				break;

			case SceneManager::GAMESCENE:

				//�Q�[���V�[���̕`�揈��

				break;

			case SceneManager::CLEAR:

				//�N���A�V�[���̕`�揈��
				clear->Draw();

				break;

			case SceneManager::GAMEOVER:

				//�Q�[���I�[�o�[�V�[���̕`�揈��
				gameOver->Draw();

				break;
		}

		DrawFormatString(1280, 500, GetColor(255, 255, 255), "scene %d", scene);

		//---------  �����܂łɃv���O�������L�q  ---------//
		// (�_�u���o�b�t�@)����
		ScreenFlip();

		// 20�~���b�ҋ@(�^��60FPS)
		WaitTimer(20);

		// Windows�V�X�e�����炭�������������
		if (ProcessMessage() == -1) {
			break;
		}

		// ESC�L�[�������ꂽ�烋�[�v���甲����
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) {
			break;
		}
	}

	//�e�V�[���̉��
	delete title;
	delete manual;
	delete clear;
	delete gameOver;

	// Dx���C�u�����I������
	DxLib_End();

	delete gameScene;
	delete gameScene_2;
	delete gameScene_3;
	delete gameScene_4;
	delete gameScene_5;

	// ����I��
	return 0;
}
