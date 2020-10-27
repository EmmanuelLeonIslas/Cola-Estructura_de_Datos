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
    //Codigo para verificar si la cola esta vacia
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
    //Codigo para encolar un elemento
}

template<typename tipo>
void Cola<tipo>::desencolar(){
    //Codigo para desencolar el elemento siguiente
}

template<typename tipo>
tipo Cola<tipo>::frente(){
    //Codigo para obtener el elemento siguiente sin desencolar
}

template<typename tipo>
void Cola<tipo>::recorrer()
{
    //Codigo para recorrer la cola
}



#endif // COLA_H
