#include "Offense.h"

#include <string>
using namespace std;

Offense::Offense() : damage(1), coolDown(1) {}
Offense::Offense(float dam, float cd) : damage(dam), coolDown(cd) {}

float getDamage()
{
	return damage;
}

float getCoolDown()
{
	return coolDown;
}

void levelUpDamage()
{
	
}

void levelUpCoolDown()
{
	
}