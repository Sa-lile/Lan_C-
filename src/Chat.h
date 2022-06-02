/*
 * Chat.h
 *
 *  Created on: 18 janv. 2020
 *      Author: martus
 */

#ifndef CHAT_H_
#define CHAT_H_

#include "Felin.h"

//un chat est un félin
class Chat : public Felin
{
private :
	int tatouage ; // numéro de tatouage
public:
	Chat(string name = "chat", int tatou = 0);
	void Afficher();
	void Manger();
	virtual ~Chat();

};

#endif /* CHAT_H_ */
