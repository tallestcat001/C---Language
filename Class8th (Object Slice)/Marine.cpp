#include "Marine.h"

Marine::Marine ()
{
	health = 40;
	maxhp = health;
}

void Marine::Recovery()
{
	health = maxhp;
	cout << "Marine�� ü���� : " << health << endl;
}

void Marine::Damage(int damage)
{
	health -= damage;
	cout << "Marine�� ü���� : " << health << endl;
}
