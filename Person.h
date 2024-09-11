#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
    protected:
    std::string person_name;

    public:
    Person(); //Default constructor
    Person(std::string person_name); //constructor with parameter

    //Getter
    std::string get_PersonName() const;
    //setter
    void set_PersonName(std::string name);
};

#endif //PERSON_H