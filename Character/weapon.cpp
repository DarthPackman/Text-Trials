#include "Weapon.h"

// Default Constructor
Weapon::Weapon()
{
    name = "Default Weapon";
    damageMod = 1.0f;
    coolDownMod = 1.0f;
}

// Parameterized Constructor
Weapon::Weapon(string nm, float dm, float cdm)
{
    name = nm;
    damageMod = dm;
    coolDownMod = cdm;
}

// Getters
string Weapon::getName()
{
    return name;
}

float Weapon::getDamageMod()
{
    return damageMod;
}

float Weapon::getCoolDownMod()
{
    return coolDownMod;
}
