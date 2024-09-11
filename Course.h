#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Grade.h"

class Course {
    private:
    std::string course_name;
    int course_id;
    Person** persons;

    public:
    Course(); //Default constructor
    Course(std::string course_name, int course_id);
    ~Course(); //Destructor

    //Getter for the name and id of the course
    std::string get_CourseName() const;
    int get_CourseId() const;
    //Setter
    void set_CourseName(std::string course_name);
    void set_CourseId(int course_id);

    //Add person
    void addPerson(Person* p, int numPerson);


};
#endif //COURSE_H