#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "Person.h"

class Student: public Person {
    protected:
    int student_id;
    std::string student_name;

    public:
    Student(); //Default constructor
    Student(int student_id, std::string student_name); //constructor with parameter

    //Getter
    int get_StudentId() const;
    std::string get_StudentName() const;
    //Setter
    void set_StudentId(int student_id);
    void set_StudentName(std::string student_name);
};


#endif //STUDENT_H