#include "italianchef.h"
#include <iostream>

using namespace std;

italianchef::italianchef(string name) : Chef(name)
{
    cout << "ItalianChef contructori" << endl;
}

italianchef::~italianchef()
{
    cout << "Italianchef destructori" << endl;
}

bool italianchef::askSecret(string pass, int f, int w)
{
    if(pass==password){
        cout << "salasana oikein" << endl;

        return makepizza(f,w);
    }

else {
    cout << "Vaara salasana" << endl;
    return false;
}
}

int italianchef::makepizza(int f, int w)
{
    int pizzamaara = 0;
    while(f>=5 && w>=5) {
        f-=5;
        w-=5;
        pizzamaara++;
    }

    cout<<chefName<<" Teki "<<pizzamaara<<" pizzaa "<<endl;
    flour = f;
    water = w;

    return pizzamaara > 0;
}
