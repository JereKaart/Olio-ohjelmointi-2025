#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef olio("Mario");

    italianchef olio2("Luigi");

    cout << "Mario valmisti " << olio.makeSalad(20) << " annosta salaattia " << endl;
    cout << "Mario valmisti " << olio.makeSoup(10) << " annosta keittoa" << endl;

    cout << olio2.askSecret("pizza", 20, 20) << endl;
    return 0;
}
