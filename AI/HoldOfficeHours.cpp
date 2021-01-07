//
//  HoldOfficeHours.cpp
//  AI
//
//  Created by Priya Shah on 12/26/20.
//

#include "HoldOfficeHours.hpp"
#include "TA.hpp"
#include "AnswerPiazza.hpp"
#include <iostream>

HoldOfficeHours* HoldOfficeHours::instance = nullptr;

HoldOfficeHours* HoldOfficeHours::getInstance() {
    if (!instance) {
        instance = new HoldOfficeHours();
    }
    return instance;
}

void HoldOfficeHours::Enter(TA* TA)
{
    std::cout << "\n"
              << TA->getName() << ": "
              << "Starting Office Hours";
}

void HoldOfficeHours::Execute(TA* TA)
{

   std::cout << "\n"
             << TA->getName() << ": "
             << "Helping a student";
    
    TA->machine.changeState(AnswerPiazza::getInstance());
}

void HoldOfficeHours::Exit(TA* TA){
std::cout << "\n"
             << TA->getName() << ": "
             << "I think they really understood";
    
}
