#include <iostream>
#include <string>
#include <vector>
#include "student.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;
    vector<Student>::iterator it = studentList.begin();
    string sname;
    int ika=0;
    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            cout<<"Valinta 0"<<endl;
            cout<<"Give student name: "<<endl;
            cin>>sname;
            cout<<"Give student age: "<<endl;
            cin>>ika;

            studentList.emplace_back(sname,ika);
            cout<<"Lisattiin"<<" "<<sname<<" "<<ika<<endl;
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout<<"Valinta 1"<<endl;
            cout<<"Tulostetaan lista"<<endl;
            for(auto &s: studentList){
                s.printStudentinfo();
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout<<"Valinta 2"<<endl;
            cout<<"Jarjestetaan aakkosjarjestykseen"<<endl;
            sort(studentList.begin(),studentList.end(),[](Student &a,Student &b){
                return a.getName()<b.getName();
            });
            for(auto &s: studentList){
                s.printStudentinfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout<<"Valinta 3"<<endl;
            cout<<"Jarjestetaan ikajarjestykseen"<<endl;
            sort(studentList.begin(),studentList.end(),[](Student &a,Student &b){
                return a.getAge()<b.getAge();
            });
            for(auto &s: studentList){
                s.printStudentinfo();
            }
            break;

        case 4:
            cout<<"Valinta 4"<<endl;
            // Kysy käyttäjältä opiskelijan nimi
            cout<<"Give students name: "<<endl;
            cin>>sname;
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            it=find_if(studentList.begin(),studentList.end(),[sname](const Student &a){
                //vertaillaan onko opiskelijan nimi sama kuin sname
                return a.getName()==sname;

            });
            if(it != studentList.end()){
                it->printStudentinfo();
            }

            else{
                cout << sname<<" "<< "ei ollut listassa!" << endl;
            }
            break;

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
    }
} while(selection < 5);

return 0;
}
