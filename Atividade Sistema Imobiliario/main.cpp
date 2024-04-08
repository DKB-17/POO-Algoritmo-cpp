#include <iostream>
#include <conio.h>
using namespace std;

#ifndef IMOVEL_H
    #include "Imovel.h":
#endif // IMOVEL_H

#ifndef TIPOIMOVEL_H
    #include "TipoImovel.h"
#endif // TIPOIMOVEL_H

#ifndef LOCADOR_H
    #include "Locador.h"
#endif // LOCADOR_H

#ifndef IMOVEL_H
    #include "Imovel.h"
#endif // IMOVEL_H

#ifndef LOCACAO_H
    #include "Locacao.h"
#endif // LOCACAO_H

int main(){

    TipoImovel t1(12,"predio");
    Imovel im1(12,"grande","jeba","cano",false,t1);

    Profissao p1(12,"T.I");
    Locador loc1(12, "Diego", "Assis", "Sao Paulo", 19, 1200.1, p1);

    Locacao lc1(12, im1, loc1, "12/34/56", 500.5);

    lc1.imprimir();
    getch();
    lc1.aumento();
    system("cls");
    lc1.imprimir();
    getch();
    lc1.aumento(0.5);
    system("cls");
    lc1.imprimir();
    getch();

    Locacao lc2;
    lc2.leitura();
    lc2.imprimir();

}
