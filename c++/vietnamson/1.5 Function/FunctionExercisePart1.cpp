#include <iostream>
#include <time.h>
#include <cmath>

void InputNumber(int &n)
{
	do
	{
		std::cout << "Input a positive integer number: ";
		std::cin >> n;
	} while (n <= 0);
}

/*
Bài 1: Viết chương trình trò chơi oẳn tù tì giữa người và máy theo thể lệ người luôn đi trước.

Luật chơi như sau: Người nhập vào ký tự tương ứng:
'B' hay 'b' => Búa
'O' hay 'o' => Bao
'K' hay 'k' => kéo

Sau đó Máy sẽ random ra ký tự bất kỳ (có thể là búa hoặc bao hoặc kéo). Sau đó tính kết quả chung cuộc (người thắng hay máy thắng).

Gợi ý: Tham khảo cách Random số nguyên trong 1 đoạn nào đó, ta có thể quy ước vd: số 1 => búa, 2 => bao, 3 => kéo. Rồi tính thắng thua giữa người & máy theo nguyên tắc như ngoài đời:

- Búa thắng kéo nhưng thua bao
- Bao thắng búa nhưng thua kéo
- Kéo thắng bao nhưng thua búa.
*/
void Lowercase(char letter)
{
	if (letter >= 65 && letter <= 90)
	{
		letter += 32;
	}
}

bool isValidPlay(char input)
{
	Lowercase(input);
	if (input == 's' || input == 'h' || input == 'b')
	{
		return true;
	}
	return false;
}

void ScissorHammerBag()
{
	char userInput, machineInput;
	std::cout << "== Scissor Hammer Bag ==" << std :: endl;
	do
	{
		std::cout << "Please input your turn by choosing Scissor (S or s) or Hammer (H or h) or Bag (B or b): " << std :: endl;
		std::cin >> userInput;
		Lowercase(userInput);
	} while (!isValidPlay(userInput));

	machineInput = 'a' + rand() % 26;

	if (userInput == 's' && machineInput == 'b' ||
		userInput == 'h' && machineInput == 's' ||
		userInput == 'b' && machineInput == 'h')
	{
		std::cout << "You win!" << std::endl;
	}
	else if (userInput == machineInput)
	{
		std::cout << "Tile!" << std::endl;
	}
	else
	{
		std::cout << "You lose!" << std::endl;
	}
}

/**
*Bài 2: Tìm "tất cả" các phương án kết hợp 3 loại giấy bạc 100đ, 200đ, 500đ với nhau để cho ra số tiền 10000đ.

Phương án    1: 0 tờ 100đ,  5 tờ 200đ, 18 tờ 500đ
Phương án    2: 0 tờ 100đ, 10 tờ 200đ, 16 tờ 500đ
…
Phương án 537: 98 tờ 100đ,  1 tờ 200đ,  0 tờ 500đ

Gợi ý: trước tiên ta có nhận xét rằng trong mỗi phương án, mỗi tờ bạc mệnh giá a đồng chỉ có thể có số lượng tối thiểu là 0 và số lượng tối đa là 10000/a. Từ nhận xét này, ta có cách đơn giản nhất là duyệt tất cả các phương án có thể bằng cách sử dụng 3 vòng lặp for lồng nhau, mỗi vòng for tương ứng với số tờ của mỗi loại tiền. Với mỗi khả năng, chỉ đơn giản kiểm tra xem tổng mệnh giá có bằng 10000đ hay không. Nếu bằng thì hiển thị ra màn hình và tiếp tục kiểm tra các khả năng khác.
*/
void Money10k()
{
	int Note100 = 0, Note200 = 0, Note500 = 0, sum = 0;
	for (; Note100 <= 100000 / 100; Note100)
	{
		for (; Note200 <= 100000 / 200; Note200)
		{
			for (; Note500 <= 100000 / 500; Note500)
			{
				sum = 500 * Note500 + 200 * Note200 + 100 * Note100;
				if (sum == 100000)
				{
					std::cout << "We need " << Note500 << " 500 Notes, " << Note200 << " 200 Notes, " << Note100 << " 100 Notes. " << std::endl;
				}
			}
		}
	}
}

/**
*Bài 4: Tìm phương án tối ưu (số tờ tiền là ít nhất) kết hợp 3 loại giấy bạc 100đ, 200đ, 500đ với nhau để cho ra số tiền 10000đ.

Gợi ý: Phương án tối ưu: 1 tờ 100đ, 2 tờ 200đ, 19 tờ 500đ
*/
void Money10kOptimize()
{
	int Note100 = 0, Note200 = 0, Note500 = 0, sum = 0;
	for (; Note500 <= 100000 / 500; Note500)
	{
		for (; Note200 <= 100000 / 200; Note200)
		{
			for (; Note100 <= 100000 / 100; Note100)
			{
				sum = 500 * Note500 + 200 * Note200 + 100 * Note100;
				if (sum == 100000)
				{
					std::cout << "We need " << Note500 << " 500 Notes, " << Note200 << " 200 Notes, " << Note100 << " 100 Notes. " << std::endl;
				}
			}
		}
	}
}
/**
*Bài 5: Tìm các số nguyên tố nhỏ hơn một số nguyên dương n cho trước.

vd: Nhập số nguyên dương: 11
Các số nguyên tố nhỏ hơn 11 là: 2 3 5 7
*/
bool isPrimerNumber(int n)
{
	if (n == 1)
	{
		return false;
	}
	if (n == 2 || n == 3)
	{
		return true;
	}
	if ((n > 3) && (n % 2 == 0))
	{
		return false;
	}

	int i = 1;
	for (; i < (int)sqrt((double)n); i += 2)
	{
		if ((n % i) == 0)
		{
			return false;
		}
	}
	return true;
}

void PrimerNumberLowerThanN(int n)
{
	int i = 3;
	std::cout << "Prime Number:2 ";
	for (; i <= n; i += 2)
	{
		if (isPrimerNumber(i))
		{
			std::cout << " " << i;
		}
	}
}

/**
*
Bài 6: Kiểm tra xem một số nguyên dương n có phải là số hoàn hảo hay không? (Số hoàn hảo là số có tổng tất cả các ước số nhỏ hơn nó bằng chính nó).

vd: Số 6 có các ước nhỏ hơn nó là: 1, 2, 3
và 1 + 2 + 3 = 6
=> 6 là số hoàn hảo

*/

bool isPerfectNumber(int number)
{
	int i = 1, sum = 0;
	for (; i < number / 2; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}
	if (sum == number)
	{
		return true;
	}
	return false;
}

/**
 *Bài 7: Đếm xem số tự nhiên n có bao nhiêu chữ số.
 */
int NumberOfDigits(int number)
{
	return (int)log10((double)number);
}

/**
* Bài 9: Lấy ra chữ số ở vị trí nào đó (tính từ phải sang trái) của một số tự nhiên.
vd: Nhập số tự nhiên: 1410
Bạn muốn lấy chữ số ở vị trí nào thứ:3
Chữ số ở vị trí thứ 3 (từ phải sang trái) của số 1410 là : 4
*/
int GetTheNthDigitLeftToRight(int NthDigit)
{
	return 0;
}

/**
*Bài 10: Lấy ra chữ số ở vị trí nào đó (tính từ trái sang phải) của một số tự nhiên.

vd: Nhập số tự nhiên: 1410
Bạn muốn lấy chữ số ở vị trí nào thứ:3
Chữ số ở vị trí thứ 3 (từ trái sang phải) của số 1410 là : 1
*/
int GetTheNthDigitRightToLeft(int NthDigit)
{
	return 0;
}

/**
 * Bài 11: Liệt kê các số hoàn hảo nhỏ hơn 9000. Số hoàn hảo là số có tổng các ước số của nó (không kể nó) bằng chính nó. Ví dụ: số 6 là số hoàn hảo vì tổng các ước số là 1+2+3=6.
 */
void PerfectNumberLower9000()
{
}

/**
 * Bài 12: Liệt kê tất cả các số có 3 chữ số sao cho tổng lập phương của các chữ số bằng chính số đó.
 */
void NumberSpecific()
{
}

int main()
{
	return 0;
}