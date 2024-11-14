#ifndef CharacterState_h
#define CharacterState_h

#include <vector>

#include "IdleState.h"
#include "void.h"

class Character;

class CharacterState : virtual public IdleState {

 public:

    virtual void Enter();

    virtual void Tick();

    virtual void Exit();

 public:

    /**
     * @element-type Character
     */
    std::vector< Character* > myCharacter;
};

#endif // CharacterState_h
