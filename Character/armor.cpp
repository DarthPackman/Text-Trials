#include <string>

class Armor
{
	private:
		//data members
		string name;
		float defenseMod;
		float recoveryMod;
		
	public:
		//constructors
		Armor()
		{
			name = "noArmor";
			defenseMod = 1;
			recoveryMod = 1;
		}
		Armor(string nm, float dm, float rm)
		{
			name = nm;
			defenseMod = dm;
			recoveryMod = rm;
		}
		
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
}