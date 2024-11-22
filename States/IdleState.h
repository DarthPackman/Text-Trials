#ifndef IdleState_h
#define IdleState_h

#include "CharacterState.h"

class Character;

class IdleState : protected CharacterState
{

 public:

	using CharacterState::CharacterState;
	
    virtual void Enter();

    virtual void Tick();

    virtual void Exit();


};

#endif // IdleState_h
