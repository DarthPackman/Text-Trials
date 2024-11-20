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
		// Default Constructor
		Armour::Armour()
		{
			name = "Default Armour";
			defenseMod = 1.0f;
			recoveryMod = 1.0f;
		}
		// Parameterized Constructor
		Armour::Armour(string nm, float dm, float rm)
		{
			name = nm;
			defenseMod = dm;
			recoveryMod = rm;
		}

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
		string getName() const
		{
			return name;
		}
		float getDefenseMod() const
		{
			return defenseMod;
		}
		float getRecoveryMod() const
		{
			return recoveryMod;
		}
};