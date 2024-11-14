#include <string>

class Weapon
{
	private:
		//data members
		string name;
		float damageMod;
		float coolDownMod;
		
	public:
		//constructors
		Weapon()
		{
			name = "noWeapon";
			damageMod = 1;
			coolDownMod = 1;
		}
		Weapon(string nm, float dm, float cdm)
		{
			name = nm;
			damageMod = dm;
			coolDownMod = cdm;
		}
		
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
}