#ifndef CharacterState_h
#define CharacterState_h

#include "State.h"

#include "..\Character\Character.h"

class CharacterState 
{

	private:
		
		Character* myCharacter;

	public:

    	virtual void Enter();

    	virtual void Tick();

    	virtual void Exit();

};

#endif // CharacterState_h
