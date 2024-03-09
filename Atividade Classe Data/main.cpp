#include <iostream>
#include "Data.h"

int main(){

    Data data1; //instanciacao do objeto
    Data data2(10,2,2004);

    data1.ler(); //invocacao do metodo ler do objeto
    data1.imprimir();
    data2.imprimir();

    cout << "Teste setDia() e getDia() na data 1 acrecentando um dia" << endl;
    data1.setDia(data1.getDia() + 1);
    data1.imprimir();

    cout << "Teste setMes() e getMes() na data 1 acrecentando um dia" << endl;
    data1.setMes(data1.getMes() + 1);
    data1.imprimir();

    cout << "Teste setAno() e getAno() na data 1 acrecentando um dia" << endl;
    data1.setAno(data1.getAno() + 1);
    data1.imprimir();

    return 0;
}
