#include <iostream>
#include <string>
#include "Person.h"
#include "Instructor.h"

//constructor
Instructor::Instructor() {}; //Default
Instructor::Instructor(std::string person_name, std::string department) //with parameter
    : Person(person_name), department(department) {
       //the constructor from class Person is called to initialise person_name
    } 

//Getter
std::string Instructor::get_Department() const {
    return department;
}

//Setter
void Instructor::set_Department(std::string department) {
    this->department = department;
}
