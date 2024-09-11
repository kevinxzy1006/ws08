#include <iostream>
#include <string>
#include "Course.h"
#include "University.h"

//Constructor
University::University() {};//Default
University::University(std::string uni_name, std::string uni_loc) : uni_name(uni_name), uni_loc(uni_loc) {} //with parameter
Course* courses = new Course; //set up the new course
int numCourses = 0; //Initialise the number of the course

//Getter
std::string University::get_UniName() const {
    return uni_name;
}
std::string University::get_UniLoc() const {
    return uni_loc;
}

//Setter
void University::set_UniName(std::string uni_name) {
    this->uni_name = uni_name;
}
void University::set_UniLoc(std::string uni_loc) {
    this->uni_loc = uni_loc;
}

University::~University() {
    delete[] courses;
}

//Add courses
void addCourse(std::string course_name, int course_id) {
    courses[numCourses++] = Course(course_name, course_id);
}