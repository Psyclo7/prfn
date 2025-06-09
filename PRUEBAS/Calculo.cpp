#include <iostream>
#include "validarentradas.h"
#include "opcion1.h"
#include "Calculo.h"
using namespace std;
void procesarDato(int costobase) {
    int personas, tipotour, temporada;
    double costototal;
	do {
		system("cls");
		cout << "ingrese el numero de personas que asistiran al viaje\n";
		validar(personas);
		if (personas >= 1 && personas <= 100) {
			do {
			cout << "ingresar la temporada de viaje\n";
			cout << "1-temporada baja\n";
			cout << "2-temporada alta\n";
			validar(temporada);
			if (temporada >= 1 && temporada <= 2) {
				costototal = costobase * personas;
				// descuento por más de 5 personas
				if (personas > 5) {
					costototal *= 0.90; // 10% de descuento
				}
				// descuento por temporada baja
				costototal *= 0.80; // 20% de descuento

				cout << "costo total del tour: $" << costototal << endl;
			}
			else if (temporada == 2) {
				costobase = 100;
				costototal = costobase * personas;

				if (personas > 5) {
					costototal *= 0.90;//10% por cantidad de personas
				}

				cout << "costo total del tour: $" << costototal << endl;
			}
			} while (temporada < 1 || temporada >2);
		}
		else {
			cout << "excede la capacidad del tour o el dato es invalido. capacidad (1-100)\n";
		}
	} while (personas < 1 || personas > 100);
}
