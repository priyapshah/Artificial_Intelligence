//
//  HoldOfficeHours.hpp
//  AI
//
//  Created by Priya Shah on 12/26/20.
//

#ifndef HoldOfficeHours_hpp
#define HoldOfficeHours_hpp

#include <stdio.h>
#include "State.hpp"
#include "TA.hpp"

class HoldOfficeHours : public State<TA> {
    private:
    HoldOfficeHours(){}
    
    static HoldOfficeHours* instance;

    public:
    static HoldOfficeHours* getInstance();

    virtual void Enter(TA* TA);

    virtual void Execute(TA* TA);

    virtual void Exit(TA* TA);
      
};


#endif /* HoldOfficeHours_hpp */
