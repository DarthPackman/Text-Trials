#ifndef CharacterState_h
#define CharacterState_h

#include <iostream>

//#include "State.h"

#include "..\Character\Character.h"

class Character;

class CharacterState //: public State
{

	protected:
		
		Character* myCharacter;//used to reference the character that holds this state

	public:
		
		CharacterState(Character *inCharacter);//State should not be used without referencing a character

    	virtual void Enter();//Should be called immediately after updating the state of a given character to the given state

    	virtual void Tick();//Should be called each cycle of of the character action cycle

    	virtual void Exit();//Should be called immediately before updating the state of a given character to any other state

};

#endif // CharacterState_h
