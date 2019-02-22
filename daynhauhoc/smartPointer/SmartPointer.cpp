#include<iostream>
#include "UniquePointer.h"
#include "SharePointer.h"

using namespace std;

int main()
{
	UniquePointer* uniqueTest;
	SharePointer* sharedPointer;

	cout << "*******************Sell Home Service**********************" << endl;
	uniqueTest->getInstance()->usingUniquePointer();
	cout << "*******************Rent Home Service**********************" << endl;
	sharedPointer->getInstance()->usingSharePointer();

	system("PAUSE");
	return 0;
}