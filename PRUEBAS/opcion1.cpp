#include <iostream>
#include "validarentradas.h"
#include "opcion1.h"
#include "Calculo.h"
using namespace std;
//DEFINICION DE LA FUNCION DEL ARCHIVO DE CABECERA OPCION1.H
void opcion1() {
	string textoviaje;
	int op1;
	int op2;
	int costobase;
	//MENU DE SELECCION DE ISLAS Y LOS PROCESOS ANIDADOS CORRESPONDIENTES A CADA ISLA
	do {
	cout << "\n****** MENU DE OPCIONES ******\n";
	cout << "Selecciona la Isla visitar\n";
	cout << "1- Isla San Cristobal\n";
	cout << "2- Isla Santa Cruz\n";
	cout << "3- Isla Isabela\n";
	cout << "4- Regresar al menu principal\n";
	cout << "Ingrese el numero de isla:";
	validar(op1);
		switch (op1)
		{
		case 1:
			textoviaje = "Isla San Cristobal";
			cout << "Seleccionaste la Isla San Cristobal\n";
			cout << "El costo del tour es de $100 por persona para clase economica y $150 para clase premium.\n";
			cout << "Recuerda que si son mas de 5 personas, se aplica un descuento del 10%.\n";
			cout << "Si viajas en temporada baja, se aplica un descuento adicional del 20%.\n";
			cout << "Disfruta de tu viaje a la " << textoviaje << "!\n";
			do {
			cout << "Desea la opcion premium o la economica \n";
			cout << "1. Para la economica \n";
			cout << "2. Para la premium \n";
			validar(op2);
				if (op2 < 1 || op2 > 2) {
					cout << "Opcion no valida. Por favor, ingrese 1 para economica o 2 para premium.\n";
				}
				else if (op2 == 1) {
					costobase = 100; // Costo base para clase económica
				}
				else if (op2 == 2) {
					costobase = 150; // Costo base para clase premium
				} 
			} while (op2 < 1 || op2 > 2);
			procesarDato(costobase);
			break;
		case 2:
			textoviaje = "Isla Santa Cruz";
			cout << "Seleccionaste Isla Santa Cruz\n";
			cout << "El costo del tour es de $120 por persona para clase economica y $180 para clase premium.\n";
			cout << "Recuerda que si son mas de 5 personas, se aplica un descuento del 10%.\n";
			cout << "Si viajas en temporada baja, se aplica un descuento adicional del 20%.\n";
			cout << "Disfruta de tu viaje a la " << textoviaje << "!\n";
			do {
				cout << "Desea la opcion premium o la economica \n";
				cout << "1. Para la economica \n";
				cout << "2. Para la premium \n";
				validar(op2);
				if (op2 < 1 || op2 > 2) {
					cout << "Opcion no valida. Por favor, ingrese 1 para economica o 2 para premium.\n";
				}
				else if (op2 == 1) {
					costobase = 120; // Costo base para clase económica
				}
				else if (op2 == 2) {
					costobase = 180; // Costo base para clase premium
				}
			} while (op2 < 1 || op2 > 2);
			procesarDato(costobase);
			break;
		case 3:
			textoviaje = "Isla Isabela";
			cout << "Seleccionaste la Isla Isabela\n";
			cout << "El costo del tour es de $150 por persona para clase economica y $220 para clase premium.\n";
			cout << "Recuerda que si son mas de 5 personas, se aplica un descuento del 10%.\n";
			cout << "Si viajas en temporada baja, se aplica un descuento adicional del 20%.\n";
			cout << "Disfruta de tu viaje a la " << textoviaje << "!\n";
			do {
				cout << "Desea la opcion premium o la economica \n";
				cout << "1. Para la economica \n";
				cout << "2. Para la premium \n";
				validar(op2);
				if (op2 < 1 || op2 > 2) {
					cout << "Opcion no valida. Por favor, ingrese 1 para economica o 2 para premium.\n";
				}
				else if (op2 == 1) {
					costobase = 150; // Costo base para clase económica
				}
				else if (op2 == 2) {
					costobase = 220; // Costo base para clase premium
				}
			} while (op2 < 1 || op2 > 2);
			procesarDato(costobase);
			break;
		case 4:
			cout << "Regresando al menu principal...\n";
			return; // Salir de la función para regresar al menú principal
			break;
			default:
				cout << "Opcion no valida. Intente de nuevo1.\n";
				break;
		}
	}while (op1 < 1 || op1 > 4); // Validar que la isla seleccionada sea válida
}

	