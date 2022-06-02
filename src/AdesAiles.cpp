/*
 * AdesAiles.cpp
 *
 *  Created on: 20 janv. 2022
 *      Author: Sachiyo
 */

#include "AdesAiles.h"

AdesAiles::AdesAiles(string name) : Animal(name)
{
	cout << "creation d'AdesAiles numero " << name << " " << long(this) << endl;
}

void AdesAiles::Afficher()
{
	cout << "je suis une Ades Ailes" << endl;
}

void AdesAiles::Manger()
{
	cout << "les Ades Ailes mangent des insectes" << endl;
}
AdesAiles::~AdesAiles()
{
	cout << "destruction d'AdesAiles " << long(this) << endl;
}


