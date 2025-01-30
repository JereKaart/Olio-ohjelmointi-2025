#include "asiakas.h"




Asiakas::Asiakas(string nimi,double h) : kayttotili(nimi), luottotili(nimi,h)
{
    this->nimi = nimi;
}

bool Asiakas::talletus(double summa)
{
    if (summa > 0)
    {
        return kayttotili.deposit(summa);
    }
    else
    {
        cout <<"Negatiivista summaa ei voi tallettaa.\n "<<endl;
        return false;
    }
}

bool Asiakas::nosto(double n)
{
    return kayttotili.withdraw(n);
}

void Asiakas::showSaldo()
{
    cout << "---------------------------\n";
    cout << "Asiakas: " << nimi << "\n"<<endl;
    cout<<"Pankkitilin saldo: "<<this->kayttotili.getBalance()<<"e\n"<<endl;

    cout<<"Luottotilin saldo: "<<this->luottotili.getBalance()<<"e\n"<<endl;

}

bool Asiakas::luotonMaksu(double m)
{
    return luottotili.deposit(m);
}

bool Asiakas::luotonNosto(double nosto)
{
    return luottotili.withdraw(nosto);
}
bool Asiakas::tiliSiirto(double summa, Asiakas& vastaanottaja)
{
    if (summa <= 0) {
        cout<<"Siirto epaonnistui: summa ei voi olla negatiivinen."<<endl;
        return false;
    }

    if (!kayttotili.withdraw(summa)) {
        cout << "Siirto epaonnistui: tililla ei ole tarpeeksi rahaa." << endl;
        return false;
    }


    if (!vastaanottaja.kayttotili.deposit(summa)) {
        cout << "Siirto epaonnistui: vastaanottajan pankkitili ei hyvaksy talletusta!" << endl;
        return false;
    }

    cout << "Siirto onnistui: " << summa << " euroa siirretty!" << endl;
    return true;
}


