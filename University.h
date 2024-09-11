#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <iostream>
#include <string>
#include "Course.h"

class University {
    private:
    std::string uni_name;
    std::string uni_loc;
    Course* courses; //Array of courses
    int numCourses; //number of courses

    public:
    University(); //Default constructor
    University(std::string name, std::string location); //constructor with parameter
    ~University(); //Destructor

    //Getter
    std::string get_UniName() const;
    std::string get_UniLoc() const;
    //Setter
    void set_UniName(std::string uni_name);
    void set_UniLoc(std::string uni_loc);

    //Add Course
    void addCourse(std::string course_name, int course_id);

};

#endif;