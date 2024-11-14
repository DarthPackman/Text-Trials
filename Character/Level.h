#ifndef Level_h
#define Level_h

#include "void.h"

class Character;

class Level {

 public:

    virtual void addExp(void  Integer);

    virtual void levelUp();

    virtual Integer getLevel();

    virtual Integer getExperience();

    virtual Integer getNextLevel();

 public:
    Integer level;
    Integer experience;
    Integer nextlevel;

 public:

    /**
     * @element-type Character
     */
    Character *myCharacter;

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

#endif // Level_h
