#ifndef Armour_h
#define Armour_h

#include "Float.h"

class Character;

class Armour {

 public:

    virtual String getName();

    virtual Float getDamageMod();

    virtual Float getRecoveryMod();

 public:
    String name;
    Float defenseMod;
    Float recoveryMod;

 public:

    /**
     * @element-type Character
     */
    Character *myCharacter;

    /**
     * @element-type Character
     */
    Character *myCharacter;

    Character *myCharacter;
};

#endif // Armour_h
