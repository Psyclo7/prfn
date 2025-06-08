#include <iostream>
#include <string>
#include "entradas.h"
using namespace std;

int main() {
	int integrantesviaje;
	int isladestino;
	int tipotour;
	int temporada;
	double costototal = 0;
	double costobase = 0;

	//MENU DE SELECCION DE ISLAS Y LOS PROCESOS ANIDADOS CORRESPONDIENTES A CADA ISLA
	cout << "\n****** MENU DE OPCIONES ******\n";
	cout << "Selecciona la Isla visitar\n";
	cout << "1- Isla San Cristobal\n";
	cout << "2- Isla Santa Cruz\n";
	cout << "3- Isla Isabela\n";
	cout << "Ingrese el numero de isla:";
	validar(isladestino);
	switch (isladestino) {
		case 1:
			cout << "Seleccionaste la Isla San Cristobal\n";
			do {
				cout << "Ingrese el numero de personas que asistiran al viaje\n";
				validar(integrantesviaje);
				if (integrantesviaje >= 1 && integrantesviaje <= 100){
					do {
						cout << "Que tipo de tour desea tomar:\n";
						cout << "1-Tour economico\n";
						cout << "2-Tour premium\n";
						validar(tipotour);
						if (tipotour == 1) {
							do {
								cout << "Ingresar la temporada de viaje\n";
								cout << "1-Temporada baja";
								cout << "2-Temporada alta";
								validar(temporada);
								if (temporada == 1) {
									costobase = 100;
									costototal = costobase * integrantesviaje;

									// Descuento por más de 5 personas
									if (integrantesviaje > 5) {
										costototal *= 0.90; // 10% de descuento
									}

									// Descuento por temporada baja
									costototal *= 0.80; // 20% de descuento

									cout << "Costo total del tour: $" << costototal << endl;
								}
								else if (temporada == 2) {
									costobase = 100;
									costototal = costobase * integrantesviaje;

									if (integrantesviaje > 5) {
										costototal *= 0.90;//10% por cantidad de personas
									}

									cout << "Costo total del tour: $" << costototal << endl;
								}
							} while (temporada != 1 && temporada != 2);
						}
						else if (tipotour == 2) {
							do {
								cout << "Ingresar la temporada de viaje\n";
								cout << "1-Temporada baja";
								cout << "2-Temporada alta";
								validar(temporada);
								if (temporada == 1) {
									costobase = 150;
									costototal = costobase * integrantesviaje;

									// Descuento por más de 5 personas
									if (integrantesviaje > 5) {
										costototal *= 0.90; // 10% de descuento
									}

									// Descuento por temporada baja
									costototal *= 0.80; // 20% de descuento

									cout << "Costo total del tour: $" << costototal << endl;
								}
								else if (temporada == 2) {
									costobase = 150;
									costototal = costobase * integrantesviaje;

									if (integrantesviaje > 5) {
										costototal *= 0.90;//10% por cantidad de personas
									}

									cout << "Costo total del tour: $" << costototal << endl;
								}
							} while (temporada != 1 && temporada != 2);
						}
					} while (tipotour !=1 && tipotour!=2);
					
				}
				else{
					cout << "Excede la capacidad del tour. Capacidad (1-100)\n";
				}
			} while (integrantesviaje < 1 || integrantesviaje > 100);
		break;
		case 2:
			cout << "Seleccionaste la Isla Santa Cruz\n";
			do {
				cout << "Ingrese el numero de personas que asistiran al viaje\n";
				validar(integrantesviaje);
				if (integrantesviaje >= 1 && integrantesviaje <= 100) {
					do {
						cout << "Que tipo de tour desea tomar:\n";
						cout << "1-Tour economico\n";
						cout << "2-Tour premium\n";
						validar(tipotour);
						if (tipotour == 1) {
							do {
								cout << "Ingresar la temporada de viaje\n";
								cout << "1-Temporada baja";
								cout << "2-Temporada alta";
								validar(temporada);
								if (temporada == 1) {
									costobase = 120;
									costototal = costobase * integrantesviaje;

									// Descuento por más de 5 personas
									if (integrantesviaje > 5) {
										costototal *= 0.90; // 10% de descuento
									}

									// Descuento por temporada baja
									costototal *= 0.80; // 20% de descuento

									cout << "Costo total del tour: $" << costototal << endl;
								}
								else if (temporada == 2) {
									costobase = 120;
									costototal = costobase * integrantesviaje;

									if (integrantesviaje > 5) {
										costototal *= 0.90;//10% por cantidad de personas
									}

									cout << "Costo total del tour: $" << costototal << endl;
								}
							} while (temporada != 1 && temporada != 2);
						}
						else if (tipotour == 2) {
							do {
								cout << "Ingresar la temporada de viaje\n";
								cout << "1-Temporada baja";
								cout << "2-Temporada alta";
								validar(temporada);
								if (temporada == 1) {
									costobase = 180;
									costototal = costobase * integrantesviaje;

									// Descuento por más de 5 personas
									if (integrantesviaje > 5) {
										costototal *= 0.90; // 10% de descuento
									}

									// Descuento por temporada baja
									costototal *= 0.80; // 20% de descuento

									cout << "Costo total del tour: $" << costototal << endl;
								}
								else if (temporada == 2) {
									costobase = 180;
									costototal = costobase * integrantesviaje;

									if (integrantesviaje > 5) {
										costototal *= 0.90;//10% por cantidad de personas
									}

									cout << "Costo total del tour: $" << costototal << endl;
								}
							} while (temporada != 1 && temporada != 2);
						}
					} while (tipotour != 1 && tipotour != 2);

				}
				else {
					cout << "Excede la capacidad del tour. Capacidad (1-100)\n";
				}
			} while (integrantesviaje < 1 || integrantesviaje > 100);
			break;
		case 3:
			cout << "Seleccionaste la Isla Isabela\n";
			do {
				cout << "Ingrese el numero de personas que asistiran al viaje\n";
				validar(integrantesviaje);
				if (integrantesviaje >= 1 && integrantesviaje <= 100) {
					do {
						cout << "Que tipo de tour desea tomar:\n";
						cout << "1-Tour economico\n";
						cout << "2-Tour premium\n";
						validar(tipotour);
						if (tipotour == 1) {
							do {
								cout << "Ingresar la temporada de viaje\n";
								cout << "1-Temporada baja";
								cout << "2-Temporada alta";
								validar(temporada);
								if (temporada == 1) {
									costobase = 150;
									costototal = costobase * integrantesviaje;

									// Descuento por más de 5 personas
									if (integrantesviaje > 5) {
										costototal *= 0.90; // 10% de descuento
									}

									// Descuento por temporada baja
									costototal *= 0.80; // 20% de descuento

									cout << "Costo total del tour: $" << costototal << endl;
								}
								else if (temporada == 2) {
									costobase = 150;
									costototal = costobase * integrantesviaje;

									if (integrantesviaje > 5) {
										costototal *= 0.90;//10% por cantidad de personas
									}

									cout << "Costo total del tour: $" << costototal << endl;
								}
							} while (temporada != 1 && temporada != 2);
						}
						else if (tipotour == 2) {
							do {
								cout << "Ingresar la temporada de viaje\n";
								cout << "1-Temporada baja";
								cout << "2-Temporada alta";
								validar(temporada);
								if (temporada == 1) {
									costobase = 220;
									costototal = costobase * integrantesviaje;

									// Descuento por más de 5 personas
									if (integrantesviaje > 5) {
										costototal *= 0.90; // 10% de descuento
									}

									// Descuento por temporada baja
									costototal *= 0.80; // 20% de descuento

									cout << "Costo total del tour: $" << costototal << endl;
								}
								else if (temporada == 2) {
									costobase = 220;
									costototal = costobase * integrantesviaje;

									if (integrantesviaje > 5) {
										costototal *= 0.90;//10% por cantidad de personas
									}

									cout << "Costo total del tour: $" << costototal << endl;
								}
							} while (temporada != 1 && temporada != 2);
						}
					} while (tipotour != 1 && tipotour != 2);

				}
				else {
					cout << "Excede la capacidad del tour. Capacidad (1-100)\n";
				}
			} while (integrantesviaje < 1 || integrantesviaje > 100);
			break;
	}
	return 0;
}