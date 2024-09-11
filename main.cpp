#include <iostream>
#include "University.h"
#include "Course.h"
#include "Student.h"
#include "Gradebook.h"

int main() {
    //Create a university
    University myuni("My university", "Somewhere");

    //Add a course to this university 
    myuni.addCourse("Programming", 101);

    // Add a student to the course
    Student student("Tom", 1001);
    Course* course = myuni.get_course(101); // Assume University has a method to get a course by ID
    course->addPerson(&student);

    // Add grades for the student
    Gradebook gradebook;
    gradebook.addGrade(student.get_StudentId(), "Assignment 1", 85);
    gradebook.addGrade(student.get_StudentId(), "Assignment 2", 90);

    return 0;
}