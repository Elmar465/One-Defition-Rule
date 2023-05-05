//
//  Person.hpp
//  Test1
//
//  Created by Elmar Jafarli on 05.05.23.
//

#ifndef Person_hpp
#define Person_hpp
#include <string>
#include <iostream>
#include <stdio.h>



class Person {
    
    public :
    Person(const std::string& name_param, int age_param);
    
    void print_info()const{
        std::cout << "name : " << full_name << ", age : " << age << std::endl;
    }
    
    private :
    std::string full_name;
    int age;
    
    public :
    static int person_count;
};



#endif /* Person_hpp */



