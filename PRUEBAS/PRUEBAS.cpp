#include <iostream>
#include <string>
#include "validarentradas.h"
#include "opcion1.h"
#include "opcion2.h"
#include "opcion3.h"
using namespace std;
int main() {
    int opcionmenu;

    do {  
        // mostrar el menu de opciones turistucas
        cout << "\n****** menu de opciones ******\n";
        cout << "selecciona la actividad que desea realizar\n";
        cout << "1- calcular costo del tour\n";
        cout << "2- gestionar reserva de actividad\n";
        cout << "3- analizar datos turisticos\n";
        cout << "4- mostrar historial de reservas\n";
        cout << "5- salir del menu\n";
        cout << "numero de actividadd:";
        validar(opcionmenu);
        // estructura para repetir menu 
        if (opcionmenu >= 1 && opcionmenu <= 5) {
            //estructura para ejecutar cada actividad
            switch (opcionmenu) {
                case 1:
                    system("cls");  
                    opcion1();
                    break;
                case 2:
                    system("cls");
                    opcion2(); 
                    break;
                case 3: 
                    system("cls");
                    opcion3();
                    break;
                case 4:
                    cout << "opcion4" << endl; break;
                case 5:
                    cout << "hasta luego, pasa un lindo dia";break;
            }
        }
        else {
            cout << "opcion no valida. intente de nuevo.\n";

        }

    } while (opcionmenu != 5); //operador si el menu no se termina con la opcion 5 despues de ejecuta nuevamente

    return 0;
}