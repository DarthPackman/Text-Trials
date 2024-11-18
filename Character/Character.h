#ifndef CHARACTER_H
#define CHARACTER_H

#include "Armour.cpp"
#include "Defense.cpp"
#include "Level.cpp"
#include "Offense.cpp"
#include "Weapon.cpp"

class Character
{
	private:
		string name;
		Offense offense;
		Defense defense;
		Level level;
		Weapon weapon;
		Armour armour;

	public:
		Character();
		Character(string nm, Offense off, Defense def, Level lvl, Weapon wep, Armour arm);
		void setName(string str);
		void setWeapon(Weapon wp);
		void setArmour(Armour arm);
		
		string getName();
		void Attack(Offense off, Weapon wep, Character target);
		void Defense(Defense def, Armour arm);
}

#endif
