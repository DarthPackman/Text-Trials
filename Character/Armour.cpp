#include "Armour.h"

// Default Constructor
Armour::Armour()
{
    name = "Default Armour";
    defenseMod = 1.0f;
    recoveryMod = 1.0f;
}

// Parameterized Constructor
Armour::Armour(string nm, float dm, float rm)
{
    name = nm;
    defenseMod = dm;
    recoveryMod = rm;
}

// Setters
void Armour::setName(string str)
{
    name = str;
}

void Armour::setDefenseMod(float dm)
{
    defenseMod = dm;
}

void Armour::setRecoveryMod(float rm)
{
    recoveryMod = rm;
}

// Getters
string Armour::getName() const
{
    return name;
}

float Armour::getDefenseMod() const
{
    return defenseMod;
}

float Armour::getRecoveryMod() const
{
    return recoveryMod;
}