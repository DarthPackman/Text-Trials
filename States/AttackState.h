#ifndef AttackState_h
#define AttackState_h

#include "CharacterState.h"


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

#endif // AttackState_h
