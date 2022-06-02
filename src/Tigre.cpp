/*
 * Tigre.cpp
 *
 *  Created on: 20 janv. 2022
 *      Author: stag
 */

#include "Tigre.h"

Tigre::Tigre(string name, int identification) : Felin(name)
{
	this->identification = identification;
	cout << "cration du tigre numero" << identification << " " << long(this) << endl;
}

void Tigre::Afficher()
{
	cout << "je suis un tigre" << endl;
}
void Tigre::Manger()
{
	cout << "les tigres mangent le viande" << endl;
}
Tigre::~Tigre()
{
	cout << "destruction du tigre " << long(this) << endl;
}


