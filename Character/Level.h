#ifndef Level_h
#define Level_h

class Level {
	private:
		int level;
		int experience;
		int nextLevel;
	
	public:
		Level();
		Level(int lvl, int exp, int nxt);
		int getCurrentLevel();
		int getExperience();
		int getNextLevel();
		
		void addExp(int exp, Character& playerCharacter);
		void levelUp();
};

#endif
