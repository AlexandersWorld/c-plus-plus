#include "MyClass.h"

MyClass* MyClass::Instance()
{
	static MyClass instance;

	return &instance;
}