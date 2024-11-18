#include "Character.h"

#include <string>
using namespace std;

//constructors
Character::Character() : name("NoName"), offense(), defense(), level(), weapon(), armour() : {}
Character::Character(string nm, Offense off, Defense def, Level lvl, Weapon wep, Armour arm) 
	: name(nm), offense(off), defense(def), level(lvl), weapon(wep), armour(arm) : {}

//setters	
void setName(string str)
{
	name = str;
}
void setWeapon(Weapon wp)
{
	weapon = wp;
}
void setArmour(Armour arm)
{
	armour = arm;
}

//getters
string getName()
{
	return name;
}

//combat
void Attack(Offense off, Weapon wep, Character target)
{
	
}
void Defense(Defense def, Armour arm)
{
	
}