#include "Firebet.h"

Firebet::Firebet()
{
	health = 50;
	
	maxhp = health;

}

void Firebet::Recovery()
{
	health = maxhp;
	cout << "FIrebet�� ü���� : " << health << endl;
}

void Firebet::Damage(int damage)
{
	health -= damage;
	cout << "FIrebet�� ü���� : " << health << endl;
}
