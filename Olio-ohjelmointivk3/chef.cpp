#include "chef.h"

Chef::Chef(string name) {
    cout<<"Constructor kokin nimi:"<<name<<endl;
}

Chef::~Chef() {
    cout<<"Destructor luotu"<<endl;
}

string Chef::getname(){
    cout << chefName << endl;
    return chefName;
}

int Chef::makeSalad(int n){
    int annokset = n/5;

    cout << "Salaatti annoksia valmiina ";

    return annokset;
}

int Chef::makeSoup(int m){
    int annokset = m/5;

    cout << "Keitto annoksia valmiina ";
    return annokset;
}
