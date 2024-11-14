#ifndef Defense_h
#define Defense_h

#include "Float.h"
#include "void.h"

class Character;

class Defense {

 public:

    virtual void levelUpHealthPoints();

    virtual void levelUpRegeneration();

    virtual void levelUpRecovery();

    virtual void levelUpDefense();

    virtual Integer heal();

    virtual Integer getHealthPoints();

    virtual Float getRegeneration();

    virtual Float getRecovery();

    virtual Float getDefense();

 public:
    Integer healthPoints;
    Float regeneration;
    Float recovery;
    Float defense;

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

#endif // Defense_h
