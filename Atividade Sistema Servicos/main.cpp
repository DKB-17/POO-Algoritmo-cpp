#include <iostream>
#include <conio.h>

using namespace std;

#include "Especialidade.h"
#include "Profissional.h"
#include "Servico.h"
#include "Tarefa.h"
#include "TipoTarefa.h"

int main(){

    Especialidade esp1;
    esp1.leitura();
    esp1.imprimir();

    getch();
    system("cls");

    TipoTarefa tp1;
    tp1.leitura();
    tp1.imprimir();

    getch();
    system("cls");

    Profissional prf1;
    prf1.leitura();
    prf1.imprimir();

    getch();
    system("cls");

    Tarefa tf1;
    tf1.leitura();
    tf1.imprimir();

    getch();
    system("cls");

    Servico ser1;
    ser1.leitura();
    ser1.imprimir();

    getch();
    system("cls");

    esp1.imprimir();
    tp1.imprimir();
    prf1.imprimir();
    tf1.imprimir();
    ser1.imprimir();
return 0;
}
