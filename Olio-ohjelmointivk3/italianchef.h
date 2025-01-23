#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"

using namespace std;

class italianchef : public Chef{

public:
    italianchef(string);
    ~italianchef();
    bool askSecret(string, int, int);

private:
    string password = "pizza";
    int flour;
    int water;
    int makepizza(int,int);

};

#endif // ITALIANCHEF_H
