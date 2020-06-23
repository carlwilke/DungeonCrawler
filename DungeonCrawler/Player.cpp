#include "Player.h"


Player::Player(string name, int health, int attack, int defense) : GameCharacter(name, health, attack, defense)
{
	Item dagger = Item("Dagger", 0, 5, 0);
	AddItem(dagger);
}

void Player::AddItem(Item item)
{
	inventory.push_back(item);
	IncreaseStats(item.health, item.attack, item.defence);
}

void Player::IncreaseStats(int health, int attack, int defense)
{
	this->currentHealth += health;
	this->maxHealth += health;
	this->attack += attack;
	this->defense += defense;
}


void Player::lootRoom(Room *room)
{
	vector<Item> items = room->items;
	for (int i = 0; i < items.size(); i++)
	{
		AddItem(items[i]);
	}
}
void Player::ChangeRooms(Room *newRoom)
{
	previousRoom = currentRoom;
	currentRoom = newRoom;
}