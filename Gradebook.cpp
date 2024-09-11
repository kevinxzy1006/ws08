#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Grade.h"
#include "Gradebook.h"

void Gradebook::addGrade(int student_id, int course_id, std::string assignment, int value) {
    grades.push_back(Grade(student_id, assignment, value));
}