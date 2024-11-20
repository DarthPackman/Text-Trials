#ifndef IdleState_h
#define IdleState_h

#include "CharacterState.h"

class IdleState : public CharacterState
{

 public:

    virtual void Enter();

    virtual void Tick();

    virtual void Exit();


};

#endif // IdleState_h
