#include <iostream>

using namespace std;


bool Ascending(int left, int right)
{
	return left > right;
}
int main()
{
	float refVariable;
	float valVariable;
	
	refVariable = 10.f;
	valVariable = 20.f;
	
	cout << "refVariable: " << refVariable << ", valVariable: " << valVariable << endl;

	auto F1Lamda = [&,valVariable](float a, float b) mutable noexcept->float
	{
		//capture clause
		/*
		[&refVariable, valVariable]
		[valVariable, &refVariable]
		[=,&refVariable]
		[&,valVariable]
		*/
		
		valVariable++;
		refVariable++;
		
		float result;
		result = a + b - (refVariable + valVariable);
		cout << "I'm in lamda expression:" <<valVariable<< endl;
		if (result == 25.f)
		{
			throw 25.f;
		}

		return result;
	};

	cout << "result: " << F1Lamda(20.f, 30.f)<<endl;

	int a = 10, b=5;
	[&]() {a = a ^ b; b = a ^ b; a = a ^ b; };
	cout << "aaaaa\n" << a << "aaa" << b << endl;
	[a, &b]() mutable {a = 1; b = 1; 
	cout << "Ccc" << ++++++a << endl; }();
	cout << "CCCCCC" << a << endl;

	auto var = []()->int* {return nullptr; };//return a pointer

	int arr[] = { 1,4,2,3,6,5,8,9,7 };
	int length = sizeof(arr) / sizeof(int);

	

	auto selectionSort = [](int *arr, int lenght/*, bool(*comparisonFunc)(int, int)*/)
	{
		auto func = [=](int left, int right) noexcept->bool
		{
			return left > right;
		};

		for (int i = 0; i < lenght-1; i++)
		{
			int min = i;
			for (int i_cr = i + 1; i < lenght; i_cr++)
			{
				if (/*comparisonFunc(arr[min], arr[i_cr])*/func(arr[min], arr[i_cr]))// throw exception why???
				{
					min = i_cr;
				}
			}
			std::swap(arr[min], arr[i]);
		}
	};

	selectionSort(arr, length);
	auto Factorial = [](unsigned int i)->int
	{
		if (i <= 1)
		{
			return 1;
		}
		return i * Factorial(i - 1);//
	};
	[] {};
	system("PAUSE");
	return 0;
}