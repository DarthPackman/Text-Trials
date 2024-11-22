#include "DefendState.h"

void DefendState::Enter()
{
    std::cout << (*myCharacter).getName() << "is now Defending";
}

void DefendState::Tick()
{
    //defend is instant and does not tick
}

void DefendState::Exit()
{
    (*myCharacter).setTick((*myCharacter).getDefense().getRecovery());
}

