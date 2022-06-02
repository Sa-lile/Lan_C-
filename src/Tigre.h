/*
 * Tigre.h
 *
 *  Created on: 20 janv. 2022
 *      Author: stag
 */

#ifndef TIGRE_H_
#define TIGRE_H_

#include "Felin.h"

class Tigre: public Felin {
private:
	int identification;
	
public:
	Tigre(string name = "tigre", int identification = 0);
	void Afficher();
	void Manger();
	virtual ~Tigre();

};

#endif /* TIGRE_H_ */
