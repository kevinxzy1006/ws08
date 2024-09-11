#include <iostream>
#include <string>
#include "person.h"

//constructor
Person::Person() {}; //Default
Person::Person(std::string person_name) : person_name(person_name) {} //with parameter

//Getter for the name
std::string Person::get_PersonName() const {
    return person_name;
}

//Setter for the name
void Person::set_PersonName(std::string person_name) {
    this->person_name = person_name;
}


