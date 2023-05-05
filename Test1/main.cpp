//
//  main.cpp
//  Test1
//
//  Created by Elmar Jafarli on 05.05.23.
//

#include <iostream>
#include "Person.hpp"
#include <string>
#include "OtherPerson.hpp"

int main() {
    // insert code here...
        
   Person p1 ("Elmar Jafarli", 27);

   p1.print_info();

    OtherPerson p2 ("Elmar465@gmail.com", 1);
    
    p2.print();
    
    ThirdPerson p3 ("male", 475124561);
    
    p3.getData();
    return 0;
}
