#include "Armour.h"
#include <string>
using namespace std;

class Armour
{
	private:
		string name;
		float defenseMod;
		float recoveryMod;

	public:
		// constructors
		Armour();
		Armour(string nm, float dm, float rm);
		
		// setters
		void setName(string str)
		{
			name = str;
		}
		void setDefenseMod(float dm)
		{
			defenseMod = dm;
		}
		void setRecoveryMod(float rm)
		{
			recoveryMod = rm;
		}

		// getters
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
};