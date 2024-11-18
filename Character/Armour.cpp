#include "Armour.h"

#include <string>
using namespace std;

//default constructor
Armour::Armour() : name("noArmour"), defenseMod(1), recoveryMod(1) {}
//parameter constructor
Armour::Armour(string nm, float dm, float rm) : name(nm), defenseMod(dm), recoveryMod(rm) {}

//getters
string getName()
{
	return name;
}
float getDefenseMod()
{
	return defenseMod;
}
float getRecoveryMod()
{
	return recoveryMod;
}