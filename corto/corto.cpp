#include <iostream>
using namespace std;

bool validar(int& valor) {
    while (!(cin >> valor)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Entrada inválida. Intente nuevamente: ";
    }
    return true;
}

int main() {
    int edad;
    cout << "Ingrese su edad: ";
    if (validar(edad)) {
        cout << "Edad válida: " << edad << endl;
    }
}