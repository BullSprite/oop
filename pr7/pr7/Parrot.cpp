#include "pch.h"
#include "Parrot.h"

Parrot::Parrot() : Animal::Animal("Quick") {}

void Parrot::Voice() {
	cout << sound << endl;
}