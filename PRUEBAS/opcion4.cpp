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
        cout << "No hay reservas registradas a�n.\n";
        return;
    }

    string nombresIslas[] = { "San Crist�bal", "Santa Cruz", "Isabela" };
    string actividades[] = { "Snorkel", "Caminata", "Buceo", "Observaci�n de aves" };

    cout << "\n--- Historial de reserva ---\n";
    cout << "Isla: " << nombresIslas[reservaGuardada.isla - 1] << endl;
    cout << "Actividad: " << actividades[reservaGuardada.actividad - 1] << endl;
    cout << "D�a de la semana (1-7): " << reservaGuardada.dia << endl;
    cout << "N�mero de personas: " << reservaGuardada.numeroPersonas << endl;
}