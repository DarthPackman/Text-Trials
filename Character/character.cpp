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

		Offense getOffense()
		{
			return offense;
		}

		Defense getDefense()
		{
			return defense;
		}

		Level getLevel()
		{
			return level;
		}

		Weapon getWeapon()
		{
			return weapon;
		}

		Armour getArmour()
		{
			return armour;
		}
		
		// combat
		void Attack(Offense off, Weapon wep, Character target)
		{
			int damageToDeal = off.getDamage() * wep.getDamageMod();
			target.Defend(damageToDeal);
		}

		void Defend(int damage)
		{
			int damageToTake = damage - (defense.getDefense() * armour.getDefenseMod());
			defense.TakeDamage(damageToTake);
		}
};