#ifndef State_h
#define State_h

class State {

 public:

    virtual void Enter();

    virtual void Tick();

    virtual void Exit();

    // virtual destructor for interface 
    virtual ~State() { }

};

#endif // State_h
