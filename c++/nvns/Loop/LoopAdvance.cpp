#include <iostream>
/**
* Product: price of product, quantity
* Customer: give money
* Saleman: exchange money
*/
enum CurrencDenomination //VND
{
	FIVE_HUNDRED_THOUSAND = 500000,
	TWO_HUNDRED_THOUSAND = 200000,
	ONE_HUNDRED_THOUSAND = 100000,
	FIFTY_THOUSAND = 50000,
	TWENTY_THOUSAND = 20000,
	TEN_THOUSAND = 10000,
	FIVE_THOUSAND = 5000,
	TWO_THOUSAND = 2000,
	ONE_THOUSAND = 1000,
	FIVE_HUNDRED = 500
};

int main()
{
	//input
	float price = 0.f, customerPaid = 0.f;
	float exchange = 0.f;
	//Amount to be paid by user
	do
	{
		std::cout << "Please input the amount user must pay: ";
		std::cin >> price;
		std::cout << "" << std::endl;
		std::cout << "Please input the money user give: ";
		std::cin >> customerPaid;
	} while (price < 0.f || (customerPaid - price) < 0.f);

	//output
	int fiveHundreadThousandNote = 0;
	int twoHundreadThousandNote = 0;
	int oneHundreadThousandNote = 0;
	int fiftyThousandNote = 0;
	int twentyThousandNote = 0;
	int tenThousandNote = 0;
	int fiveThousandNote = 0;
	int twoThousandNote = 0;
	int oneThousandNote = 0;
	int fiveHundreadNote = 0;
	std::cout << "The amount the customer has to change: " << std::endl;
	exchange = customerPaid - price;
	while (exchange > 0)
	{
		if (exchange == 0)
		{
			std::cout << "Does not need to give user the exchange. " << std::endl;
		}
		else
		{
			if (exchange >= FIVE_HUNDRED_THOUSAND)
			{
				fiveHundreadThousandNote = (int)exchange / FIVE_HUNDRED_THOUSAND;
				exchange = exchange - fiveHundreadThousandNote * FIVE_HUNDRED_THOUSAND;
			}
			else if (exchange >= TWO_HUNDRED_THOUSAND)
			{
				twoHundreadThousandNote = (int)exchange / TWO_HUNDRED_THOUSAND;
				exchange = exchange - twoHundreadThousandNote * TWO_HUNDRED_THOUSAND;
			}
			else if (exchange >= ONE_HUNDRED_THOUSAND)
			{
				oneHundreadThousandNote = (int)exchange / ONE_HUNDRED_THOUSAND;
				exchange = exchange - oneHundreadThousandNote * ONE_HUNDRED_THOUSAND;
			}
			else if (exchange >= FIFTY_THOUSAND)
			{
				fiftyThousandNote = (int)exchange / FIFTY_THOUSAND;
				exchange = exchange - fiftyThousandNote * FIFTY_THOUSAND;
			}
			else if (exchange >= TWENTY_THOUSAND)
			{
				twoThousandNote = (int)exchange / TWENTY_THOUSAND;
				exchange = exchange - twoThousandNote * TWENTY_THOUSAND;
			}
			else if (exchange >= TEN_THOUSAND)
			{
				tenThousandNote = (int)exchange / TEN_THOUSAND;
				exchange = exchange - tenThousandNote * TEN_THOUSAND;
			}
			else if (exchange >= FIVE_THOUSAND)
			{
				fiveThousandNote = (int)exchange / FIVE_THOUSAND;
				exchange = exchange - fiveThousandNote * FIVE_THOUSAND;
			}
			else if (exchange >= TWO_THOUSAND)
			{
				twoThousandNote = (int)exchange / TWO_THOUSAND;
				exchange = exchange - twoThousandNote * TWO_THOUSAND;
			}
			else if (exchange >= ONE_THOUSAND)
			{
				oneThousandNote = (int)exchange / ONE_THOUSAND;
				exchange = exchange - oneHundreadThousandNote * ONE_THOUSAND;
			}
			else if (exchange >= FIVE_HUNDRED)
			{
				fiveHundreadNote = (int)exchange / FIVE_HUNDRED;
				exchange = exchange - fiveHundreadNote * FIVE_HUNDRED;
			}
		}
	}
	
	std::cout << "The amount used to change back to the customer is: " << std::endl;
	std::cout << fiveHundreadThousandNote << " note 500 000 VND " << std::endl;
	std::cout << twoHundreadThousandNote << " note 200 000 VND " << std::endl;
	std::cout << oneHundreadThousandNote << " note 100 000 VND " << std::endl;

	std::cout << fiftyThousandNote << " note 50 000 VND " << std::endl;
	std::cout << twentyThousandNote << " note 20 000 VND " << std::endl;
	std::cout << tenThousandNote << " note 10 000 VND " << std::endl;

	std::cout << fiveThousandNote << " note 5000 VND " << std::endl;
	std::cout << twoThousandNote << " note 2000 VND " << std::endl;
	std::cout << oneThousandNote << " note 1000 VND " << std::endl;
	std::cout << fiveHundreadNote << " note 500 VND " << std::endl;

	return 0;
}