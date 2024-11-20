#include "Armour.h"
#include "Defense.h"
#include "Offense.h"
#include "Weapon.h"

#include <string>
using namespace std;

class Character
{
	private:
		string name;
		Offense offense;
		Defense defense;
		Weapon weapon;
		Armour armour;
		int level;
		int experience;
		int nextLevel;
	public:
		// constructors
		Character()
		{
			name = "Default Character";
			offense = Offense();
			defense = Defense();
			weapon = Weapon();
			armour = Armour();
			level = 1;
			experience = 0;
			nextLevel = 100;
		}
		Character(string nm, Offense off, Defense def, Weapon wep, Armour arm)
		{
			name = nm;
			offense = off;
			defense = def;
			weapon = wep;
			armour = arm;
			level = 1;
			experience = 0;
			nextLevel = 100;
		}
		Character(string nm, Offense off, Defense def)
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

		// Experience
		void addExp(int exp)
		{
			experience += exp;
	
			if (experience >= nextLevel)
			{
				levelUp();
			}
		}

		void levelUp()
		{
			experience = 0;
			nextLevel = nextLevel * 1.5;
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

		int getLevel()
		{
			return level;
		}
};