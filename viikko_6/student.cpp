#include "student.h"

Student::Student(string n,int a)
{
    Name=n;
    Age=a;
}
string Student::getName() const
{
    return Name;
}
void Student::setName(const string &newName){
    Name=newName;
}
int Student::getAge() const
{
    return Age;
}
void Student::setAge(int newAge){
    Age=newAge;
}
void Student::printStudentinfo(){
    cout<<"Name: "<<Name<<" , "<<"Age: "<<Age<<endl;
}
