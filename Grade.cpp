#include <iostream>
#include <string>
#include "Grade.h"

//constructor
Grade::Grade() {}; //Default
Grade::Grade(int student_id, std::string assignment, int value) : student_id(student_id), assignment(assignment), value(0) {} //with parameter

//Getter
int Grade::get_StudentId() const {
    return student_id;
}
std::string Grade::get_Assigenment() const {
    return assignment;
}
int Grade::get_Value() const {
    return value;
}

//Setter
void Grade::set_StudentId(int student_id) {
    this->student_id = student_id;
}
void Grade::set_Assignment(std::string assignement) {
    this->assignment = assignement;
}
void Grade::set_Value(int value) {
    this->value = value;
}