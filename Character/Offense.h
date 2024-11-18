#ifndef Offense_h
#define Offense_h

#include "Float.h"
#include "void.h"

class Character;

class Offense {

 public:

    virtual void levelUpDamage();

    virtual void levelUpSpeed();

    virtual void levelUpCoolDown();

    virtual Float getDamage();

    virtual Float getSpeed();

    virtual Float getCoolDown();

 public:
    Float damage;
    Float speed;
    Float coolDown;

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

#endif // Offense_h
