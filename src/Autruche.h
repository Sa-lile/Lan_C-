/*
 * Autruche.h
 *
 *  Created on: 24 janv. 2022
 *      Author: Sachiyo
 */

#ifndef AUTRUCHE_H_
#define AUTRUCHE_H_

#include "AdesAiles.h"

class Autruche : public AdesAiles{
private:
	int age;
public:
	Autruche(string name = "autruche", int age = 79);
	void Afficher();
	void Manger();
	double AgeHumaine();
	virtual ~Autruche();
};

#endif /* AUTRUCHE_H_ */
