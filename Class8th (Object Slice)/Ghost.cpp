#include "Ghost.h"

Ghost::Ghost ()
{
	health = 45;
	maxhp = health;
}

void Ghost::Recovery()
{
	health = maxhp;
	cout << "Ghost�� ü���� : " << health << endl;
}

void Ghost::Damage(int damage)
{
	health -= damage;
	cout << "Ghost�� ü���� : " << health << endl;
}