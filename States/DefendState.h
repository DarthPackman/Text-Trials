#ifndef DefendState_h
#define DefendState_h

#include "CharacterState.h"

class Character;

class DefendState : protected CharacterState 
{

 public:
 	
 	using CharacterState::CharacterState;

    virtual void Enter();

    virtual void Tick();

    virtual void Exit();

};

#endif // DefendState_h
