#ifndef Weapon_h
#define Weapon_h

#include "Float.h"

class Character;

class Weapon {

 public:

    virtual String getName();

    virtual Float getDamageMod();

    virtual Float getSpeedMod();

    virtual Float getCoolDownMod();

 public:
    String name;
    Float damageMod;
    Float speedMod;
    Float coolDownMod;

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

#endif // Weapon_h
