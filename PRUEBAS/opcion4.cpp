#include <iostream>
#include <string>
#include "validarentradas.h"
#include "opcion2.h"
#include "opcion4.h"
using namespace std;

static Reserva reservaGuardada = { -1, -1, -1, -1 }; // -1 como "sin datos"

void registrarReserva(int isla, int actividad, int dia, int numeroPersonas) {
    reservaGuardada.isla = isla;
    reservaGuardada.actividad = actividad;
    reservaGuardada.dia = dia;
    reservaGuardada.numeroPersonas = numeroPersonas;
}

void opcion4() {
    if (reservaGuardada.isla == -1) {
        cout << "No hay reservas registradas aún.\n";
        return;
    }

    string nombresIslas[] = { "San Cristóbal", "Santa Cruz", "Isabela" };
    string actividades[] = { "Snorkel", "Caminata", "Buceo", "Observación de aves" };

    cout << "\n--- Historial de reserva ---\n";
    cout << "Isla: " << nombresIslas[reservaGuardada.isla - 1] << endl;
    cout << "Actividad: " << actividades[reservaGuardada.actividad - 1] << endl;
    cout << "Día de la semana (1-7): " << reservaGuardada.dia << endl;
    cout << "Número de personas: " << reservaGuardada.numeroPersonas << endl;
}