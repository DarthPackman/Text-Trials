#include "IdleState.h"

#include "CharacterState.h"


void IdleState::Enter()
{
    //std::cout << (*myCharacter).getName() << "is now Idling";
}

void IdleState::Tick()
{
    if ((*myCharacter).getTick() > 0)
    {
		(*myCharacter).setTick((*myCharacter).getTick() - 1);//idle works through current cooldown value until 0	
	}
}

void IdleState::Exit()
{
    (*myCharacter).setTick(0);
}

