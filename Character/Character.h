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
		Character(string nm, Offense off, Defense def);
		void setName(string str);
		void setWeapon(Weapon wp);
		void setArmour(Armour arm);
		
		string getName();
		Offense getOffense();
		Defense getDefense();
		Level getLevel();
		Weapon getWeapon();
		Armour getArmour();
		void Attack(Offense off, Weapon wep, Character target);
		void Defend(Defense def, Armour arm);
};

#endif