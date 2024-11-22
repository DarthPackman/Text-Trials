#ifndef AttackState_h
#define AttackState_h

#include "CharacterState.h"

class Character;

class AttackState : public CharacterState 
{

 public:
 	
 	using CharacterState::CharacterState;

    virtual void Enter(Character &target);// the only one that needs a parameter due to needing to point attack at a target

    virtual void Tick();

    virtual void Exit();

    
};

#endif // AttackState_h
