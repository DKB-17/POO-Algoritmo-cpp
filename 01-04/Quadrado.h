//Quadrado.h

#ifndef IFIGURA_H
    #include "IFigura.h"
#endif // IFIGURA_H

#ifndef QUADRADO_H
    #define QUADRADO_H
#endif // QUADRADO_H

class Quadrado: public IFigura {
private:
    float tamanho;
public:
    Quadrado(): tamanho(0){}
    Quadrado(float tamanho): tamanho(tamanho){}


    float getTamanho() const{return this->tamanho;}
    void setTamanho(float tamanho) {this->tamanho = tamanho;}

    float area() {
        return (this->tamanho * this->tamanho);
    }
    float perimetro() {
        return (4 * this->tamanho);
    }
};
