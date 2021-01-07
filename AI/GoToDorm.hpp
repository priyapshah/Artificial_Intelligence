//
//  GoToDorm.hpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#ifndef GoToDorm_hpp
#define GoToDorm_hpp

#include <stdio.h>
#include "State.hpp"
#include "Student.hpp"

class GoToDorm : public State<Student> {
    private:
    GoToDorm(){}
    
    static GoToDorm* instance;

    public:
    static GoToDorm* getInstance();

    virtual void Enter(Student* student);

    virtual void Execute(Student* student);

    virtual void Exit(Student* student);
      
};

#endif /* GoToDorm_hpp */
