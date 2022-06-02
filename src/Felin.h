/*
 * Felin.h
 *
 *  Created on: 18 janv. 2020
 *      Author: martus
 */

#ifndef FELIN_H_
#define FELIN_H_

#include "Animal.h"

//Un félin est un animal
class Felin : public Animal
{
private :
      // pas de donnée private
public:
	Felin(string name = "félin");
	virtual void Manger();
	virtual ~Felin();
} ;

#endif /* FELIN_H_ */
