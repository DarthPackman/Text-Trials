#include "Defense.h"

#include <string>
using namespace std;

//constructors
Defense::Defense() : healthPoints(1), regeneration(1), recovery(1), defense(1) {}
Defense::Defense(int hp, float regen, float recov, float def) 
	: healthPoints(hp), regeneration(regen), recovery(recov), defense(def) {}

//getters
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
}
void Regenerate()
{
	healthPoints += regeneration;
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