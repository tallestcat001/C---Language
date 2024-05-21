#include "Marine.h"

Marine::Marine ()
{
	health = 40;
	maxhp = health;
}

void Marine::Recovery()
{
	health = maxhp;
	cout << "Marine의 체력은 : " << health << endl;
}

void Marine::Damage(int damage)
{
	health -= damage;
	cout << "Marine의 체력은 : " << health << endl;
}
