using namespace std;

class Defense
{
	private:
		//data members
		int healthPoints;
		float regeneration;
		float recovery;
		float defense;
		
	public:
		//constructors
		Defense()
		{
			healthPoints = 1;
			regeneration = 1;
			recovery = 1;
			defense = 1;
		}
		Defense(int hp, float regen, float recov, float def)
		{
			healthPoints = hp;
			regeneration = regen;
			recovery = recov;
			defense = def;
		}
		
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
		
		//heal and regenerate functions
		void heal(int add)
		{
			healthPoints += add;
			cout << "You have healed for " << add << " hit points.\n";
		}
		void regenerate()
		{
			heal(regeneration);
		}
		
		//level up functions
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
}