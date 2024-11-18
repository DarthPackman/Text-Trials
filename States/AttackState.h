#ifndef AttackStae_h
#define AttackStae_h

#include "CharacterState.h"
#include "void.h"

class IdleState;
class DefendState;
class Character;

class AttackState : public CharacterState {

 public:

    virtual void Enter();

    virtual void Tick();

    virtual void Exit();

 public:

    /**
     * @element-type IdleState
     */
    IdleState *myIdleState;

    /**
     * @element-type DefendState
     */
    DefendState *myDefendState;

    Character *myCharacter;

    /**
     * @element-type IdleState
     */
    IdleState *myIdleState;
};

#endif // AttackStae_h
