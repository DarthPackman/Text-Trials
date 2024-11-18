#include "Weapon.h"

#include <string>
using namespace std;

//default constructor
Weapon::Weapon() : name("noWeapon"), damageMod(1), coolDownMod(1) {}
//parameter constructor
Weapon::Weapon(string nm, float dm, float cdm) : name(nm), damageMod(dm), coolDownMod(cdm) {}

//getters
string getName()
{
	return name;
}
float getDamageMod()
{
	return damageMod;
}
float getCoolDownMod()
{
	return coolDownMod;	
}