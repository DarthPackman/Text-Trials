using namespace std;

class Offense
{
	private:
		//data members
		float damage;
		float coolDown;
		
	public:
		//constructors
		Offense()
		{
			damage = 1;
			coolDown = 1;
		}
		Offense(float dam, float cd)
		{
			damage = dam;
			coolDown = cd;
		}
		
		//getters
		float getDamage()
		{
			return damage;
		}
		float getCoolDown()
		{
			return coolDown;
		}
		
		//level up functions
		void levelUpDamage()
		{
			
		}
		void levelUpCoolDown()
		{
			
		}
}