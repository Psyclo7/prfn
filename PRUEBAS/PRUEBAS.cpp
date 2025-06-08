#include <iostream>
#include <string>
#include "validarentradas.h"
#include "opcion1.h"
#include "opcion2.h"
using namespace std;
int main() {
    int opcionmenu;

    do {
        // MOSTRAR EL MENU DE OPCIONES TURISTUCAS
        cout << "\n****** MENU DE OPCIONES ******\n";
        cout << "Selecciona la actividad que desea realizar\n";
        cout << "1- Calcular costo del tour\n";
        cout << "2- Gestionar reserva de actividad\n";
        cout << "3- Analizar datos turisticos\n";
        cout << "4- Mostrar historial de reservas\n";
        cout << "5- Salir del menu\n";
        cout << "Numero de actividad:";
        validar(opcionmenu);
        // ESTRUCTURA PARA REPETIR MENU
        if (opcionmenu >= 1 && opcionmenu <= 5) {
            //ESTRUCTURA PARA EJECUTAR CADA ACTIVIDAD
            switch (opcionmenu) {
                case 1:
                    opcion1();
                    break;
                case 2:
                    opcion2()
                        ; break;
                case 3: 
                    cout << "poner proceso popcion3"; break;
                case 4:
                    cout << "porbner proceso 4";break;
                case 5:
                    cout << "Hasta luego, pasa un lindo dia";break;
            }
        }
        else {
            cout << "Opcion no valida. Intente de nuevo.\n";
        }

    } while (opcionmenu != 5); //OPERADOR SI EL MENU NO SE TERMINA CON LA OPCION 5 DESPUES DE EJECUTA NUEVAMENTE

    return 0;
}