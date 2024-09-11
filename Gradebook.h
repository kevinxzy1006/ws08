#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <iostream>
#include <string>
#include <vector>
#include "Person.h"
#include "Student.h"
#include "Grade.h"

class Gradebook {
    private:
    std::vector<Grade> grades;

    public:
    void addGrade(int student_id, int course_id, std::string assignment, int value);
};
#endif //GRADEBOOK_H