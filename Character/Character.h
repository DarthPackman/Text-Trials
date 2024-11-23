#ifndef CHARACTER_H
#define CHARACTER_H

#include "Armour.h"
#include "Defense.h"
#include "Offense.h"
#include "Weapon.h"

#include "..\States\CharacterState.h"

#include <string>
using namespace std;

class CharacterState;//Forward declaration

class Character
{
    private:
        string name;
        Offense offense;
        Defense defense;
        Weapon weapon;
        Armour armour;
        int level;
        int experience;
        int nextLevel;
        bool isDead;
        
        //Character *target;
        CharacterState *myState;
        float tickCount;//holds value being decremented to control states, set to a variety of values based on character

    public:
        // Constructors
        Character();
        Character(string nm, Offense off, Defense def, Weapon wep, Armour arm);
        Character(string nm, Offense off, Defense def);
        ~Character();

        // Setters
        void setName(string str);
        void setWeapon(Weapon wp);
        void setArmour(Armour arm);

        // Getters
        std::string getName();
        Offense getOffense();
        Defense getDefense();
        Weapon getWeapon();
        Armour getArmour();
        bool getAlive();

        // Combat Methods
        void Attack(Offense off, Weapon wep, Character& target);
        void Defend(int damage);

        // Experience Methods
        void addExp(int exp);
        void levelUp();
		int getLevel();
		
		//State Control Methods
		void setState(CharacterState *newState);
		CharacterState* getState(); //returns pointer to state object
		void setTick(float inTick);//Sets value for tickCount
		float getTick();//gets value for tickCount
		
		
};

#endif // CHARACTER_H
