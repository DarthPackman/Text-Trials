#ifndef State_h
#define State_h

#include "void.h"


class State {

 public:

    virtual void Enter()  = 0;

    virtual void Tick()  = 0;

    virtual void Exit()  = 0;

public:
    // virtual destructor for interface 
    virtual ~State() { }

 public:
    Integer newAttr;
};

#endif // State_h
