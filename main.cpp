#include <iostream>
#include <stdlib.h>

#include "cola.h"

using namespace std;

int main()
{
    Cola<int> numeros;

    int opcion;
    int elemento;

    do{
        cout << "Cola:" << endl;
        numeros.recorrer();
        cout << endl;

        cout << "\t-Menu: Cola-" << endl;
        cout << endl;

        cout << " 1. Encolar" << endl;
        cout << " 2. Desencolar" << endl;
        cout << " 3. Frente" << endl;
        cout << " 4. Llena" << endl;
        cout << " 5. Vacia" << endl;
        cout << " 6. Salir" << endl;
        cout << endl;

        cout << "Elija una opcion: ";
        cin >> opcion;

        switch (opcion){
            case 1:
                cout << endl;
                cout << "\tOpcion: Encolar" << endl;
                cout << endl;
                cout << "Ingrese el elemento a insertar: ";
                cin >> elemento;

                numeros.encolar(elemento);

                cout << endl;
                system("pause");

                break;

            case 2:
                cout << endl;
                cout << "\tOpcion: Desencolar" << endl;
                cout << endl;

                numeros.desencolar();

                cout << endl;
                system("pause");

                break;

            case 3:
                cout << endl;
                cout << "\tOpcion: Frente" << endl;
                cout << endl;
                cout << numeros.frente();
                cout << endl << endl;

                system("pause");

                break;

            case 4:
                cout << endl;
                cout << "\tOpcion: Llena" << endl;
                cout << endl;

                if(numeros.llena() == 1){
                    cout << "La cola esta llena..." << endl;
                }
                else{
                    cout << "La cola no esta llena..." << endl;
                }

                cout << endl;
                system("pause");

                break;

            case 5:
                cout << endl;
                cout << "\tOpcion: Vacia" << endl;
                cout << endl;

                if(numeros.vacia() == 1){
                    cout << "La cola esta vacia..." << endl;
                }
                else{
                    cout << "La cola no esta vacia..." << endl;
                }

                cout << endl;
                system("pause");
                break;

            case 6:
                break;

            default:
                cout << endl;
                cout << "Opcion invalida...";
                cout << endl;
                system("pause");
                break;
        }

        system("cls");

    }while(opcion != 6);

    return 0;
}
