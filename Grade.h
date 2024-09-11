#ifndef GRADE_H
#define GRADE_H

#include <iostream>
#include <string>

class Grade {
    private:
    int student_id;
    std::string assignment;
    int value;

    public:
    Grade(); //Default constructor
    Grade(int student_id, std::string assignment, int value); //constructor with parameter

    //Getter
    int get_StudentId() const;
    std::string get_Assigenment() const;
    int get_Value() const;

    //Setter
    void set_StudentId(int student_Id);
    void set_Assignment(std::string student_name);
    void set_Value(int value);
};


#endif //GRADE_H