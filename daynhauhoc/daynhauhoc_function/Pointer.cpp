#include <iostream>

using namespace std;

enum pointer
{
POINTER_TYPE,
POINTER_
};

int main() {
	pointer test = (pointer)0;

	cout << "Choose your test: " << endl;
	cout << "============================================================================================\n" << endl;
	//cin >> test;
	test = POINTER_TYPE;

	switch (test)
	{
		case POINTER_TYPE: 
		{
			cout << "\n============= POINTER_TYPE ===============" << endl;
			float* fPtr;
			float fVal = 20;
			fPtr = &fVal;
			cout << "type of &fVal: " << typeid(&fVal).name() << endl;
			break;
		} 
		case POINTER_:
		{
			cout << "\n============= POINTER_TYPE ===============" << endl;
			float* fPtr;
			float fVal = 20;
			fPtr = &fVal;
			cout << "type of &fVal: " << typeid(&fVal).name() << endl;
			break;
		}			
		default:
			break;
	}

	system("pause");
	return 0;
}