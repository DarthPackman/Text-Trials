#include "Offense.h"

#include <string>
using namespace std;

class Offense
{
	private:
		float damage;
 		float coolDown;
 	
 	public:
 		Offense();
 		Offense(float dam, float cd);
 		
 		float getDamage()
		{
			return damage;
		}

		float getCoolDown()
		{
			return coolDown;
		}

		void levelUpDamage()
		{
			damage += 5;
		}

		void levelUpCoolDown()
		{
			coolDown -= 5;
		}
};