#include <iostream>

using namespace std;

enum pointer
{
POINTER_TYPE,
POINTER_CHAR,
POINTER_MEMORY_ALLOCATE,
POINTER_
};

int main() {
	pointer test = (pointer)0;

	cout << "Choose your test: " << endl;
	cout << "============================================================================================\n" << endl;
	//cin >> test;
	test = POINTER_CHAR;

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
		case POINTER_CHAR:
		{
			cout << "\n============= POINTER_CHAR ===============" << endl;
			char str[] = "Hello!";
			char *p_str = str;
			char c = 'a';

			cout << "&c: " << &c << endl;
			cout <<"str: "<< str << endl;
			cout << "type of str: " << typeid(str).name() << endl;
			cout << "p_str: "<< p_str << endl;
			cout << "type of p_str: " << typeid(p_str).name() << endl;
			cout << "&str: " << &str << endl;
			cout << "type of &str: " << typeid(&str).name() << endl;
			cout << "&p_str: " << &p_str << endl;
			cout << "type of &p_str: " << typeid(&p_str).name() << endl;
			break;
		}
		case POINTER_MEMORY_ALLOCATE:
		{
			cout << "\n============= POINTER_MEMORY_ALLOCATE ===============" << endl;

			break;
		}
		case POINTER_:
		{
			cout << "\n============= POINTER_TYPE ===============" << endl;
			
			break;
		}			
		default:
			break;
	}

	system("pause");
	return 0;
}