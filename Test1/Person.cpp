//
//  Person.cpp
//  Test1
//
//  Created by Elmar Jafarli on 05.05.23.
//

#include "Person.hpp"
#include <string>

int Person::person_count = 8;
Person::Person(const std::string& name_param, int age_param) : full_name{name_param}, age{age_param} {
    ++person_count;
}

