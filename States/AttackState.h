#ifndef AttackState_h
#define AttackState_h

#include "CharacterState.h"

class AttackState : public CharacterState {

 public:

    virtual void Enter();

    virtual void Tick();

    virtual void Exit();

    
};

#endif // AttackState_h
