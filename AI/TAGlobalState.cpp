//
//  TAGlobalState.cpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#include "TAGlobalState.hpp"
#include "TA.hpp"
#include <iostream>
#include "GoToDiningHall.hpp"
#include "GoToDorm.hpp"

TAGlobalState* TAGlobalState::instance = nullptr;

TAGlobalState* TAGlobalState::getInstance() {
    if (!instance) {
        instance = new TAGlobalState();
    }
    return instance;
}

void TAGlobalState::Enter(TA* TA)
{
    
}

void TAGlobalState::Execute(TA* TA)
{
    if (TA->hungry()) {
       // TA->machine.changeState(::getInstance());
    }
   
}

void TAGlobalState::Exit(TA* TA){

}
