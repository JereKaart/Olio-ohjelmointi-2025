#ifndef CHEF_H
#define CHEF_H
#include <iostream>
#include <string>

using namespace std;

class Chef
{
public:
    Chef(string name);
    ~Chef();
    string getname();
    int makeSalad(int n);
    int makeSoup(int m);

protected:
    string chefName;
};

#endif // CHEF_H
