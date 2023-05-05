//
//  OtherPerson.hpp
//  Test1
//
//  Created by Elmar Jafarli on 05.05.23.
//

#ifndef OtherPerson_hpp
#define OtherPerson_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "OtherPerson.hpp"

class OtherPerson {
    
    public :
    OtherPerson(const std::string& email_param, int id_param);
    
    void print() const {
        std::cout << "Your id is : " << id << " , and your email is : " << email << std::endl;
    }
    
    private :
    int id;
    std::string email;
    
    public :
    static int person_count2;
};


class ThirdPerson {
    public :
    ThirdPerson(const std::string& gender_param, int telephone_param);
    
    void getData(){
        std::cout << "Your gender is : " << gender << " ,  your telephone number is : " << number << std::endl;
    }
    
    std::string gender;
    int number;
    
};
#endif /* OtherPerson_hpp */
