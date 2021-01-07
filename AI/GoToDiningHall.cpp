//
//  GoToDiningHall.cpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#include "GoToDiningHall.hpp"
#include "Student.hpp"
#include <iostream>
#include "GoToClass.hpp"

GoToDiningHall* GoToDiningHall::instance = nullptr;

GoToDiningHall* GoToDiningHall::getInstance() {
    if (!instance) {
        instance = new GoToDiningHall();
    }
    return instance;
}

void GoToDiningHall::Enter(Student* student)
{
    if (student->getLocation() != DINING_HALL)
    {
        std::cout << "\n"
             << student->getName() << ": "
             << "Walking to the Dining Hall";
        student->changeLocation(DINING_HALL);
    }
}

void GoToDiningHall::Execute(Student* student)
{

   std::cout << "\n"
             << student->getName() << ": "
             << "Eating Some Food";
    student->resetHunger();
    student->machine.revertState();
}

void GoToDiningHall::Exit(Student* student){
std::cout << "\n"
             << student->getName() << ": "
             << "Full now";
    
}
