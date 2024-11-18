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
		
		int getLevel()
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
			//make nextLevel higher
			//do level up things
		}
};
