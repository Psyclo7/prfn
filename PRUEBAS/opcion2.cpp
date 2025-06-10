#include <iostream>
using namespace std;
#include "opcion2.h"
#include "opcion4.h"
using namespace std;

void opcion2() {
    int isla, actividad, dia, numeroPersonas;

    cout << "Ingrese la isla (1: San Cristobal, 2: Santa Cruz, 3: Isabela): ";
    cin >> isla;

    cout << "Ingrese la actividad (1: Snorkel, 2: Caminata, 3: Buceo, 4: Observación de aves): ";
    cin >> actividad;

    cout << "Ingrese el dia de la actividad (1 al 7): ";
    cin >> dia;

    cout << "Ingrese el numero de personas (1 a 50): ";
    cin >> numeroPersonas;

    registrarReserva(isla, actividad, dia, numeroPersonas);
}