#include "Character.h"
#include <cstdlib> // For rand()
#include <iostream>
using namespace std;

// Default Constructor
Character::Character()
{
    name = "Default Character";
    offense = Offense();
    defense = Defense();
    weapon = Weapon();
    armour = Armour();
    level = 1;
    experience = 0;
    nextLevel = 100;
    isDead = false;
}

// Parameterized Constructor
Character::Character(string nm, Offense off, Defense def, Weapon wep, Armour arm)
{
    name = nm;
    offense = off;
    defense = def;
    weapon = wep;
    armour = arm;
    level = 1;
    experience = 0;
    nextLevel = 100;
    isDead = false;
}

// Simplified Constructor
Character::Character(string nm, Offense off, Defense def)
{
    name = nm;
    offense = off;
    defense = def;
    weapon = Weapon();
    armour = Armour();
    level = 1;
    experience = 0;
    nextLevel = 100;
}

Character::~Character(){}

// Setters
void Character::setName(string str)
{
    name = str;
}

void Character::setWeapon(Weapon wp)
{
    weapon = wp;
}

void Character::setArmour(Armour arm)
{
    armour = arm;
}

// Getters
string Character::getName()
{
    return name;
}

Offense Character::getOffense()
{
    return offense;
}

Defense Character::getDefense()
{
    return defense;
}

Weapon Character::getWeapon()
{
    return weapon;
}

Armour Character::getArmour()
{
    return armour;
}

// Combat Methods
void Character::Attack(Offense off, Weapon wep, Character& target)
{
    int damageToDeal = off.getDamage() * wep.getDamageMod();
	cout << name << " has attacked for " << damageToDeal << " damage." << endl;
    target.Defend(damageToDeal);
}

void Character::Defend(int damage)
{
    int damageToTake = damage - (defense.getDefense() * armour.getDefenseMod());
    if (damageToTake < 0)
    {
    	damageToTake = 0;
	}
	defense.TakeDamage(damageToTake);
	cout << name << " has taken " << damage << " damage." << endl;
	if (defense.getHealthPoints() <= 0)
	{
		cout << name << " has been defeated." << endl;
		(*this).isDead = true;
	}
}

// Experience Methods
void Character::addExp(int exp)
{
    experience += exp;
    if (experience >= nextLevel)
    {
        levelUp();
    }
}

void Character::levelUp()
{
    experience = 0;
    nextLevel = static_cast<int>(nextLevel * 1.5);
    level += 1;

    int statsToLevel = rand() % 10;
    if (statsToLevel > 3)
    {
        statsToLevel = 2;
    }
    else if (statsToLevel < 7)
    {
        statsToLevel = 4;
    }
    else
    {
        statsToLevel = 3;
    }

    for (int i = 0; i < statsToLevel; i++)
    {
        int stat = rand() % 6;
        switch (stat)
        {
            case 0:
                defense.levelUpHealthPoints();
                break;
            case 1:
                defense.levelUpRegeneration();
                break;
            case 2:
                defense.levelUpRecovery();
                break;
            case 3:
                defense.levelUpDefense();
                break;
            case 4:
                offense.levelUpDamage();
                break;
            case 5:
                offense.levelUpCoolDown();
                break;
        }
    }
}

int Character::getLevel()
{
    return level;
}

//State control methods
void Character::setState(CharacterState *newState)
{
	myState = newState;
}

CharacterState* Character::getState() //returns pointer to state object
{
	return myState;		
}

void Character::setTick(float inTick)//Sets value for tickCount
{
	tickCount = inTick;
}	
float Character::getTick()//gets value for tickCount
{
	return tickCount;
}
