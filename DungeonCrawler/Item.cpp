#include "Item.h"

#ifndef ITEM_H
#define ITEM_H

Item::Item(string name, int health, int attack, int defence)
{
	this->name = name;
	this->health = health;
	this->attack = attack;
	this->defence = defence;
}

#endif
