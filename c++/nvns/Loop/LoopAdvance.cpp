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
	float fiveHundreadThousandNote = 0.f;
	float twoHundreadThousandNote = 0.f;
	float oneHundreadThousandNote = 0.f;
	float fiftyThousandNote = 0.f;
	float twentyThousandNote = 0.f;
	float tenThousandNote = 0.f;
	float fiveThousandNote = 0.f;
	float twoThousandNote = 0.f;
	float oneThousandNote = 0.f;
	float fiveHundreadNote = 0.f;
	std::cout << "The amount the customer has to change: " << std::endl;
	exchange = customerPaid - price;
	
	if(exchange == 0)
	{
		std::cout << "Does not need to give user the exchange. " << std::endl;
	}
	else
	{
		if(exchange >= FIVE_HUNDRED_THOUSAND)
		{
			
		}
		else if (exchange >= TWO_HUNDRED_THOUSAND)
		{
			
		}
		else if (exchange >= ONE_HUNDRED_THOUSAND)
		{
			
		}
		else if (exchange >= FIFTY_THOUSAND)
		{
			
		}
		else if (exchange >= TWENTY_THOUSAND)
		{
			
		}
		else if (exchange >= TEN_THOUSAND)
		{
			
		}
		else if(exchange >= FIVE_THOUSAND)
		{
			
		}
		else if (exchange >= TWO_THOUSAND)
		{
			
		}
		else if (exchange >= ONE_THOUSAND)
		{
			
		}
		else if(exchange >= FIVE_HUNDRED)
		{
			
		}
	}

	return 0;
}