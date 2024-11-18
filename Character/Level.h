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
		int getLevel();
		int getExperience();
		int getNextLevel();
		void addExp(int exp);
		void levelUp();
};

#endif
