#pragma once
#include <vector>

#include "GameCharacter.h"
#include "Item.h"

#ifndef ROOM_H
#define ROOM_H

using namespace std;

class Room
{
public:
	int position;
	bool isExit;
	vector<Item> items;
	vector<GameCharacter> enemies;
	
	Room(int, bool, vector<Item>, vector<GameCharacter>);
	void ClearLoot();
	void ClearEnemies();
};

#endif
