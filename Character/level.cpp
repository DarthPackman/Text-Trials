using namespace std;

class Level
{
	private:
		//data members
		int level;
		int experience;
		int nextLevel;
		
	public:
		//getters
		int getLevel()
		{
			return level;
		}
		int getExperience()
		{
			return experience;
		}
		int getNextLevel()
		{
			return nextLevel;
		}
		
		//add Exp function
		void addExp(int exp)
		{
			experience += exp;
			
			if (experience >= nextLevel)
			{
				levelUp();
			}
		}
		
		//level Up function
		void levelUp()
		{
			//do level up
			//experience = 0
			//nextLevel * 1.5
		}
}