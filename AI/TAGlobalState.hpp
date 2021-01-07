//
//  TAGlobalState.hpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#ifndef TAGlobalState_hpp
#define TAGlobalState_hpp

#include <stdio.h>
#include "State.hpp"
#include "TA.hpp"

class TAGlobalState : public State<TA> {
    private:
    TAGlobalState(){}
    
    static TAGlobalState* instance;

    public:
    static TAGlobalState* getInstance();

    virtual void Enter(TA* TA);

    virtual void Execute(TA* TA);

    virtual void Exit(TA* TA);
      
};

#endif /* TAGlobalState_hpp */
