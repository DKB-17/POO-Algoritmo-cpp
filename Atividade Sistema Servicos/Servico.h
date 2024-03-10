#include <iostream>

using namespace std;

class Servico{
private:
    int id;
    int profissional;
    int tarefa;
    float horasTrab;
    float vlrHora;
    char status;
public:
    Servico(); //Construtor padrao
    Servico(int, int, int, float, float, char); //Construtor parametrizado

    //metodos geters
    int getId();
    int getProfissional();
    int getTarefa();
    float getHorasTrab();
    float getVlrHora();
    char getStatus();

    //metodos seters
    void setId(int);
    void setProfissional(int);
    void setTarefa(int);
    void setHorasTrab(float);
    void setVlrHora(float);
    void setStatus(char);

    void imprimir(); // impressao
    void leitura(); // leitura

};

Servico::Servico(){
    this->id = 0;
    this->profissional = 0;
    this->tarefa = 0;
    this->horasTrab = 0.0;
    this->vlrHora = 0.0;
    this->status = 'F';
}

Servico::Servico(int id, int profissional, int tarefa, float horasTrab, float vlrHora , char status){
    /*
    this->id = id;
    this->profissional = profissional;
    this->tarefa = tarefa;
    this->horasTrab = horasTrab;
    this->vlrHora = vlrHora;
    this->status = status;
    */

    setId(id);
    setProfissional(profissional);
    setTarefa(tarefa);
    setHorasTrab(horasTrab);
    setVlrHora(vlrHora);
    setStatus(status);
}

int Servico::getId(){
    return this->id;
}

int Servico::getProfissional(){
    return this->profissional;
}

int Servico::getTarefa(){
    return this->tarefa;
}

float Servico::getHorasTrab(){
    return this->horasTrab;
}

float Servico::getVlrHora(){
    return this->vlrHora;
}

char Servico::getStatus(){
    return this->status;
}

void Servico::setId(int id){
    while(id <= 0){
        cout << "Id invalido \n Digite outro id:";
        cin >> id;
    };
    this->id = id;
}

void Servico::setProfissional(int profissional){\
    while(profissional <= 0){
        cout << "Profissional invalido \n Digite outro numero:";
        cin >> profissional;
    };
    this->profissional = profissional;
}

void Servico::setTarefa(int tarefa){
    while(tarefa <= 0){
        cout << "Tarefa invalido \n Digite outro numero:";
        cin >> tarefa;
    };
    this->tarefa = tarefa;
}
void Servico::setHorasTrab(float horasTrab){
    while(horasTrab < 0){
        cout << "Horas Trabalhadas invalida \n Digite outro numero:";
        cin >> horasTrab;
    };
    this->horasTrab = horasTrab;
}
void Servico::setVlrHora(float vlrHora){
    while(vlrHora < 0){
        cout << "Valor por Hora invalida \n Digite outro valor:";
        cin >> vlrHora;
    };
    this->vlrHora = vlrHora;
}
void Servico::setStatus(char status){
    while(!status){
        cout << "Status invalido \n Digite outro status:";
        cin >> status;
    };
    this->status = status;
}

void Servico::imprimir(){
    cout << "Imprimindo Servico" << endl;
    cout << "Id: " << getId() << endl;
    cout << "Profissional: " << getProfissional() << endl;
    cout << "Tarefa: " << getTarefa() << endl;
    cout << "Horas trabalhada: " << getHorasTrab() << endl;
    cout << "Valor por Hora: " << getVlrHora() << endl;
    cout << "Status: " << getStatus() << endl;
}

void Servico::leitura(){
    int id, profissional, tarefa;
    float horasTrab, vlrHora;
    char status;

    cout << "Lendo Servico" << endl;
    cout << "Id: ";
    cin >> id;
    setId(id);
    cout << "Profissional: ";
    cin >> profissional;
    setProfissional(profissional);
    cout << "Tarefa: ";
    cin >> tarefa;
    setTarefa(tarefa);
    cout << "Horas trabalhada: ";
    cin >> horasTrab;
    setHorasTrab(horasTrab);
    cout << "Valor por hora: ";
    cin >> vlrHora;
    setVlrHora(vlrHora);
    cout << "Status: ";
    cin >> status;
    setStatus(status);
}

