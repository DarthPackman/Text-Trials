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

};

#endif // DefendState_h
