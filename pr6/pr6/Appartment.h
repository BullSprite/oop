#include "pch.h"
#ifndef APPARTMENT_H
#define APPARTMENT_H
#include "Property.h"

class Appartment : public Property {
public:
	Appartment(double);
	double bill() override;
};
#endif // !APPARTMENT_H
