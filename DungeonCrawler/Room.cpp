#include "Room.h"

Room::Room(int position, bool isExit, vector<Item> items, vector<GameCharacter> gameCharacters)
{
	this->position = position;
	this->isExit = isExit;
	this->items = items;
	this->enemies = gameCharacters;
	
}

void Room::ClearLoot()
{
	items.clear();
}

void Room::ClearEnemies()
{
	enemies.clear();
}
