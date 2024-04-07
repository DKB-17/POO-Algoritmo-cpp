// carro.cpp

#include <iostream>
using namespace std;
#include "Carro.h" // Usar aspas sua mula a proxima vez para de ser burro e usa aspa para saber que esta pegando do seu pc

int main()
{
    Carro car1; // instanciacao do objeto car1 do tipo Carro

    car1.ler(); //invocacao do metodo ler, para o objeto car1
    car1.imprimir();
    car1.desconto();

    Carro car2; // instanciacao do objeto car2 do tipo Carro
    car2.ler(); //invocacao do metodo ler, para o objeto car2
    car2.imprimir();

    return 0;
}
