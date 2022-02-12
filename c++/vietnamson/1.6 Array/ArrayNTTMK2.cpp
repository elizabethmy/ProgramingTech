#include <iostream>
#include <cmath>
#define MAX 50
//BÀI TẬP LUYỆN TẬP TƯ DUY
//155/61 Find value in float that "furthest from x value"
float FurthestFromXValue155(float a[], int n, float x)
{
	int i = 1;
	float substractWithX = abs(a[0] - x), furthestFromXNumber = a[0];
	
	for (;i < n;i++)
	{
		if (substractWithX < abs(a[i] - x))
		{
			furthestFromNumber = a[i];
			substractWithX = abs(a[i] - x);
		}
	}
	return furthestFromXNumber;
}

//156/61 Find a position in float array that "nearest from x value"
float NearestFromXValue156(float a[], int n, float x)
{
	int i = 1;
	float substractWithX = abs(a[0] - x), nearestFromXValue = a[0];
	
	for (;i < n;i++)
	{
		if (substractWithX > abs(a[i] - x))
		{
			nearestFromXValue = a[i];
			substractWithX = abs(a[i] - x);
		}
	}
	return nearestFromXValue;
}
//157/61 Find [a,b] that contain all values in float array
// valueDiffInArray contain different values in array having size sizeDiff
// i from 0 to n: checking from i to i + sizeDiff, each valueDiffInArray will be checked
// if i + sizeDiff > n, show that we don't have [a,b] => end
// else each valueDiffInArray contain 1 time in [i,i+sizeDiff] array
// if not contain or contain 2 times return false
int isArrayContainValue(float a[], int n, float value)
{
	int i = 0, count = 0;
	for (;i < n;i++)
	{
		if (a[i] == value)
		{
			count++;
		}
	}
	return count;
}
int isArrayContainValue(float a[], int n, float value, int &position)
{
	int i = 0, count = 0;
	for (;i < n;i++)
	{
		if (a[i] == value)
		{
			count++;
			position = i;
		}
	}
	return count;
}
int isArrayContainValue(float a[], int a, int b, float value)
{
	int i = a, count = 0;
	for (;i < b + 1;i++)
	{
		if (a[i] == value)
		{
			count++;
		}
	}
	return count;
}

void FindSegmentabContainingAllElementsInArray(float arr[], int n)
{
	int i = 1, sizeDiff = 1;
	float valueDiffInArray[MAX];
	valueDiffInArray[0] = arr[0];
	for (;i < n;i++)
	{
		if (isArrayContainValue(valueDiffInArray,sizeDiff,arr[i]) == 0)
		{
			valueDiffInArray[sizeDiff++] = arr[i];
		}
	}
	i = 0;
	int j = 0;
	float a = 0, b = 0, aResult = 0, bResult = n - 1;//default result is a full array
	bool isContainAllElements = false;
	b = a + sizeDiff;
	while (a + sizeDiff < n)
	{
		for (;j < sizeDiff, b < n;)
		{
			if (isArrayContainValue(arr,a,b,valueDiffInArray[j]) == 0)
			{
				do
				{
					b++;
				} while (b < n || isArrayContainValue(arr,a,b,valueDiffInArray[j]) == 0);
				if (b >= n)
				{
					break;
				}
				else
				{
					j++;
				}
			}
			else
			{
				j++;
			}
		}
		if (j == sizeDiff)
		{
			if (bResult - aResult != 0 && b - a < bResult - aResult)
			{
				aResult = a;
				bResult = b;
			}
			isContainAllElements = true;
		}
		a++;
		isContainAllElements = false;
		b = a + sizeDiff;
		j = 0;
	}
}

//158/61 Find x that [-x,x] contain all elements in float array
void FindSegmentabContainingAllElementsInArray158(float arr[], int n)
{
	int i = 0, sizeDiff = 1;
	bool flag = false;
	//check positive array
	for (;i < n;i++)
	{
		if (arr[i] > 0)
		{
			flag = true;
		}
		else
		{
			flag = false;
			break; // not positive array
		}
	}
	if (flag == true)
	{
		return;
	}
	//check negative array
	flag = false;
	i = 0;
	for (;i < n;i++)
	{
		if (arr[i] < 0)
		{
			flag = true;
		}
		else
		{
			flag = false;
			break; // not negative array
		}
	}
	if (flag == true)
	{
		return;
	}
	
	float valueDiffInArray[MAX];
	valueDiffInArray[0] = arr[0];
	i = 0;
	flag = false;//to check symmetric array
	// contain any symmetric
	float a = 0, b = 0, aResult = 0, bResult;//default result is a full array
	int position = -1;
	for (;i < n;i++)
	{
		if (isArrayContainValue(arr,n,-arr[i],position) > 0)
		{
			flag = true;
			if (i > position)
			{
				aResult = position;
				bResult = i;
			}
			else if (i < position)
			{
				aResult = i;
				bResult = position;
			}
			break;//having at least one symmetric number
		}
	}
	i = 1;
	
	for (;i < n;i++)
	{
		if (isArrayContainValue(valueDiffInArray,sizeDiff,arr[i]) == 0)
		{
			valueDiffInArray[sizeDiff++] = arr[i];
		}
	}
	i = 0;
	int j = 0;
	
	bool isContainAllElements = false;
	while (a + sizeDiff < n)
	{
		for (;j < sizeDiff, b < n;)
		{
			if (isArrayContainValue(arr,a,b,valueDiffInArray[j]) == 0)
			{
				do
				{
					b++;
				} while (b < n || isArrayContainValue(arr,a,b,valueDiffInArray[j]) == 0);
				if (b >= n)
				{
					break;
				}
				else
				{
					j++;
				}
			}
			else
			{
				j++;
			}
		}
		if (j == sizeDiff)
		{
			if (bResult - aResult != 0 && b - a < bResult - aResult)
			{
				aResult = a;
				bResult = b;
			}
			isContainAllElements = true;
		}
		else
		{
			a++;
			isContainAllElements = false;
			b = a + sizeDiff;
			j = 0;
		}
	}
}
//159/61 Find first value > 2003 in float array, if not have return 0
float FindFirstValueHigher2003(float arr[], int n)
{
	int i = 0, higher2003Number = 0;
	for (;i < n;i++)
	{
		if (arr[i] > 2003)
		{
			higher2003Number = arr[i];
		}
	}
	return higher2003Number;
}
//160/62 Find last negative value > -1 in float array, if not return 0
float LastNegativeValueHigherNegative1(float arr[],int n)
{
	int i = n - 1;
	float lastNegativeNumber = 0.0f;
	for (;i >= 0;i--)
	{
		if (lastNegativeNumber > -1 && lastNegativeNumber < 0)
		{
			lastNegativeNumber = arr[i];
			break;
		}
	}
	return lastNegativeNumber;
}
//161 Find first value in (x,y) in integer array, if not return x
bool FindFirstValue(int arr[], int n, int value, int &position)
{
	int i = 0;
	position = -1;
	for (;i < n;i++)
	{
		if (arr[i] == value)
		{
			position = i;
			return true;
			
		}
	}
	return false;
}
int FirstValueXY(int arr[], int n, int x, int y)
{
	int i = 0, firstValue = x;
	
	
}

//162 Find position: There 2 values beside. The value equal multi 2 values beside.
//if not have return -1


//163 Find first square number in integer array

//164 Find first value in integer array that is "số gánh"


//165 Find first value in integer array having first digit is odd number, if not return 0


//166 Find first value 2^k, if not have return 0


//167 Find value that all digits is odd number and max value and is the max value in integer array, if not return 0


//168 Find max value having form 5^k in integer array if not have return 0


//169 Find max even number lower than all odd number in integer array, if not return 0


//170 Find min prime number higher than all the last value in integer array


//171 Find greatest common divisor of all elements in positive integer array

//172 Find least common multiple of all elements in positive integer array

//173 Find least number appearing in integer array


int main()
{
	
	return 0;
}