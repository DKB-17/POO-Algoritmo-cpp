#include <iostream>
using namespace std;
#include "conta.h"

int main(){
    Conta c1;
    c1.imprimir();

    Conta c2(15, "NuBank", 23434, 1000);
    c2.imprimir();

    c2.setBanco("BB");

    cout << "Depois do Set " << endl;
    c2.imprimir();

    Conta c3();


    return 0;
}
