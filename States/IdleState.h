#ifndef IdleState_h
#define IdleState_h

#include "CharacterState.h"
#include "void.h"

class AttackState;
class DefendState;
class Character;

class IdleState : public CharacterState {

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
     * @element-type DefendState
     */
    DefendState *myDefendState;

    /**
     * @element-type AttackStae
     */
    AttackStae *myAttackStae;

    Character *myCharacter;
};

#endif // IdleState_h
