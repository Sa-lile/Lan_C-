/*
 * Felin.cpp
 *
 *  Created on: 18 janv. 2020
 *      Author: martus
 */

#include "Felin.h"

Felin::Felin(string name): Animal(name)
{
	cout << "création du félin" << " " << long(this) << endl;
}
void Felin::Manger()
{
	cout << "les félins mangent de la viande" << endl;
}
Felin::~Felin()
{
	cout << "destruction du félin " << long(this) << endl;
}
