#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    Pankkitili* tili1 = new Pankkitili("Jorma Olavi");
    tili1->deposit(100.0);
    tili1->withdraw(50.0);
    cout<<"Tilin saldo: "<<tili1->getBalance()<<"e.\n"<<endl;
    delete tili1;

    Luottotili* tili2 = new Luottotili("Olavi Jorma", 1500);
    tili2->withdraw(400);
    cout<<"Luottotilin saldo: "<<tili2->getBalance()<<"e.\n"<<endl;
    delete tili2;

    Asiakas asiakas("Ismo Laitela",500);
    asiakas.showSaldo();
    cout<<"Talletetaan 200 kayttotilille.\n";
    asiakas.talletus(200);
    asiakas.showSaldo();

    cout<<"Nostetaan 50 kayttotililta.\n";
    asiakas.nosto(50);
    asiakas.showSaldo();

    cout<<"Otetaan 300 luottoa.\n";
    asiakas.luotonNosto(300);
    asiakas.showSaldo();

    cout<<"Maksetaan 150 luottotilille.\n";
    asiakas.luotonMaksu(150);
    asiakas.showSaldo();

    cout<<"Yritetaan nostaa yli luottorajan.\n";
    if (!asiakas.luotonNosto(600))
    {
        cout<<"Nosto epaonnistui.\n";
    }
    asiakas.showSaldo();

    Asiakas asiakas1("Hessu Hopo",1000);
    Asiakas asiakas2("Aku Ankka",500);

    asiakas1.talletus(500);
    asiakas1.showSaldo();
    asiakas2.showSaldo();


    if (asiakas1.tiliSiirto(200, asiakas2)) {
        cout << "Siirto onnistui!" << endl;
    } else {
        cout << "Siirto epaonnistui!" << endl;
    }


    asiakas1.showSaldo();
    asiakas2.showSaldo();


    if (asiakas1.tiliSiirto(400, asiakas2)) {
        cout << "Siirto onnistui!" << endl;
    } else {
        cout << "Siirto epaonnistui!" << endl;
    }


    return 0;
}
