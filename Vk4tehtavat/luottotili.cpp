
#include "luottotili.h"
#include <iostream>




Luottotili::Luottotili(string o,double raja) : Pankkitili(o)
{
    omistaja = o;
    luottoraja = -raja;
    cout<<"Luottotili luotu.\n"<<omistaja<<endl;
    cout<<"Luottoraja on.\n"<<luottoraja<<endl;
}

bool Luottotili :: deposit(double d)
{
    if (d <= 0)
    {
        cout << "Summa ei voi olla negatiivinen.\n"<<endl;
        return false;
    }
    saldo += d;
    cout << "Luottotilille maksettu: "<<d<<endl;
    return true;
}

bool Luottotili :: withdraw(double w)
{
    if (w <= 0)
    {
        cout << "Summa ei voi olla negatiivinen tai nolla.\n";
        return false;
    }
    if (saldo - w < luottoraja) //
    {
        cout << "Luottoraja ylittyy\n";
        return false;
    }
    saldo -= w;
    cout << "Luottoa otettu: " << w << endl;
    return true;
    }

