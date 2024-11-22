#ifndef AttackState_h
#define AttackState_h

#include "CharacterState.h"

class Character;

class AttackState : protected CharacterState 
{

 public:
 	
 	using CharacterState::CharacterState;

    virtual void Enter();

    virtual void Tick();

    virtual void Exit();

    
};

#endif // AttackState_h
