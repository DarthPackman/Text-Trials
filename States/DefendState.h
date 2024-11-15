#ifndef DefendState_h
#define DefendState_h

#include "CharacterState.h"

class AttackState;
class IdleState;
class Character;

class DefendState : public CharacterState {

 public:

    virtual void Enter();

    virtual void Tick();

    virtual void Exit();

 public:

    /**
     * @element-type AttackStae
     */
    AttackStae *myAttackStae;

    /**
     * @element-type IdleState
     */
    IdleState *myIdleState;

    Character *myCharacter;
};

#endif // DefendState_h
