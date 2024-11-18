#include "Weapon.h"
#include <string>
using namespace std;

class Weapon
{
	private:
		string name;
		float damageMod;
		float coolDownMod;
		
	public:
		Weapon();
		Weapon(string nm, float dm, float cdm);
		
		//getters
		string getName()
		{
			return name;
		}	
		float getDamageMod()
		{
			return damageMod;
		}
		float getCoolDownMod()
		{
			return coolDownMod;	
		}
};