#include "AttackState.h"

void AttackState::Enter()
{
        std::cout << (*myCharacter).getName() << "is now Attacking";
}

void AttackState::Tick()
{
    //Attack State is instant and does not tick
}

void AttackState::Exit()
{
    (*myCharacter).setTick((*myCharacter).getOffense().getCoolDown());
}
