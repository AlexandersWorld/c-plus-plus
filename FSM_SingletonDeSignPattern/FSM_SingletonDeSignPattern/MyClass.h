#pragma once

class MyClass
{
private:
	int m_iNum = 0;

	MyClass() {};


	MyClass(const MyClass&);
	MyClass& operator=(const MyClass&);

public:
	~MyClass() {};

	int GetVal() const { return m_iNum; }

	static MyClass* Instance();
};