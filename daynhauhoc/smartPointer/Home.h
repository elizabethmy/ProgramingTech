#ifndef __HOME_H__
#define __HOME_H__
#include <iostream>
#include "GlobalVariable.h"

using namespace std;

class Home // Villa
{
private:
	unsigned int m_id;
	unsigned int m_numberBathroom;
	unsigned int m_numberBedroom;
	unsigned int m_numberGarage;
	float m_square;
	float m_price;
	bool m_isUsing = { false };
	Category m_useFor;

public:
	Home(unsigned int id, unsigned int numberBathroom, unsigned int numberBedroom, unsigned int numberGarage, float Square, float Price, bool isUsing, Category useFor);

	virtual ~Home();

	bool checkStatus();

	void setStatus(bool isUsing);
};

#endif //__HOME_H__