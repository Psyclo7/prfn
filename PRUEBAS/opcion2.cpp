#include <iostream>
using namespace std;

int opcion2() {
    int opcion;
    int actividad;
    int dia;
    int personas;
    int cupoSnorkel = 10;
    int cupoCaminata = 15;
    int cupoBuceo = 8;
    int cupoAves = 12;

    while (true) {
        cout << "\nEn esta opción usted podrá seleccionar una actividad en una isla" << endl;
        cout << "1. Isla San Cristobal" << endl;
        cout << "2. Isla Santa Cruz" << endl;
        cout << "3. Isla Isabela" << endl;
        cout << "Seleccione una isla: ";
        cin >> opcion;

        if (opcion < 1 || opcion > 3) {
            cout << "Isla no válida. Intente de nuevo.\n";
            continue;
        }

        cout << "\nSeleccione una actividad:\n";
        if (opcion == 2) {
            cout << "Recuerde que snorkel y buceo no están permitidos en Santa Cruz\n";
            cout << "1. Caminata\n";
            cout << "2. Observación de aves\n";
            cin >> actividad;
            if (actividad < 1 || actividad > 2) {
                cout << "Actividad no válida. Intente de nuevo.\n";
                continue;
            }
            // Ajustamos a los valores correctos del switch
            actividad = (actividad == 1) ? 3 : 4;
        }
        else {
            cout << "1. Snorkel" << endl;
            cout << "2. Buceo" << endl;
            cout << "3. Caminata" << endl;
            cout << "4. Observacion de aves" << endl;
            cin >> actividad;
            if (actividad < 1 || actividad > 4) {
                cout << "Actividad no válida. Intente de nuevo.\n";
                continue;
            }
        }

        cout << "\nSeleccione un día:\n";
        cout << "1.Lunes" << endl;
        cout << "2.Martes" << endl;
        cout << "3.Miercoles" << endl;
        cout << "4.Jueves" << endl;
        cout << "5.Viernes" << endl;
        cout << "6.Sabado" << endl;
        cout << "7.Domingo" << endl;
        cin >> dia;
        if (dia < 1 || dia > 7) {
            cout << "Día no válido. Intente de nuevo.\n";
            continue;
        }

        cout << "\nCantidad de personas que desea ingresar: ";
        cin >> personas;

        bool reservaExitosa = false;

        switch (actividad) {
        case 1: // Snorkel
            if (personas <= cupoSnorkel) {
                cupoSnorkel -= personas;
                reservaExitosa = true;
            }
            else {
                cout << "No hay cupos suficientes para snorkel. Solo quedan " << cupoSnorkel << ".\n";
            }
            break;
        case 2: // Buceo
            if (personas <= cupoBuceo) {
                cupoBuceo -= personas;
                reservaExitosa = true;
            }
            else {
                cout << "No hay cupos suficientes para buceo. Solo quedan " << cupoBuceo << ".\n";
            }
            break;
        case 3: // Caminata
            if (personas <= cupoCaminata) {
                cupoCaminata -= personas;
                reservaExitosa = true;
            }
            else {
                cout << "No hay cupos suficientes para caminata. Solo quedan " << cupoCaminata << ".\n";
            }
            break;
        case 4: // Observación de aves
            if (personas <= cupoAves) {
                cupoAves -= personas;
                reservaExitosa = true;
            }
            else {
                cout << "No hay cupos suficientes para aves. Solo quedan " << cupoAves << ".\n";
            }
            break;
        }

        if (reservaExitosa) {
            cout << "Reserva hecha con éxito. Actividad: " << actividad << ", Día: " << dia << ", Personas: " << personas << endl;
        }

        char otra;
        cout << "\n¿Desea hacer otra reserva? (s/n): ";
        cin >> otra;
        if (otra != 's' && otra != 'S') {
            break; // Salir del bucle
        }
    }

    return 0;
}