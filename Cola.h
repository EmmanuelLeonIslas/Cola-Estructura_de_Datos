#ifndef COLA_H
#define COLA_H

#include <iostream>
#include <stdexcept>

using namespace std;

template <typename tipo>
class Cola{
    private:
        static const size_t CAPACIDAD = 6;
        tipo elementos[CAPACIDAD];

        size_t inicio;
        size_t fin;

    public:
        Cola() : inicio(0), fin(CAPACIDAD - 1){};

        bool vacia();
        bool llena();
        void encolar(tipo);
        void desencolar();
        tipo frente();

        void recorrer();

};

template<typename tipo>
bool Cola<tipo>::vacia(){
    if(inicio == fin + 1 || (inicio == 0 && fin == CAPACIDAD - 1)){
        return true;
    }

    return false;
}

template<typename tipo>
bool Cola<tipo>::llena(){
    if(inicio == fin + 2 || (inicio == 0 && fin == CAPACIDAD - 2) || (inicio == 1 && fin == CAPACIDAD - 1)){
        return true;
    }

    return false;
}

template<typename tipo>
void Cola<tipo>::encolar(tipo elemento){
    if(this->llena()){
        throw invalid_argument("Cola llena");
    }

    if(++fin == CAPACIDAD){
        fin = 0;
    }

    elementos[fin] = elemento;
}

template<typename tipo>
void Cola<tipo>::desencolar(){
    if(this->vacia()){
        throw invalid_argument("Cola vacia");
    }

    if(++inicio == CAPACIDAD){
        inicio = 0;
    }
}

template<typename tipo>
tipo Cola<tipo>::frente(){
    if(this->vacia()){
        throw invalid_argument("Cola vacia");
    }

    return elementos[inicio];
}

template<typename tipo>
void Cola<tipo>::recorrer()
{
    if(this->vacia()){
        cout << "La cola esta actualmente vacia";
    }
    else{
        if(inicio > fin){
            for(size_t i(inicio); i < CAPACIDAD; i++){
                cout << elementos[i] << ", ";
            }

            for(size_t i(0); i <= fin; i++){
                cout << elementos[i] << ", ";
            }
        }
        else{
            for(size_t i(inicio); i <= fin; i++){
                cout << elementos[i] << ", ";
            }
        }
    }
    cout << endl;
}



#endif // COLA_H
