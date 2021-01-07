//
//  TA.hpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#ifndef TA_hpp
#define TA_hpp

#include <stdio.h>
#include "EntityTemplate.hpp"
#include "State.hpp"
#include <string>
#include "StateMachine.hpp"

class TA : public EntityTemplate {
    private :

    std::string name;

    int hunger;

    int fatigue;

    public:

    TA(int ID, std::string name);
    
    StateMachine<TA> machine;

    void Update();

    std::string getName();

    void increaseFatigue();

    bool hungry();
    
    void resetHunger();
 
    ~TA(){}
    
   
};


#endif /* TA_hpp */
