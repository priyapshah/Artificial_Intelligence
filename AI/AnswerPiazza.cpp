//
//  AnswerPiazza.cpp
//  AI
//
//  Created by Priya Shah on 12/26/20.
//

#include "AnswerPiazza.hpp"
#include "TA.hpp"
#include "HoldOfficeHours.hpp"
#include <iostream>

AnswerPiazza* AnswerPiazza::instance = nullptr;

AnswerPiazza* AnswerPiazza::getInstance() {
    if (!instance) {
        instance = new AnswerPiazza();
    }
    return instance;
}

void AnswerPiazza::Enter(TA* TA)
{
    std::cout << "\n"
              << TA->getName() << ": "
              << "Need to Check Piazza";
}

void AnswerPiazza::Execute(TA* TA)
{

   std::cout << "\n"
             << TA->getName() << ": "
             << "Answering Piazza Posts";
    
    numPostsAnswered++;
    
    if (numPostsAnswered % 5 == 0) {
        TA->machine.changeState(HoldOfficeHours::getInstance());
    }
}

void AnswerPiazza::Exit(TA* TA){
std::cout << "\n"
             << TA->getName() << ": "
             << "Someone needs help";
    
}
