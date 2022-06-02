/*
 * Animal.h
 *
 *  Created on: 18 janv. 2020
 *      Author: Sachiyo
 */
#include <iostream>
#include <string>

using namespace std;

#ifndef ANIMAL_H_
#define ANIMAL_H_

class Animal
{
private :
	string nom ;

public :
	Animal(string name= "animal");
	virtual void Manger();
	virtual ~Animal();
} ;



#endif /* ANIMAL_H_ */
