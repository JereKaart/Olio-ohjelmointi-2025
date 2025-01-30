#include "pankkitili.h"
#include <iostream>
using namespace std;

Pankkitili::Pankkitili(string o) : omistaja(o), saldo(0.0){}


double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double d)
{
    if (d <= 0)
    {
        cout << "Summa ei voi olla negatiivinen.\n" << endl;
        return false;
    }
    saldo = saldo + d;
    cout<<"Tilille lisatty "<< d << "e. Nykyinen saldo: "<<saldo<<"e.\n"<<endl;
    return true;
}

bool Pankkitili::withdraw(double w)
{
    if (w<=0)
    {
        cout<<"Noston summa ei voi olla negatiivinen.\n"<<endl;
        return false;
    }
    if (w > saldo)
    {
        cout<<"Saldo liian pieni. Tililla on vain: "<<saldo<<" e.\n"<<endl;
        return false;
    }
    saldo -= w;
    cout << "Tililta otettu: " << w << "e. Jaljella oleva saldo: " << saldo <<"e.\n"<< endl;
    return true;

}

