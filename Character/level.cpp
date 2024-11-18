#include "Level.h"

#include <string>
using namespace std;

Level::Level() : level(1), experience(0), nextLevel(100) {}

Level::Level(int lvl, int exp, int nxt) : level(lvl), experience(exp), nextLevel(nxt) {}

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