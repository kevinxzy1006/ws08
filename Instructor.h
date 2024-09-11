#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include <string>
#include "Person.h"

class Instructor: public Person {
    private:
    std::string department;

    public:
    Instructor(); //Default constructor
    Instructor(std::string person_name, std::string department); //constructor with parameter

    //Getter
    std::string get_Department() const;
    //Setter
    void set_Department(std::string deparment);
};

#endif //INSTRUCTOR_H