//
//  GoToClass.cpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#include "GoToClass.hpp"
#include "Student.hpp"
#include <iostream>
#include "GoToDiningHall.hpp"
#include "GoToDorm.hpp"

GoToClass* GoToClass::instance = nullptr;

GoToClass* GoToClass::getInstance() {
    if (!instance) {
        instance = new GoToClass();
    }
    return instance;
}

void GoToClass::Enter(Student* student)
{
    if (student->getLocation() != CLASS)
    {
        std::cout << "\n"
             << student->getName() << ": "
             << "Walking to class";
        student->changeLocation(CLASS);
    }
}

void GoToClass::Execute(Student* student)
{
   student->addAssignment();

   std::cout << "\n"
             << student->getName() << ": "
             << "Learning something new";

    /*if (student->classFinished()){
        student->ChangeState(GoToParty::Instance());
    } */
    
    if (student->stressed()) {
        student->machine.changeState(GoToDorm::getInstance());
    }
}

void GoToClass::Exit(Student* student){
std::cout << "\n"
             << student->getName() << ": "
             << "Just learned a lot. Need a break.";
}
