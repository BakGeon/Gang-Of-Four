#pragma once
template <typename T>
class Singleton
{
protected:
	Singleton() {}
	virtual ~Singleton() {}

private:
	static T* _instance;

public:
	static T* GetInstance()
	{
		if (_instance == nullptr)
			_instance = new T;
		return _instance;
	}

	static void DestoryInstance()
	{
		if (_instance != nullptr)
		{
			delete _instance;
			_instance = nullptr;
		}
	}
};

template <typename T> T* Singleton<T>::_instance = nullptr;
