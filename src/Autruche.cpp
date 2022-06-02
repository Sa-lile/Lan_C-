/*
 * Autruche.cpp
 *
 *  Created on: 24 janv. 2022
 *      Author: Sachiyo
 */

#include "Autruche.h"

Autruche::Autruche(string name, int age) : AdesAiles(name)
{
	this->age = age;
	cout << " creation d'une Autruche age de "<< age << "" << long(this) << endl;
}
void Autruche::Afficher()
{
	cout << "je suis un Autruche" << endl;
}
void Autruche::Manger()
{
	cout << "les Autruches mangent de viande" << endl;
}
double Autruche::AgeHumaine()
{
	cout << "Age humain d'Autruche " <<  endl;
	return ((this->age)* 1.5);
}
Autruche::~Autruche()
{
	cout << "destruction de l'autruche " << long(this)<< endl;
}
