#include "pch.h"
#include <iostream>
#include "Appartment.h"
#include "Car.h"
#include "CountryHouse.h"
#include "pr6.h"

int main()
{
	Property ** property = new Property * [7];
	property[0] = &Appartment(1000000);
	property[1] = &Appartment(2000000);
	property[2] = &Appartment(3000000);
	property[3] = &Car(400000);
	property[4] = &Car(500000);
	property[5] = &CountryHouse(6000000);
	property[6] = &CountryHouse(7000000);

	double sum = 0;

	for (int i = 0; i < 7; i++) {
		sum += property[i]->bill();
	}

	std::cout << "Summ of bills is " << sum;

	delete(property);
}