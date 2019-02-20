#include<iostream>
#include "UniquePointer.h"

using namespace std;

int main()
{
	UniquePointer* uniqueTest;

	uniqueTest = new UniquePointer();
	uniqueTest->usingUniquePointer();

	system("PAUSE");
	return 0;
}