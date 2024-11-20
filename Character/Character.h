#ifndef CHARACTER_H
#define CHARACTER_H

#include "Armour.h"
#include "Defense.h"
#include "Offense.h"
#include "Weapon.h"

#include <string>
using namespace std;

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

    public:
        // Constructors
        Character();
        Character(string nm, Offense off, Defense def, Weapon wep, Armour arm);
        Character(string nm, Offense off, Defense def);

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

        // Combat Methods
        void Attack(Offense off, Weapon wep, Character target);
        void Defend(int damage);

        // Experience Methods
        void addExp(int exp);
        void levelUp();
		int getLevel();
};

#endif // CHARACTER_H
