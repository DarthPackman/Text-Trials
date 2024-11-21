#ifndef State_h
#define State_h

class State {

 public:

    virtual void Enter() = 0;

    virtual void Tick() = 0;

    virtual void Exit() = 0;

    // virtual destructor for interface 
    virtual ~State() { }

};

#endif // State_h
