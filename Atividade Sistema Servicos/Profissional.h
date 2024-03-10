#include <iostream>

using namespace std;

class Profissional{
private:
    int id;
    string nome;
    string nascimento;
    int especialidade;
public:
    Profissional(); //Construtor padrao
    Profissional(int, string, string, int); //Construtor parametrizado

    //metodos geters
    int getId();
    string getNome();
    string getNascimento();
    int getEspecialidade();

    //metodos seters
    void setId(int);
    void setNome(string);
    void setNascimento(string);
    void setEspecialidade(int);

    void imprimir(); // impressao
    void leitura(); // leitura

};

Profissional::Profissional(){
    this->id = 0;
    this->nome = "";
    this->nascimento = "0/0/00";
    this->especialidade = 0;
}

Profissional::Profissional(int id, string nome, string nascimento, int especialidade){
    /*
    this->id = id;
    this->nome = nome;
    this->nascimento = nascimento;
    this->especialidade = especialidade;
    */

    setId(id);
    setNome(nome);
    setNascimento(nascimento);
    setEspecialidade(especialidade);

}

int Profissional::getId(){
    return this->id;
}

string Profissional::getNome(){
    return this->nome;
}

string Profissional::getNascimento(){
    return this->nascimento;
}

int Profissional::getEspecialidade(){
    return this->especialidade;
}

void Profissional::setId(int id){
    while(id <= 0){
        cout << "Id invalido \n Digite outro id:";
        cin >> id;
    };
    this->id = id;
}

void Profissional::setNome(string nome){\
    while(nome == ""){
        cout << "Nome invalido \n Digite outro nome:";
        fflush(stdin);
        getline(cin,nome);
        fflush(stdin);
    };
    this->nome = nome;
}

void Profissional::setNascimento(string nascimento){
    while(nascimento == ""){
        cout << "Nascimento invalido \n Digite outra data de nascimento:";
        fflush(stdin);
        getline(cin,nascimento);
        fflush(stdin);
    };
    this->nascimento = nascimento;
}
void Profissional::setEspecialidade(int especialidade){
    while(especialidade < 0){
        cout << "Especialidade invalido \n Digite outro especialidade:";
        cin >> especialidade;
    };
    this->especialidade = especialidade;
}

void Profissional::imprimir(){
    cout << "Imprimindo Profissional" << endl;
    cout << "Id: " << getId() << endl;
    cout << "Nome: " << getNome() << endl;
    cout << "Nascimento: " << getNascimento() << endl;
    cout << "Especialidade: " << getEspecialidade() << endl;
}

void Profissional::leitura(){
    int id, especialidade;
    string nome, nascimento;

    cout << "Lendo Profissional" << endl;
    cout << "Id: ";
    cin >> id;
    setId(id);
    cout << "Nome: ";
    fflush(stdin);
    getline(cin,nome);
    fflush(stdin);
    setNome(nome);
    cout << "Nascimento: ";
    fflush(stdin);
    getline(cin,nascimento);
    fflush(stdin);
    setNascimento(nascimento);
    cout << "Especialidade: ";
    cin >> especialidade;
    setEspecialidade(especialidade);
}

