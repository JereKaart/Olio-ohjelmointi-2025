#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student(std::string name, int age);
    std::string getName() const;
    int getAge() const;
    void print() const;
    static bool JarjestaN(const Student &a, const Student &b);
    static bool JarjestaI(const Student &a, const Student &b);
};

#endif
