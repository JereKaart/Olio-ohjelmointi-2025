#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"
using namespace std;

int main()
{
    Seuraaja *A = new Seuraaja("Joni");
    Seuraaja *B = new Seuraaja ("Jere");
    Seuraaja *C = new Seuraaja ("Valtteri");

    Notifikaattori *n = new Notifikaattori();

    n->lisaa(A);
    n->lisaa(B);
    n->lisaa(C);
    n->tulosta();

    n->postita("Ensimmainen viesti");
    n->poista(B);
    n->postita("Toinen viesti");

    delete A;
    delete B;
    delete C;
    delete n;
    return 0;

}
