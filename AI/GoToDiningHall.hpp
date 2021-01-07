//
//  GoToDiningHall.hpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#ifndef GoToDiningHall_hpp
#define GoToDiningHall_hpp

#include <stdio.h>
#include "State.hpp"
#include "Student.hpp"

class GoToDiningHall : public State<Student> {
    private:
    GoToDiningHall(){}
    
    static GoToDiningHall* instance;

    public:
    static GoToDiningHall* getInstance();

    virtual void Enter(Student* student);

    virtual void Execute(Student* student);

    virtual void Exit(Student* student);
      
};

#endif /* GoToDiningHall_hpp */
