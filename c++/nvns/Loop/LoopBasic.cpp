#include <iostream>

 bool isSymmetricalNumber(int n)
 {
	 //121, 1221...
	 //1221%10 reverse number => a[0..num-1] s = s + a[i] => compare s va n
	 int reverseNumber = 0;
	 int temp = n;
	 while (n > 0)
	 {
		 reverseNumber = reverseNumber*10 + n%10;
		 n = n / 10;
	 }
	 
	 if(reverseNumber == temp)
	 {
		 return true;
	 }
	 return false;
 }
 
 bool isSquareNumber(int n)
 {
	 //1,4,9...
	 //i=0...[sqNum (= sqrt(n))],sqNum < n/2, compare pow(i) & n%10
	 if(n == 1)
	 {
		 return true;
	 }
	 
	 int i = 1;
	 for (;i <= n/2;i++)
	 {
		if ((i*i) == n)
		{
			return true;
		}
	 }
	 return false;
 }

bool isPrimeNumber(int n)
{
	//special case:1,2,3 and ,5,7,11,13,17...
	//i=0...(n-1), if n % i == 0 => not prime
	if (n == 1 || n == 2 || n == 3)
	{
		return true;
	}
	
	int i= n-1;
	for (;i > 1; i--)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool isAscendingNumber(int n)
{
	//11, 123, 11223,...
	//i1 = n%10, n=n%10, i2 = n%10, if i1 > i2 > i3 > i4 ...true
	int i1 = n%10;
	n = n / 10;
	while (n / 10 != 0)
	{
		if(i1 >= (n%10)) //i1 > i2
		{
			i1 = n % 10;
			n = n / 10;
		}
		else {
			return false;
		}
	}
	return true;
}

bool isDescendingNumber(int n)
{
	//11, 321, 32211,...
	//i1 = n%10, n=n%10, i2 = n%10, if i1 < i2 < i3 < i4 ...true
	int i1 = n%10;
	while (n / 10 != 0)
	{
		n = n / 10;
		if(i1 <= (n%10)) //i1 < i2
		{
			i1 = n % 10;
		}
		else {
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	std::cout<<"Input number n: "<<std::endl;
	std::cin>>n;
	//check n
	std::cout<<"isSymmetricalNumber: "<<isSymmetricalNumber(n)<<" "<<std::endl;
	std::cout<<"isSquareNumber: "<<isSquareNumber(n)<<" "<<std::endl;
	std::cout<<"isPrimeNumber: "<<isPrimeNumber(n)<<" "<<std::endl;
	std::cout<<"isAscendingNumber: "<<isAscendingNumber(n)<<" "<<std::endl;
	std::cout<<"isDescendingNumber: "<<isDescendingNumber(n)<<" "<<std::endl;
	
	return 0;
}