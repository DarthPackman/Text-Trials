#include "AttackState.h"

void AttackState::Enter()
{
        std::cout << (*myCharacter).getName() << "is now Attacking" << std::endl;
        (*myCharacter).Attack((*myCharacter).getOffense(), (*myCharacter).getWeapon(), (*myCharacter).getTarget());
}

void AttackState::Tick()
{
    //Attack State is instant and does not tick
}

void AttackState::Exit()
{
    (*myCharacter).setTick((*myCharacter).getOffense().getCoolDown());
}
