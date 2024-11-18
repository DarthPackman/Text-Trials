#include "Defense.h"

#include <string>
using namespace std;

class Defense
{
	private:
		int healthPoints;
		float regeneration;
		float recovery;
		float defense;
	
	public:
		Defense();
		Defense()
		
		int getHealthPoints()
		{
			return healthPoints;
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

		//heals
		void Heal(int add)
		{
			healthPoints += add;
			cout << "You have healed for " << add << " hit points.";
		}
		void Regenerate()
		{
			Heal(regen);
		}

		//level up methods
		void levelUpHealthPoints()
		{
	
		}
		void levelUpRegeneration()
		{
	
		}
		void levelUpRecovery()
		{
	
		}
		void levelUpDefense()
		{
	
		}
		
};