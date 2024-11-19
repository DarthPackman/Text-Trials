#include "Level.h"

#include <string>
using namespace std;

class Level
{
	private:
		int level;
		int experience;
		int nextLevel;
		
	public:
		Level();
		Level(int lvl, int exp, int nxt);
		
		int getCurrentLevel()
		{
			return level;
		}
		int getExperience()
		{
			return experience;
		}
		int getNextLevel()
		{
			return nextLevel;
		}

		void addExp(int exp, Character& playerCharacter)
		{
			experience += exp;
	
			if (experience >= nextLevel)
			{
				levelUp(playerCharacter);
			}
		}

		void levelUp(Character& playerCharacter)
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
						playerCharacter.getDefense().levelUpHealthPoints();
						break;
					case 1:
						playerCharacter.getDefense().levelUpRegeneration();
						break;
					case 2:
						playerCharacter.getDefense().levelUpRecovery();
						break;
					case 3:
						playerCharacter.getDefense().levelUpDefense();
						break;
					case 4:
						playerCharacter.getOffense().levelUpDamage();
						break;
					case 5:
						playerCharacter.getOffense().levelUpCoolDown();
						break;
				}
			}
		}
};
