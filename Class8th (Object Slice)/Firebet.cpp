#include "Firebet.h"

Firebet::Firebet()
{
	health = 50;
	
	maxhp = health;

}

void Firebet::Recovery()
{
	health = maxhp;
	cout << "FIrebet의 체력은 : " << health << endl;
}

void Firebet::Damage(int damage)
{
	health -= damage;
	cout << "FIrebet의 체력은 : " << health << endl;
}
