/*
 * main.cpp
 *
 *  Created on: 18 janv. 2020
 *      Author: martus
 */

#include <iostream>
#include <string>
using namespace std;

#include "Animal.h"
#include "Felin.h"
#include "Chat.h"
#include "Tigre.h"
#include "Autruche.h"
#include "AdesAiles.h"


int main()
{
	cout << endl << "********  Animal ***************" << endl;
	Animal Dinosaure ("Pterodactyl") ;
	Dinosaure.Manger();
	cout << endl<< "*********** Félin ************" << endl;
	Felin T("Tigre");
	T.Manger();
	cout << endl << "********** Chat *************" << endl;
	Chat C("Garfield", 007);
	C.Manger();
	cout << endl << "***********************" << endl;
	C.Felin::Manger();
	cout << endl << "***********************" << endl;


	Animal *trio[3];
	trio[0] = new Chat;
	trio[1] = new Animal("zébre");
	trio[2] = new Felin("tigre");

	trio[2]->Manger();
	delete trio[0];
	delete trio[2];
	delete trio[1];

}
