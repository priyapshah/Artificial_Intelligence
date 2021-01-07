//
//  StateMachine.hpp
//  AI
//
//  Created by Priya Shah on 12/25/20.
//

#ifndef StateMachine_hpp
#define StateMachine_hpp

#include "State.hpp"
#include <stdio.h>

template <class T>

class StateMachine {
private:
    State<T>* currState;
    State<T>* prevState;
    State<T>* globalState;
    
    T* owner;
    
public:
    StateMachine(T* owner) : owner(owner), currState(nullptr), prevState(nullptr), globalState(nullptr){}
    
    void Update() const {
        if (globalState) {
            globalState->Execute(owner);
        }
        
        if (currState)
        {
            currState->Execute(owner);
        }
    }
    
    State<T>* getCurrState() const {
        return currState;
    }
    
    State<T>* getPrevState() const {
        return prevState;
    }
    
    State<T>* getGlobalState() const {
        return globalState;
    }
    
    void setCurrState(State<T>* stateToSet) {
        currState = stateToSet;
    }
    
    void setPrevState(State<T>* stateToSet) {
        prevState = stateToSet;
    }
    
    void setGlobalState(State<T>* stateToSet) {
        globalState = stateToSet;
    }
    
    void changeState(State<T>* newState) {
        currState -> Exit(owner);
        
        prevState = currState;
        currState = newState;
        
        currState -> Enter(owner);
    }
    
    void revertState()
    {
        currState->Exit(owner);
        
        currState = prevState;

        currState->Enter(owner);
    }
    
};

#endif /* StateMachine_hpp */
