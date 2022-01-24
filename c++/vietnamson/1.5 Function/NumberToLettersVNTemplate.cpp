#include <iostream>
#include <cmath>
/**
 * ĐỀ BÀI:
 * @brief Ở Việt Nam, khi tính tiền hóa đơn, ngoài việc viết số tiền bằng các con số, người ta thường hay viết kèm số tiền bằng chữ để tránh các sai sót do đọc nhầm. Ví dụ:
 * - Viết bằng số: 24500
 * - Viết bằng chữ: hai mươi bốn nghìn năm trăm
 * Cho một số nguyên không âm N (0 ≤ N ≤ 999.999). Bạn hãy viết số N trên dưới dạng chữ tiếng Việt.
 * Lưu ý: sử dụng Tiếng Việt chuẩn trong các trường hợp sau:
 * - 40: bốn mươi (không viết là bốn chục).
 * - 406: bốn trăm lẻ sáu (không viết là bốn trăm linh sáu hoặc bốn trăm không sáu).
 * - 4006: bốn nghìn không trăm lẻ sáu (không viết là bốn ngàn không trăm lẻ sáu).
 * - Chú ý các trường hợp của số 1(mốt, một), số 5 (năm, lăm).
 * Dữ liệu nhập:
 * - Là số nguyên N (0 ≤ N ≤ 999.999)
 * Dữ liệu xuất:
 * - Gồm một dòng kết quả là chuỗi tiếng Việt viết thường và không dấu, mỗi từ cách nhau một khoảng trắng.
 * @return int
 */

/**
 *
vd: Giả sử nhập vào số = 123,456,789,987
123 => mot tram hai muoi ba <ty>
456 => bon tram nam muoi sau <trieu>
789 => bay tram tam muoi chin <nghin>
987 => chin tram tam muoi bay
 *
 */

/**
 * PHAN TICH 2:
số dấu phẩy = (số lượng chữ số - 1) / 3
số cụm = số dấu phẩy + 1

123456789987 => có 12 chữ số
số dấu phẩy = (số chữ số - 1) / 3 = 11 / 3 = 3
số cụm = số dấu phẩy + 1 = 3 + 1 = 4

123456789987 / 10^(3 * 3) = 123456789987 / 10^9 = 123
123456789987 % 10^9 = 456789987

456789987 / 10^(3 * 2) = 456789987 / 10^6 = 456
456789987 % 10^6 = 789987

789987 / 10^(3 * 1) = 789987 / 10^3 = 789
789987 % 10^3 = 987

987 / 10^(3 * 0) = 987 / 10^0 = 987 / 1 = 987
987 % 10^0 = 0 => KẾT THÚC

=====================================
123 % 10 = 3
123 / 10 = 12

12 % 10 = 2
12 / 10 = 1

1 % 10 = 1
1 / 10 = 0

123 / 10^2 = 1
123 % 10^2 = 23

23 / 10^1 = 2
23 % 10^1 = 3

3 / 10^0 = 3
3 % 10^0 = 0 => kết thúc
 * @return int
 */
void InputNumber(unsigned long long &n)
{
	do
	{
		std::cout << "Input Number: ";
		std::cin >> n;
	} while (n < 0);
}

void showString(std::string str)
{
	std::cout << " " << str;
}

int NumberOfDigits(unsigned long long n)
{
	return (n == 0) ? 1 : (int)log10((double)n) + 1;
}

void ReadOneDigit(int n)
{
	switch (n)
	{
	case 0:
	{
		showString("khong");
	};
	break;
	case 1:
	{
		showString("mot");
	};
	break;
	case 2:
	{
		showString("hai");
	};
	break;
	case 3:
	{
		showString("ba");
	};
	break;
	case 4:
	{
		showString("bon");
	};
	break;
	case 5:
	{
		showString("nam");
	};
	break;
	case 6:
	{
		showString("sau");
	};
	break;
	case 7:
	{
		showString("bay");
	};
	break;
	case 8:
	{
		showString("tam");
	};
	break;
	case 9:
	{
		showString("chin");
	};
	break;
	case 10:
	{
		showString("muoi");
	};
	break;
	case 15:
	{
		showString("lam");
	};
	break;
	case 21:
	{
		showString("mot");
	};
	break;
	}
}

void ReadTwoDigits(int n)
{
	int numberOfDigit = 0;
	numberOfDigit = NumberOfDigits(n);
	if (numberOfDigit < 2 || n == 10)
	{
		ReadOneDigit(n);
		return;
	}

	int head = 0, otherDigit = 0;
	head = n / 10;
	otherDigit = n % 10;

	if (head == 1)
	{
		showString("muoi");
		if (otherDigit == 5)
		{
			otherDigit = 15;
		}
		ReadOneDigit(otherDigit);
	}
	else
	{
		ReadOneDigit(head);
		showString("muoi");

		if (otherDigit != 0)
		{
			if (otherDigit == 1)
			{
				otherDigit = 21;
			}
			else if (otherDigit == 5)
			{
				otherDigit = 15;
			}
			ReadOneDigit(otherDigit);
		}
	}
}

void ReadThreeDigits(int n)
{
	int numberOfDigit = 0;
	numberOfDigit = NumberOfDigits(n);
	if (numberOfDigit < 3)
	{
		ReadTwoDigits(n);
		return;
	}

	int head = 0, otherDigit = 0;
	head = n / 100;
	otherDigit = n % 100;

	ReadOneDigit(head);
	showString("tram");
	if (otherDigit != 0)
	{
		if (NumberOfDigits(otherDigit) == 1)
		{
			showString("le");
		}
		ReadTwoDigits(otherDigit);
	}
}

void ReadRemainNumbers(long long numberOfDigits)
{
	if (numberOfDigits == 1 || numberOfDigits == 4 || numberOfDigits == 7)
	{
		ReadOneDigit(0);
		showString(" tram le ");
	}
	else if (numberOfDigits == 2 || numberOfDigits == 5 || numberOfDigits == 8)
	{
		ReadOneDigit(0);
		showString(" tram ");
	}
}

void ReadNumber(unsigned long long n)
{
	int dotma = 0, numberOfDigit = 1;
	numberOfDigit = NumberOfDigits(n);
	if (numberOfDigit < 4)
	{
		ReadThreeDigits(n);
		return;
	}

	int head, powResult = 0, otherDigit = 0;
	int temp = n;

	while (dotma >= 0)
	{
		dotma = (int)(NumberOfDigits(temp) - 1) / 3;
		powResult = (int)pow(10, dotma * 3);
		head = (int)temp / powResult;
		// std::cout << "powResult " << powResult << std::endl;
		// std::cout << "dotma " << dotma << std::endl;
		// std::cout << "head " << head << std::endl;
		if (head != 0)
		{
			if (temp != n)
			{
				// std::cout << "co vo day ko " << dotma << std::endl;
				int headDigits = NumberOfDigits(head);
				if (headDigits < (numberOfDigit - 1))
				{
					ReadRemainNumbers(headDigits);
				}
				ReadThreeDigits(head);
			}
			else
			{
				// std::cout << "co vo day ko2 " << std::endl;
				ReadThreeDigits(head);
			}
		}
		numberOfDigit = NumberOfDigits(temp);
		temp = (int)temp % powResult;

		if (dotma == 1)
		{
			showString("nghin");
		}
		else if (dotma == 2)
		{
			showString("trieu");
		}
		else if (dotma == 3)
		{
			showString("ty");
		}
		// std::cout << "co vo day ko3 " << std::endl;
		dotma--;
	}
}

int main()
{
	unsigned long long n;
	InputNumber(n);

	ReadNumber(n);
	return 0;
}