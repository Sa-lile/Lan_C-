/*
 * Chat.cpp
 *
 *  Created on: 18 janv. 2020
 *      Author: Sachiyo
 */

#include "Chat.h"

Chat::Chat(string name, int tatou) : Felin(name)
{
	tatouage = tatou;
	cout << "creation du chat numero " << tatouage << " " << long(this) << endl;
}
void Chat::Afficher()
{
	cout << "je suis un chat" << endl;
}
void Chat::Manger()
{
	cout << "les chats mangent des souris" << endl;
}
Chat::~Chat()
{
	cout << "destruction du chat " << long(this) << endl;
}
