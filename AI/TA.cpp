//
//  TA.cpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#include "TA.hpp"
#include <string>
#include "GoToClass.hpp"
#include <iostream>
#include "AnswerPiazza.hpp"
#include "TAGlobalState.hpp"

using namespace std;

TA::TA(int id, string name) : machine(this)
{
    SetID(id);
    machine.setCurrState(AnswerPiazza::getInstance());
    this->name = name;
    machine.setGlobalState(TAGlobalState::getInstance());
}

void TA::Update()
{
    
    machine.Update();
    
    hunger += 1;
    
}

string TA::getName()
{
    return name;
}


void TA::increaseFatigue(){
    fatigue++;
}


bool TA::hungry(){
    return hunger >= 5;
}

void TA::resetHunger(){
    hunger = -1;
}
