#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>

using namespace std;

class Student
{
public:
    Student(string n,int a);
    void setAge(int newAge);
    void setName(const string &newName);
    string getName() const;
    int getAge() const;
    void printStudentinfo();
private:
    string Name;
    int Age;
};

#endif // STUDENT_H
