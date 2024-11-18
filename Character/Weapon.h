#ifndef WEAPON_H
#define WEAPON_H

#include <string>
using namespace std;

class Weapon
{
	private:
		//data members
		string name;
		float damageMod;
		float coolDownMod;
		
	public:
		//constructors
		Weapon();
		Weapon(string nm, float dm, float cdm);
		
		//getters
		string getName();
		float getDamageMod();
		float getCoolDownMod();
};

#endif
