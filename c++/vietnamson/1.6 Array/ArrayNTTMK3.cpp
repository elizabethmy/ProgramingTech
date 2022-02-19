#include <iostream>
// CÁC BÀI TẬP TÌM KIẾM VÀ LIỆT KÊ
void InputArray(int arr[], int n)
{
	int i = 0;
	for (;i < n;i++)
	{
		std::cout << "\n Input numer: ";
		std::cin >> a[i];
	}
}

void OutputArray(float arr[], int n)
{
	int i = 0;
	for (;i < n;i++)
	{
		std::cout << " " << a[i];
	}
}

void InputArray(float arr[], int n)
{
	int i = 0;
	for (;i < n;i++)
	{
		std::cout << "\n Input numer: ";
		std::cin >> a[i];
	}
}

void OutputArray(float arr[], int n)
{
	int i = 0;
	for (;i < n;i++)
	{
		std::cout << " " << a[i];
	}
}

//extra
//ex.1 Sort the positive numbers in the array of float number ascending
void Swap(float &a, float &b)
{
	a = a - b;
	b = a + b
	a = b - a;
}
void SortPositiveNumbersAscending(float arr[], int n)
{
	int i = 0, j = 0;
	for (;i < n - 1;i++)
	{
		if (a[i] <= 0)
		{
			continue;
		}
		for (j = i + 1;i < n; j++)
		{
			if (a[j] <= 0)
			{
				continue;
			}
			if (a[i] > a[j])
			{
				Swap(a[i], a[j]);
			}
		}
	}
}
//ex.2 Sort the positive numbers ascending, the negative numbers descending in float array
void SortNegativeNumbersDescending(float arr[], int n)
{
	int i = 0, j = 0;
	for (;i < n - 1;i++)
	{
		if (a[i] >= 0)
		{
			continue;
		}
		for (j = i + 1;j < n;j++)
		{
			if (a[j] >= 0)
			{
				continue;
			}
			if (a[i] < a[j])
			{
				Swap(a[i], a[j]);
			}
		}
	}
}

void SortSignNumbersEx2(float arr[], int n )
{
	SortPositiveNumbersAscending(arr,n);
	SortNegativeNumbersDescending(arr,n);
}

//ex.3 Sort the even, odd numbers ascending in integer array
void Swap(int &a, int &b)
{
	a = a - b;
	b = a + b;
	a = b - a;
}
void SortEvenNumbersAscending(int arr[], int n)
{
	int i = 0, j = 0;
	for (;i < n - 1;i++)
	{
		if (a[i] % 2 != 0)
		{
			continue;
		}
		for (j = i + 1;j < n;j++)
		{
			if (a[j] % 2 != 0)
			{
				continue;
			}
			if (a[i] > a[j])
			{
				Swap(a,b);
			}
		}
	}
}

void SortOddNumbersAscending(int arr[], int n)
{
	int i = 0, j = 0;
	for (;i < n;i++)
	{
		if (a[i] % 2 == 0)
		{
			continue;
		}
		for (j = i + 1;j < n;j++)
		{
			if (a[j] % 2 == 0)
			{
				continue;
			}
			if (a[i] > a[j])
			{
				Swap(a,b);
			}
		}
	}
}

void SordEvenOddNumbersEx3(int arr[], int n)
{
	SortEvenNumbersAscending(arr,n);
	SortOddNumbersAscending(arr,n);
}

// 176 List all negative in float array
void ListNegativeNumbers(float arr[], int n)
{
	int i = 0;
	for (;i < n;i++)
	{
		if (a]i] < 0)
		{
			std::cout << " " << a[i];
		}
	}
}

// 177 List values in float array [x,y]
void ValueXY(float arr[], int n, float x, float y)
{
	int i = 0;
	if (x < y || x >= n || y >= n)
	{
		std::cout << "Invalid value x, y, n" << std::endl;
		return;
	}
	
	for (i = x;i <= y;i++)
	{
		std::cout << " " << a[i];
	}
}

// 178 List even values in [x,y] integer
void ListEvenValuesXY(int arr[], int n, int x, int y)
{
	int i = 0;
	if (x < y || x >= n || y >= n)
	{
		std::cout << "Invalid value x, y, n" << std::endl;
		return;
	}
	for (i = x; i <= y;i++)
	{
		if (a[i] % 2 == 0)
		{
			std::cout << " " << a[i];
		}
	}
}

// 179 List value satify condition: greater than the absolute value of
//the value immediately following it
void ListValue179(int arr[], int n)
{
	int i = 0;
	for (;i <  n - 1;i++)
	{
		if (a[i] > a[i + 1])
		{
			std::cout << " " << a[i];
		}
	}
}

// 180 List value satify condition: lower than the absolute value of
// the  value immediately following it and greater than value immediately preceding it
void ListValue180(int arr[], int n)
{
	int i = 0;
	for (i = 1; i < n - 1;i++)
	{
		if (a[i] > a[i - 1] && a[i] < a[i + 1])
		{
			std::cout << " " << a[i];
		}
	}
}
// 181 List even value having at least 1 value beside is even number
void ListValue181(int arr[], int n)
{
	int i = 0;
	for (;i < n;i++)
	{
		if (i == 0)
		{
			if (a[1] % 2 == 0)
			{
				std::cout << " " << a[0];
			}
		} 
		else if (i == n - 1)
		{
			if (a[n - 2] % 2 == 0)
			{
				std::cout << " " << a[n - 1];
			}
		}
		else
		{
			if (a[i + 1] % 2 == 0 || a[i - 1] % 2 == 0)
			{
				std::cout << " " << a[i];
			}
		}
	}
}
// 182 List all values in array that having at least 1 neighbor value with opposite sign
void  ListValues182(int arr[], int n)
{
	int i = 0;
	for (;i < n;i++)
	{
		if (i == n-1)
		{
			if (a[n - 2] * a[n - 1] < 0)
			{
				std::cout << " " << a[n-1];
			}
		}
		else if (i == 0)
		{
			if (a[0] * a[1] < 0)
			{
				std::cout << " " << a[0];
			}
		}
		else
		{
			if (a[i - 1] * a[i] < 0 || a[i] * a[i + 1])
			{
				std::cout << " " << a[i];
			}
		}
	}
}
// 183 List position that value at position is max value in float array
int MaxValues(float arr[], int n)
{
	int i = 0;
	float max = a[0];
	for(;i < n;i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}
void ListPosition183(float arr[], int n)
{
	int i = 0;
	float max;
	max = MaxValues(arr, n);
	for (;i < n;i++)
	{
		if (max == arr[i])
		{
			std::cout << " " << i;
		}
	}
}
// 184 List position that value at position is prime number in integer array


// 185 List position that value at position is square number in integer array


// 186 List position in float array that value at position equal first negative number

// 187 List position that postion at value is min positive in float array

// 188 List max even position in integer array

// 189 List value in integer array that value having first digit is odd number

// 190 List value in integer array that value having all digits is odd number

// 191 List maxima value in float array: that maxima element is higher than neighbor value

// 192 List value in integer array having first digit is even

// 193 List value having 3^k form, if not return 0

// 196 List negative in float array

// 197 List value in integer array having first digit is odd number

// 198 List postiond that value at position is the max value in float array

// 199 List position that value at position is prime in integer array

// ex.4 input array and using algorithm find Linear Exhaustive
// find Linear Sentinel and find Binary Search

// ex.5 input array, input integer k (k>= 1) find number higher /than k
int main()
{
	
	return 0;
}