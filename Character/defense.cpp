#include "Defense.h"
#include <iostream>
using namespace std;

// Default Constructor
Defense::Defense()
{
    currentHealthPoints = 500;
    maxHealthPoints = 500;
    regeneration = 1;
    recovery = 100;
    defense = 100;
}

// Parameterized Constructor
Defense::Defense(int hp, float regen, float recov, float def)
{
    currentHealthPoints = hp;
    maxHealthPoints = hp;
    regeneration = regen;
    recovery = recov;
    defense = def;
}

// Getters
int Defense::getHealthPoints()
{
    return currentHealthPoints;
}

float Defense::getRegeneration()
{
    return regeneration;
}

float Defense::getRecovery()
{
    return recovery;
}

float Defense::getDefense()
{
    return defense;
}

// Take & Heal Methods
void Defense::TakeDamage(int damage)
{
    currentHealthPoints -= damage;
}

void Defense::Heal(int heals)
{
    currentHealthPoints += heals;
    if (currentHealthPoints > maxHealthPoints)
    {
        currentHealthPoints = maxHealthPoints;
        cout << "You have healed to full health." << endl;
    }
    else
    {
        cout << "You have healed for " << heals << " hit points." << endl;
    }
}

void Defense::Regenerate()
{
    Heal(static_cast<int>(regeneration));
}

// Level Up Methods
void Defense::levelUpHealthPoints()
{
    maxHealthPoints += 25;
}

void Defense::levelUpRegeneration()
{
    regeneration += 1;
}

void Defense::levelUpRecovery()
{
    recovery -= 5;
}

void Defense::levelUpDefense()
{
    defense += 5;
}
