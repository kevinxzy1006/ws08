#include <iostream>
#include <string>
#include "Course.h"
#include "Person.h"
#include "Student.h"
#include "Grade.h"

//Constructor
Course::Course() {}; //Default
Course::Course(std::string course_name, int course_id) : course_name(course_name), course_id(course_id) {} //with parameter

//Destructor
Course::~Course() {
    delete[] persons;
}

//Getter
std::string Course::get_CourseName() const {
    return course_name;
}
int Course::get_CourseId() const {
    return course_id;
}
//Setter
void Course::set_CourseName(std::string course_name) {
    this->course_name = course_name;
}
void Course::set_CourseId(int course_id) {
    this->course_id = course_id;
}

//Add person to the course
void Course::addPerson(Person* p, int numPerson) {
    persons[numPerson++] = p;
}
