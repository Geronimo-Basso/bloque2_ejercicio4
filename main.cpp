#include <iostream>
#include "PilaGen.h"
using namespace std;

int main() {
    PilaGen<int> *pilaI = new PilaGen<int>;
    PilaGen<int> *pilaJ = new PilaGen<int>;
    PilaGen<int> *pilaK = new PilaGen<int>;
    bool condicion = true;
    int opcionMenu , i , j, k;
    cout << "Bienvenido a nuestro programa, ingrese un tulpa de número enteros (i,j,k), dependiendo de estos datos podremos realizaer diferentes insercciones en las pilas" << endl;
    while ( condicion ){
        cout << "Opciones Menu: \n1. Añadir tupla de números  \n2. Terminar programa" << endl;
        cin >> opcionMenu;
        switch ( opcionMenu ) {
            case 1:
            {
                cout << "Introduzca i: " << endl;
                cin >> i;
                pilaI->insertar_cabeza( i );
                cout << "Introduzca j: " << endl;
                cin >> j;
                pilaJ->insertar_cabeza( j );
                cout << "Introduzca k: " << endl;
                cin >> k;
                pilaK->insertar_cabeza( k );
                if( k == 0){
                    if ( i > 0 ){ //i es positivo
                        pilaI->insertar_cabeza( j );
                    }else if ( i == 0 ){ //i igual menos q  cero
                        cout << "------------- PILA i -------------------" << endl;
                        int pilaIsize = pilaI->size();
                        for(int k = 0 ; k < pilaIsize; k++ ){
                            cout << pilaI->pop() << endl;
                        }
                        cout << "------------- PILA j -------------------" << endl;
                        int pilaJsize = pilaJ->size();
                        for(int m = 0 ; m < pilaJsize; m++ ){
                            cout << pilaJ->pop() << endl;
                        }
                        break;
                    }else if( i < 0 ){ //i es 0
                        pilaJ->eliminar_cabeza();
                    }
                }else if ( k == -1){ //borrar la pila K
                    cout << "------------- PILA K -------------------" << endl;
                    int pilaKsize = pilaK->size();
                    for(int m = 0 ; m < pilaKsize; m++ ){
                        cout << pilaK->pop() << endl;
                    }
                }else{
                    cout << "El valor de K debe ser 0 o -1 " << endl;
                }
                break;
            }
            case 2:
            {
                condicion = false;
                break;
            }
            default :
            {
                cout << "ERROR, introduzca una opcion valida porfavor" << endl;
            }
        }
    }
    return 0;
}
