#include <iostream>
#include <string>

#include "Person.h"
#include "Student.h"

//Constructor
Student::Student() {}; //Default
Student::Student(int student_id, std::string student_name) : student_id(student_id), student_name(student_name) {} //with parameter

//Getter
int Student::get_StudentId() const {
    return student_id;
}
std::string Student::get_StudentName() const {
    return student_name;
}

//Setter
void Student::set_StudentId(int student_id) {
    this->student_id = student_id;
}
void Student::set_StudentName(std::string student_name) {
    this->student_name = student_name;
}