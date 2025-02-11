#include "students.h"

Student::Student(std::string name, int age) : name(name), age(age) {}

std::string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}

void Student::print() const {
    std::cout << "Nimi: " << name << ", Ika: " << age << std::endl;
}

static bool JarjestaN(const Student &a, const Student &b)
{
    return a.getName() > b.getName();
}

static bool JarjestaI(const Student &a, const Student &b)
{
    return a.getAge() > b.getAge();
}
