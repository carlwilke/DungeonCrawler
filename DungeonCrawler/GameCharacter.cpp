#include "GameCharacter.h"

GameCharacter::GameCharacter(string name, int health, int attack, int defense)
{
	this->name = name;
	this->maxHealth = health;
	this->currentHealth = health;
	this->attack = attack;
	this->defense = defense;
}

int GameCharacter::TakeDamage(int amount)
{
	int damage = amount - defense;
	if (damage < 0)
	{
		damage = 0;
	}
	currentHealth -= damage;
	return damage;
}

bool GameCharacter::CheckIsDead()
{
	// Check if health is Zero or less. Then dead
	return currentHealth <= 0;
}

