#ifndef __CUSTOMER_H__
#define __CUSTOMER_H__
#include <iostream>
#include "Home.h"

using namespace std;

class Customer
{
private:
	unsigned int m_id;
	std::string m_name;
	std::string m_address;//City,Country
	unsigned int m_age;

public:
	std::unique_ptr<Home> m_Home;

	Customer(unsigned int id, std::string name, std::string address, unsigned int age);

	virtual ~Customer();
};
#endif //__CUSTOMER_H__
