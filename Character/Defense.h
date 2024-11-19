#ifndef Defense_h
#define Defense_h

class Defense {
	private:
		//data members
		int healthPoints;
		float regeneration;
		float recovery;
		float defense;
		
	public:
		//constructors
		Defense();
		Defense(int hp, float regen, float recov, float def);
		
		//getters
		int getHealthPoints();
		float getRegeneration();
		float getRecovery();
		float getDefense();
		
		//heal methods
		void TakeDamage(int damage);
		void Heal(int heals);
		void Regenerate();
		
		//level up methods
		void levelUpHealthPoints();
		void levelUpRegeneration();
		void levelUpRecovery();
		void levelUpDefense();
};

#endif
