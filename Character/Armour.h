#ifndef ARMOUR_H
#define ARMOUR_H

#include <string>
using namespace std;

class Armour
{
    private:
        std::string name;
        float defenseMod;
        float recoveryMod;

    public:
        // Constructors
        Armour();  // Default Constructor
        Armour(string nm, float dm, float rm);  // Parameterized Constructor

        // Setters
        void setName(string str);
        void setDefenseMod(float dm);
        void setRecoveryMod(float rm);

        // Getters
        std::string getName() const;
        float getDefenseMod() const;
        float getRecoveryMod() const;
};

#endif // ARMOUR_H


