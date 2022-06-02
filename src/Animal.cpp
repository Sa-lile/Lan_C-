//============================================================================
// Name        : Animal.cpp
// Author      : Sachiyo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Animal.h"

Animal::Animal(string nom)
{
	this->nom = nom ;
	cout << "création de l'animal " << nom << " " << long(this) << endl;
}
void Animal::Manger()
{
	cout << "un animal mange" << endl;
}
Animal::~Animal()
{
	cout << "destruction de l'animal " << long(this) << endl;
}
