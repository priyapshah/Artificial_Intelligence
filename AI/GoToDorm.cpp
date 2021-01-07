//
//  GoToDorm.cpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#include "GoToDorm.hpp"
#include "Student.hpp"
#include <iostream>
#include "GoToClass.hpp"
#include "GoToDiningHall.hpp"

GoToDorm* GoToDorm::instance = nullptr;

GoToDorm* GoToDorm::getInstance() {
    if (!instance) {
        instance = new GoToDorm();
    }
    return instance;
}

void GoToDorm::Enter(Student* student)
{
    if (student->getLocation() != DORM)
    {
        std::cout << "\n"
             << student->getName() << ": "
             << "Walking to the Dorm";
        student->changeLocation(DORM);
    }
}

void GoToDorm::Execute(Student* student)
{
   student->increaseFatigue();

   std::cout << "\n"
             << student->getName() << ": "
             << "Working on Homework";
    student->decreaseAssignment();
    
   
    if (student->doneAssignment()) {
        std::cout << std::endl <<
        student->getName() << ": "
        << "Done for now";
        
        //Go to Party
    }
    
}

void GoToDorm::Exit(Student* student){
std::cout << "\n"
             << student->getName() << ": "
             << "Done working for now";
}
