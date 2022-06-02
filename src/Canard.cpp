/*
 * Canard.cpp
 *
 *  Created on: 20 janv. 2022
 *      Author: Sachiyo
 */

#include "Canard.h"

Canard::Canard(string name, string color) : AdesAiles(name)
{
   couleur = color;
   cout << "creation d'un canard de couleur " << couleur << long(this) << endl;
}

void Canard::Afficher()
{
	cout << "je suis un canard" << endl;
}
void Canard::Modifier(string colorie)
{
	this->couleur = colorie;
	cout << " Le canard est devenu " << couleur <<endl;
}

void Canard::Manger()
{
	cout << "les canards mangent de pain" << endl;
}
Canard::~Canard()
{
	cout << "destruction du Canard " << long(this) << endl;
}
