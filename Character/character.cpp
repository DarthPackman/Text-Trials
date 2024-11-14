#include <string>
#include "Defense.cpp"
#include "Offense.cpp"
#include "Level.cpp"
#include "Weapon.cpp"
#include "Armor.cpp"

class Character
{
	private:
		//data members
		string name;
		Offense offense;
		Defense defense;
		Level level;
		Weapon weapon;
		Armor armor;
		
	public:
		//constructors
		Character()
		{
			name = "noName";
			offense = new Offense();
			defense = new Defense();
			level = new Level();
			weapon = new Weapon();
			armor = new Armor();
		}
		
		Character(string nm, Offense off, Defense def, Level lvl, Weapon wep, Armor arm)
		{
			name = nm;
			offense = off;
			defense = def;
			level = lvl;
			weapon = wep;
			armor = arm;
		}
		
		//setters
		void setName(string str)
		{
			name = str;
		}
		void setWeapon(Weapon wp)
		{
			weapon = wp;
		}
		void setArmor(Armor arm)
		{
			armor = arm;
		}
		
		//getters
		string getName()
		{
			return name;
		}
		
		//member functions
		void Attack(Offense off, Weapon wep, Character target)
		{
			
		}
		void Defense(Defense def, Armor arm)
		{
			
		}
}