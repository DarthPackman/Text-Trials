#include "Offense.h"

// Default Constructor
Offense::Offense()
{
    damage = 100;
    coolDown = 100;
}

// Parameterized Constructor
Offense::Offense(float dam, float cd)
{
    damage = dam;
    coolDown = cd;
}

// Getters
float Offense::getDamage()
{
    return damage;
}

float Offense::getCoolDown()
{
    return coolDown;
}

// Level Up Methods
void Offense::levelUpDamage()
{
    damage += 5;
}

void Offense::levelUpCoolDown()
{
    coolDown -= 5;
}
