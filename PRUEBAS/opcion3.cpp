#include <iostream>
#include <string>
#include "validarentradas.h"
#include "opcion3.h"
using namespace std;

void opcion3() {
    string sitiosTuristicos[3] = { "San Cristobal", "Santa Cruz", "Isabela" };
    int visitantes[3][7];
    double promedios[3];
    int maximos[3];
    int minimos[3];
    // Ingresar los datos
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese los visitantes por dia para " << sitiosTuristicos[i] << ":\n";
        int suma = 0;
        for (int j = 0; j < 7; j++) {
            validar(visitantes[i][j]);
            if (visitantes[i][j] > 0 && visitantes[i][j] <= 1000)
            {
            suma += visitantes[i][j];

            if (j == 0) {
                maximos[i] = visitantes[i][j];
                minimos[i] = visitantes[i][j];
            }
            else {
                if (visitantes[i][j] > maximos[i])
                    maximos[i] = visitantes[i][j];
                if (visitantes[i][j] < minimos[i])
                    minimos[i] = visitantes[i][j];
                }
            }
			else {
				cout << "El numero de visitantes debe ser mayor a 0 y menor a 1000. Intente de nuevo." << endl;
				j--; // Repetir la iteración para el mismo día
			}
        }
        promedios[i] = suma / 7.0;
    }

    // Mostrar estadísticas
    for (int i = 0; i < 3; i++) {
        cout << sitiosTuristicos[i] << ": Promedio = " << promedios[i]
            << ", Maximo = " << maximos[i]
            << ", Minimo = " << minimos[i] << endl;
    }

    // Encontrar isla con menor promedio
    int menorPromedio = 0;
    for (int i = 1; i < 3; i++) {
        if (promedios[i] < promedios[menorPromedio]) {
            menorPromedio = i;
        }
    }

    cout << "\nRecomendacion: Visite " << sitiosTuristicos[menorPromedio]
        << ", es la isla con menor afluencia en promedio." << endl;
}
