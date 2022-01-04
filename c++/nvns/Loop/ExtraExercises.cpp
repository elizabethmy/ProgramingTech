#include <iostream>
#include <conio.h>
#include <limits>

/*
* 1) Read the number:
* EX: 1 => One
* 12 twelve
* 24567 twenty four thousand five hundred sixty seven
*/
void showString(std::string numberString)
{
	std::cout << numberString;
}

void showNumberLower16(int number)
{
	switch (number)
	{
	case 0:
	{
		showString("Zero");
	};
	break;
	case 1:
	{
		showString("One");
	};
	break;
	case 2:
	{
		showString("Two");
	};
	break;
	case 3:
	{
		showString("Three");
	};
	break;
	case 4:
	{
		showString("Four");
	};
	break;
	case 5:
	{
		showString("Five");
	};
	break;
	case 6:
	{
		showString("Six");
	};
	break;
	case 7:
	{
		showString("Seven");
	};
	break;
	case 8:
	{
		showString("Eight");
	};
	break;
	case 9:
	{
		showString("Nine");
	};
	break;
	case 10:
	{
		showString("Ten");
	};
	break;
	case 11:
	{
		showString("Eleven");
	};
	break;
	case 12:
	{
		showString("Twelve");
	};
	break;
	case 13:
	{
		showString("Thirdteen");
	};
	break;
	case 15:
	{
		showString("Fifteen");
	};
	break;
	}
}
void showNumberLower20(int number)
{
	int unit = number % 10;

	if (number < 16)
	{
		showNumberLower16(number);
	}
	else
	{
		showNumberLower16(unit);
		showString("teen");
	}
}
void showNumberTwoDigitWithUnitZero(int number)
{
	int dozen = number / 10;

	switch (number)
	{
	case 20:
	{
		showString("Twenty");
	};
	break;
	case 30:
	{
		showString("Thirdty");
	};
	break;
	case 40:
	{
		showString("Forty");
	};
	break;
	case 50:
	{
		showString("Fifty");
	};
	break;
	default: //60,70,80,90
	{
		showNumberLower16(dozen);
		showString("ty");
	}
	}
}

void showNumberTwoDigit(int number)
{
	int dozen = number / 10;
	int unit = number % 10;
	if (number < 20)
	{
		showNumberLower20(number);
	}
	else
	{
		if (unit == 0)
		{
			showNumberTwoDigitWithUnitZero(number);
		}
		else
		{
			dozen *= 10;
			showNumberTwoDigitWithUnitZero(dozen);
			showString("-");
			showNumberLower16(unit);
		}
	}
}

void showNumberThreeDigit(int number)
{
	int hundred = number / 100;
	int dozen = number % 100;
	showNumberLower20(hundred);
	showString(" Hundred ");

	if (dozen != 0)
	{
		showNumberTwoDigit(dozen);
	}
}

void showNumberFourToNineDigit(int number)
{
	int digit = 0;
	int firstThreeNumber = 0;
	int lastNumber = 0;
	digit = log10(number);
	
	if (digit < 6)
	{
		firstThreeNumber = number / 1000;
		lastNumber = number % 1000;
	}
	else
	{
		firstThreeNumber = number / 1000000;
		lastNumber = number % 1000000;
	}

	int firstThreeNumberDigit = log10(firstThreeNumber);
	int lastNumberDigit = log10(lastNumber);
	if (firstThreeNumberDigit == 0)
	{
		showNumberLower20(firstThreeNumber);
	}
	else if (firstThreeNumberDigit == 1)
	{
		showNumberTwoDigit(firstThreeNumber);
	}
	else if (firstThreeNumberDigit == 2)
	{
		showNumberThreeDigit(firstThreeNumber);
	}

	if (digit < 6)
	{
		showString(" Thousand ");
	}
	else
	{
		showString(" Million ");
	}

	if (lastNumber == 0)
	{
		return;
	}

	if (lastNumberDigit == 0)
	{
		showNumberLower20(lastNumber);
	}
	else if (lastNumberDigit == 1)
	{
		showNumberTwoDigit(lastNumber);
	}
	else if (lastNumberDigit == 2)
	{
		showNumberThreeDigit(lastNumber);
	}
	else if (lastNumberDigit > 3)
	{
		showNumberFourToNineDigit(lastNumber);
	}
}

void ReadNumber(int number)
{
	int digit = log10(number);
	std::cout << "The number " << number << " is read as: ";
	//1 digit
	if (number < 20)
	{
		showNumberLower20(number);
	}
	//2 digits
	else if (digit == 1)
	{
		showNumberTwoDigit(number);
	}
	//3 digits
	else if (digit == 2)
	{
		showNumberThreeDigit(number);
	}
	//3 => 9 digits
	else if (digit > 2 && digit < 9)
	{
		showNumberFourToNineDigit(number);
	}
	else
	{
		//TO DO
	}
	std::cout << "" << std::endl;
}

//2) Input the password, after input each character, the character will display "*".
void ActionFractions()
{
}

//3
void InputPassword()
{
}

int main()
//int ExtraExercises()
{
	/*
	* 1) Read number
	*/
	/*int number = 0;
	do
	{
		std::cout << "Input the number to read: ";
		if (log10(number) > 8)
		{
			std::cout << "Currently, we only support number having below 10 digit. : " << std::endl;
		}

		std::cin >> number;
	} while (number < 0 && log10(number) > 8);

	ReadNumber(number);*/

	/*
	* 2) Input password
	*/
	std::string username = "";
	char password[10] = "";

	std::cout << "Input the user name: ";
	std::cin >> username;
	std::cout << "" << std::endl;
	
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Input the password (9 letters): ";
	int count = 0;
	do
	{
		password[count] = _getch();
		_putch('*');
		std::cout << "Hello password! " << password[count];
		if (std::cin.get() == '\n')
		{
			std::cout << "Finish! " << std::endl;
			break;
		}
		
		count++;
	} while (count < 9);
	std::cout << "\n Show the password: " << password << std::endl;
	getchar();

	return 0;
}
