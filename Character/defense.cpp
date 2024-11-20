#include <iostream>

#include <string>
using namespace std;

class Defense
{
	private:
		int currentHealthPoints;
		int maxHealthPoints;
		float regeneration;
		float recovery;
		float defense;
	
	public:
		Defense()
		{
			currentHealthPoints = 500;
			maxHealthPoints = 500;
			regeneration = 1;
			recovery = 100;
			defense = 100;
		}
		Defense(int hp, float regen, float recov, float def)
		{
			currentHealthPoints = hp;
			maxHealthPoints = hp;
			regeneration = regen;
			recovery = recov;
			defense = def;
		}
		
		int getHealthPoints()
		{
			return currentHealthPoints;
		}
		float getRegeneration()
		{
			return regeneration;
		}
		float getRecovery()
		{
			return recovery;
		}
		float getDefense()
		{
			return defense;
		}

		//Take & heal methods
		void TakeDamage(int damage)
		{
			currentHealthPoints -= damage;
			cout << "You have taken " << damage << " damage.";
		}
		
		void Heal(int heals)
		{
			currentHealthPoints += heals;
			if (currentHealthPoints > maxHealthPoints)
			{
				currentHealthPoints = maxHealthPoints;
				cout << "You have healed to full health.";
			}
			else
			{
				cout << "You have healed for " << heals << " hit points.";
			}
		}
		void Regenerate()
		{
			Heal(regeneration);
		}

		//level up methods
		void levelUpHealthPoints()
		{
			maxHealthPoints += 25;
		}
		void levelUpRegeneration()
		{
			regeneration += 1;
		}
		void levelUpRecovery()
		{
			recovery -= 5;
		}
		void levelUpDefense()
		{
			defense += 5;
		}
		
};