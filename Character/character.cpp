#include "Character.h"
#include "Armour.cpp"
#include "Defense.cpp"
#include "Level.cpp"
#include "Offense.cpp"
#include "Weapon.cpp"

#include <string>
using namespace std;

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
		// constructors
		Character();
		Character(string nm, Offense off, Defense def, Level lvl, Weapon wep, Armour arm);
		Character(string nm, Offense off, Defense def);
		
		// setters
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
		
		// getters
		string getName()
		{
			return name;
		}
		
		// combat
		void Attack(Offense off, Weapon wep, Character target)
		{
			//Something
		}
		void Defense(Defense def, Armour arm)
		{
			//Something
		}
};