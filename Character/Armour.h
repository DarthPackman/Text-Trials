#ifndef ARMOUR_h
#define ARMOUR_h

#include <string>
using namespace std;

class Armour 
{
	private:
		string name;
		float defenseMod;
		float recoveryMod;
		
	public:
		Armour();
		Armour(string nm, float dm, float rm);
		
		string getName();
		float getDefenseMod();
		float getRecoveryMod();
};

#endif // Armour_h
