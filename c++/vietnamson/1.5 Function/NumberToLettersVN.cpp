#include <iostream>
#include <cmath>

/**
 * @brief Ở Việt Nam, khi tính tiền hóa đơn, ngoài việc viết số tiền bằng các con số, người ta thường hay viết kèm số tiền bằng chữ để tránh các sai sót do đọc nhầm. Ví dụ:
 * - Viết bằng số: 24500
 * - Viết bằng chữ: hai mươi bốn nghìn năm trăm
 * Cho một số nguyên không âm N (0 ≤ N ≤ 999.999). Bạn hãy viết số N trên dưới dạng chữ tiếng Việt.
 * Lưu ý: sử dụng Tiếng Việt chuẩn trong các trường hợp sau:
 * - 40: bốn mươi (không viết là bốn chục).
 * - 406: bốn trăm lẻ sáu (không viết là bốn trăm linh sáu hoặc bốn trăm không sáu).
 * - 4006: bốn nghìn không trăm lẻ sáu (không viết là bốn ngàn không trăm lẻ sáu).- Chú ý các trường hợp của số 1(mốt, một), số 5 (năm, lăm).

Dữ liệu nhập:

- Là số nguyên N (0 ≤ N ≤ 999.999)

Dữ liệu xuất:

- Gồm một dòng kết quả là chuỗi tiếng Việt viết thường và không dấu, mỗi từ cách nhau một khoảng trắng.
 *
 * @return int
 */
void showString(std::string str)
{
	std::cout << str;
}
void InputNumber(int &n)
{
	do
	{
		std::cout << "Input number 0 <= n <= 999 999: ";
		std::cin >> n;
	} while (n < 0 && n > 999999);
}

int NumberOfDigits(int n)
{
	return (int)log10((double)n) + 1;
}

void ReadOneDigit(int n)
{
	switch (n)
	{
	case 0:
	{
		showString(" khong ");
	};
	break;
	case 1:
	{
		showString(" mot ");
	};
	break;
	case 2:
	{
		showString(" hai ");
	};
	break;
	case 3:
	{
		showString(" ba ");
	};
	break;
	case 4:
	{
		showString(" bon ");
	};
	break;
	case 5:
	{
		showString(" nam ");
	};
	break;
	case 6:
	{
		showString(" sau ");
	};
	break;
	case 7:
	{
		showString(" bay ");
	};
	break;
	case 8:
	{
		showString(" tam ");
	};
	break;
	case 9:
	{
		showString(" chin ");
	};
	break;
	case 15:
	{
		showString(" lam ");
	};
	break;
	case 21:
	{
		showString(" mot ");
	};
	break;
	}
}

void ReadTwoDigits(int n)
{
	if (n == 10)
	{
		showString(" muoi ");
		return;
	}
	int dozen, unit;
	dozen = n / 10;
	unit = n % 10;
	if (dozen == 1)
	{
		showString(" muoi ");
	}
	else
	{
		ReadOneDigit(dozen);
		showString(" muoi ");
	}
	if (unit != 0)
	{
		if (unit == 5)
		{
			unit = 15;
		}
		else if (unit == 1)
		{
			unit = 21;
		}
		ReadOneDigit(unit);
	}
}

void ReadThreeDigits(int n)
{
	int dozen, twoDigits, numberOfDigits;
	dozen = n / 100;
	twoDigits = n % 100;

	ReadOneDigit(dozen);
	showString(" tram ");

	numberOfDigits = NumberOfDigits(twoDigits);
	if (numberOfDigits == 1)
	{
		showString(" le ");
		ReadOneDigit(twoDigits);
	}
	else if (numberOfDigits == 2)
	{
		ReadTwoDigits(twoDigits);
	}
}

void ReadFourDigit(int n)
{
	int dozen, threeDigits, numberOfDigits;
	dozen = n / 1000;
	threeDigits = n % 1000;

	numberOfDigits = NumberOfDigits(dozen);
	if (numberOfDigits == 1)
	{
		ReadOneDigit(dozen);
	}
	else if (numberOfDigits == 2)
	{
		ReadTwoDigits(dozen);
	}
	else if (numberOfDigits == 3)
	{
		ReadThreeDigits(dozen);
	}

	showString(" nghin ");

	numberOfDigits = NumberOfDigits(threeDigits);
	if (numberOfDigits == 1)
	{
		ReadOneDigit(0);
		showString(" tram le ");
		ReadOneDigit(threeDigits);
	}
	else if (numberOfDigits == 2)
	{
		ReadOneDigit(0);
		showString(" tram ");
		ReadTwoDigits(threeDigits);
	}
	else if (numberOfDigits == 3)
	{
		ReadThreeDigits(threeDigits);
	}
}

void ReadNumber(int n)
{
	int numberOfDigits;
	numberOfDigits = NumberOfDigits(n);
	if (numberOfDigits == 1)
	{
		ReadOneDigit(n);
	}
	else if (numberOfDigits == 2)
	{
		ReadTwoDigits(n);
	}
	else if (numberOfDigits == 3)
	{
		ReadThreeDigits(n);
	}
	else if (numberOfDigits)
	{
		ReadFourDigit(n);
	}
}

int main()
{
	int n;
	InputNumber(n);

	ReadNumber(n);
	return 0;
}