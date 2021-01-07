//
//  State.hpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#ifndef State_hpp
#define State_hpp

#include <stdio.h>

template <class entity_type>

class State {
    public:

    virtual ~State(){}

    virtual void Enter(entity_type*) = 0;

    virtual void Execute(entity_type*) = 0;

    virtual void Exit(entity_type*) = 0;
};

#endif /* State_hpp */
