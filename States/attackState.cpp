#include "AttackState.h"

void AttackState::Enter(Character &target)
{
        std::cout << (*myCharacter).getName() << "is now Attacking";
        (*myCharacter).Attack((*myCharacter).getOffense(), (*myCharacter).getWeapon(), target);
}

void AttackState::Tick()
{
    //Attack State is instant and does not tick
}

void AttackState::Exit()
{
    (*myCharacter).setTick((*myCharacter).getOffense().getCoolDown());
}
