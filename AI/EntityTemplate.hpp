//
//  EntityTemplate.hpp
//  AI
//
//  Created by Priya Shah on 12/24/20.
//

#ifndef EntityTemplate_hpp
#define EntityTemplate_hpp

#include <stdio.h>
class EntityTemplate {
    private:

    // ID for each entity
    int ID;
    
    static int NextID;
    
protected:
    void SetID(int val){
        ID = val;
    }

    public:
    EntityTemplate(){}
    
    EntityTemplate(int id) {
        SetID(id);
    }

    ~EntityTemplate(){};

    void Update(){}

    int getID() const{
        return ID;
        }
};

#endif /* EntityTemplate_hpp */
