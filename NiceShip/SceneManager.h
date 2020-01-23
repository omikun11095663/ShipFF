#pragma once
#pragma once
#include "Scene.h"
#include <unordered_map>

enum SceneState {
	Initialize,	//	������
	Update,		//	�X�V
	Release		//	�Q�[���V�[��
};

//	�V�[���Ǘ��N���X
class SceneManager
{
private:
	SceneManager() : _state(SceneState::Initialize),
		_currentScene(nullptr), _nextScene(nullptr) {}
	SceneManager(const SceneManager&) {}
	SceneManager& operator=(const SceneManager&) {}
public:
	//	�f�X�g���N�^
	~SceneManager();

	//	�C���X�^���X���擾
	static SceneManager& Instance();

	//	�V�[����ǉ�����
	void AddScene(std::string sceneName, Scene* scene);

	//	�J�n�V�[����ݒ�
	void StartScene(std::string sceneName);

	//	�V�[���J��
	void LoadScene(std::string sceneName);

	//	�X�V����
	void Update();

private:
	//	�V�[���̍X�V����
	void SceneUpdate();

	//	���̃V�[���̑��ݗL�����m�F
	void NextScene();

private:
	Scene* _currentScene;	//	���ݎ��s���Ă���V�[��
	Scene* _nextScene;		//	���Ɏ��s����V�[��
	SceneState _state;			//	�V�[���̏��
	std::unordered_map<std::string, Scene*> _scenes;
};