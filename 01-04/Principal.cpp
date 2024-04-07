//Principal.cpp

#include<iostream>

using namespace std;

#ifndef IFIGURA_H
    #include "IFiguras.h"
#endif

#ifndef QUADRADO_H
    #include "Quadrado.h"
#endif // QUADRADO_H

#ifndef RETANGULO_H
    #include "Retangulo.h"
#endif // RETANGULO_H

#ifndef CIRCULO_H
    #include "Circulo.h"
#endif // CIRCULO_H

int main(){

    Quadrado q1(5);

    cout << "Tamanho do quadrado: " << q1.getTamanho() << endl;
    cout << "Area: " << q1.area() << endl;
    cout << "Perimetro: " << q1.perimetro() << endl;

    cout << endl;

    Retangulo r1(4,5);
    cout << "Base do retangulo: " << r1.getBase() << endl;
    cout << "Altura do retangulo: " << r1.getAltura() << endl;
    cout << "Area: " << r1.area() << endl;
    cout << "Perimetro: " << r1.perimetro() << endl;

    cout << endl;

    Circulo c1(5);
    cout << "Raip do circulo: " << c1.getRaio() << endl;
    cout << "Area: " << c1.area() << endl;
    cout << "Perimetro: " << c1.perimetro() << endl;


    return 0;
}
