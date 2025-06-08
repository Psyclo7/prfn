#include <iostream>
using namespace std;
//DEFINICION DEL ARCHIVO DE CABECERA VALIDARENTRADAS
bool validar(int& valor) {
    while (!(cin >> valor)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "El dato ingresado esta incorrecto. Ingrese un valor correspondiente a lo solicitado: ";
    }
    return true;
}