#include <iostream>
#include <vector>
#include <algorithm>
#include "students.h"

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;

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
        {
            string name;
            int age;
            cout << "Anna opiskelijan nimi: ";
            cin >> name;
            cout << "Anna opiskelijan ika: ";
            cin >> age;
            Student newStudent(name, age);
            studentList.emplace_back(Student(newStudent));
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            break;
        }
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "Studentlist: " << endl;
            for(auto& Student:studentList)
            {
                Student.print();
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort (studentList.begin(), studentList.end(),[](const Student& a,const Student& b) {return a.getName() < b.getName();});
            cout << "Opiskelijat nimen mukaan: " << endl;
            for(const auto &Student : studentList)
            {
                Student.print();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort (studentList.begin(), studentList.end(),[](const Student& a,const Student& b) {return a.getAge() < b.getAge();});
            cout << "Opiskelijat ian mukaan: " << endl;
            for(const auto &Student : studentList)
            {
                Student.print();
            }
            break;
        case 4:
        {
            string etsiOpiskelija;
            cout << "Anna opiskelijan nimi: " << endl;
            cin >> etsiOpiskelija;
            auto it = find_if(studentList.begin(), studentList.end(), [etsiOpiskelija](const Student &s)
            {
                return s.getName() == etsiOpiskelija;
            });

            if(it != studentList.end())
            {
                cout << "Opiskelija loytyi: " << endl;
                cout << "Nimi: " << it->getName() << " Ika: " << it->getAge() << endl;
                it->getName();
            }
            else
            {
                cout << "Opiskelijaa ei loytynyt. " << endl;
            }
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            break;
        }

    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
}while(selection < 5);

return 0;
}
