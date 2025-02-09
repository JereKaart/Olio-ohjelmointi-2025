#include "seuraaja.h"
#include <iostream>

Seuraaja::Seuraaja(string n)
{
    nimi = nimi;
    cout << "Luodaan seuraaja. "<<nimi<<endl;
}

string Seuraaja::getNimi() const
{
    return nimi;
}

void Seuraaja::paivitys(string s)
{
    cout << "Seuraaja" << nimi << "viesti on = " << s << endl;
}
