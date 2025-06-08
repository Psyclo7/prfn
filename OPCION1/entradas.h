#ifndef validar_entrada
#define validar_entrada
#include <iostream>

bool validar(int& valor) {
    while (!(cin >> valor)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "El dato ingresado esta incorrecto. Ingrese un valor correspondiente a los solicitado: ";
    }
    return true;
}
#endif
