//
//  OtherPerson.cpp
//  Test1
//
//  Created by Elmar Jafarli on 05.05.23.
//

#include "OtherPerson.hpp"
#include <string>

int OtherPerson::person_count2 =9;
OtherPerson::OtherPerson(const std::string& email_param, int id)
: email{email_param}, id{id}
{
    ++person_count2;
};


ThirdPerson::ThirdPerson(const std::string& gender_param, int telephone_param) : gender{gender_param}, number{telephone_param} {
    
}
