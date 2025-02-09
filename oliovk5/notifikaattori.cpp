#include "notifikaattori.h"
#include "seuraaja.h"
#include <iostream>

Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja *lisatty)
{
    lisatty->next = seuraajat;
    seuraajat = lisatty;
    cout << "Lisatty seuraaja: " << lisatty->getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja *poistettu)
{
    Seuraaja *alku = seuraajat;
    while (alku->next != nullptr)
    {
        if (alku->next == poistettu)
        {
            alku->next = poistettu->next;
        }
        else
        {
            alku = alku->next;
        }
    }
    cout << "Poistettu seuraaja: "<<poistettu->getNimi()<<endl;

}

void Notifikaattori::tulosta()
{
    int seuraajatlkm;
    Seuraaja *alku = seuraajat;
    cout<<"Seuraajat: "<<endl;
    while(alku != nullptr)
    {
        cout<<alku->getNimi()<<endl;
        seuraajatlkm++;
        alku = alku->next;
    }
    cout<<"Seuraajien maara: "<<seuraajatlkm<<endl;
}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;
    while(alku != nullptr)
    {
        alku->paivitys(viesti);
        alku = alku->next;
    }
}
