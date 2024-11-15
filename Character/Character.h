#ifndef Character_h
#define Character_h

#include <vector>

#include "Armour.h"
#include "Defense.h"
#include "Level.h"
#include "Offense.h"
#include "Weapon.h"
#include "void.h"

class CharacterState;
class AttackState;
class DefendState;
class IdleState;

class Character {

 public:

    virtual void setName(void  String);

    virtual String getName();

    virtual void Attack(void  Offense, void  Weapon, void  Character);

    virtual void Defend(void  Defense, void  Armour);

 public:
    Offense offense;
    Defense defense;
    Level level;
    Weapon weapon;
    Armour armour;

 private:
    String name;

 public:

    /**
     * @element-type Level
     */
    Level *myLevel;

    /**
     * @element-type Armour
     */
    Armour *myArmour;

    /**
     * @element-type Offense
     */
    Offense *myOffense;

    /**
     * @element-type Defense
     */
    Defense *myDefense;

    /**
     * @element-type Weapon
     */
    Weapon *myWeapon;

    /**
     * @element-type Level
     */
    Level *myLevel;

    /**
     * @element-type Armour
     */
    Armour *myArmour;

    /**
     * @element-type Offense
     */
    Offense *myOffense;

    /**
     * @element-type Defense
     */
    Defense *myDefense;

    /**
     * @element-type Weapon
     */
    Weapon *myWeapon;

    /**
     * @element-type Level
     */
    Level *myLevel;

    /**
     * @element-type Armour
     */
    std::vector< Armour* > myArmour;

    /**
     * @element-type Weapon
     */
    std::vector< Weapon* > myWeapon;

    Defense myDefense;

    Offense myOffense;

    Level myLevel;

    /**
     * @element-type CharacterState
     */
    std::vector< CharacterState* > myCharacterState;

    AttackState *myAttackStae;

    DefendState *myDefendState;

    IdleState *myIdleState;
};

#endif // Character_h
