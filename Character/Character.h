#ifndef Character_h
#define Character_h

#include <vector>
#include "Armour.cpp"
#include "Defense.cpp"
#include "Level.cpp"
#include "Offense.cpp"
#include "Weapon.cpp"

class Character {
	private:
		//data members
		string name;
		Offense offense;
		Defense defense;
		Level level;
		Weapon weapon;
		Armour armour;
		
	public:
		//constructors
		Character();
		Character(string nm, Offense off, Defense def, Level lvl, Weapon wep, Armour arm);
		//setters
		void setName(string str);
		void setWeapon(Weapon wp);
		void setArmour(Armour arm);
		
		//getters
		string getName();
		void Attack(Offense off, Weapon wep, Character target);
		void Defense(Defense def, Armour arm);
};

#endif
