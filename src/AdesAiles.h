/*
 * AdesAiles.h
 *
 *  Created on: 20 janv. 2022
 *      Author: Sachiyo
 */
#include "Animal.h"

#ifndef ADESAILES_H_
#define ADESAILES_H_

class AdesAiles: public Animal {

public:
	AdesAiles(string name);
	void Afficher();
	void Manger();
	virtual ~AdesAiles();
};

#endif /* ADESAILES_H_ */
