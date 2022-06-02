/*
 * Canard.h
 *
 *  Created on: 20 janv. 2022
 *      Author: Sachiyo
 */

#ifndef CANARD_H_
#define CANARD_H_

#include "AdesAiles.h"

class Canard: public AdesAiles {
private:
	string couleur;
public:
	Canard(string name = "canard", string color = "blanc");
	void Afficher();
	void Modifier(string colorie);
	void Manger();
	virtual ~Canard();
};

#endif /* CANARD_H_ */
