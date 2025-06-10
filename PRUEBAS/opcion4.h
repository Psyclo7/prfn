#ifndef opcion4_h
#define opcion4_h
// Estructura para guardar una reserva
struct Reserva {
    int isla;
    int actividad;
    int dia;
    int numeroPersonas;
};

// Funciones públicas
void registrarReserva(int isla, int actividad, int dia, int numeroPersonas);
void opcion4();
#endif