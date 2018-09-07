#include <iostream>

using namespace std;

int main() {
	float* fPtr;
	float fVal = 20;
	fPtr = &fVal;
	cout <<"type of &fVal: "<< typeid(&fVal).name() << endl;
	system("pause");
	return 0;
}