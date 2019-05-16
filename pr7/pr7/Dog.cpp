#include "pch.h"
#include "Dog.h"

Dog::Dog() : Animal::Animal("Woof"){}

void Dog::Voice() {
	cout << sound << endl;
}