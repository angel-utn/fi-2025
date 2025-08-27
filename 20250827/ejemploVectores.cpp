/*
Un comercio dispone de las ventas realizadas durante
el mes de Julio de 2025.
Por cada venta registró:
- Día de la venta
- Importe de la venta

La información no está agrupada ni ordenada.
Se indica el fin de la carga de datos con un día
igual a cero.

Se pide calcular e informar:
A) Por cada día, el total recaudado.
B) La cantidad de días que no registraron ventas.
C) La máxima recaudación registrada en un día.
*/
#include <iostream>
using namespace std;

int main(){
    float vecRecaudacion[31];
    int cantDiasSinVentas = 0;
    float maximo = -1;

    int i, dia;
    float importe;

    // Inicializamos el vector en 0
    for(i = 0; i < 31; i++){
        vecRecaudacion[i] = 0;
    }

    // Cargamos las ventas
    cout << "Dia de la venta: ";
    cin >> dia;

    while (dia != 0){
        cout << "Importe: $ ";
        cin >> importe;
        cout << "--------------------------" << endl;

        vecRecaudacion[dia - 1] += importe;

        cout << "Dia de la venta: ";
        cin >> dia;
    }

    cout << "Punto A" << endl;
    cout << "--------------------------" << endl;
    for(i = 0; i < 31; i++){
        if (vecRecaudacion[i] > 0){
            cout << "Día: " << (i + 1) << ": $ " << vecRecaudacion[i] << endl;
        }
    }

    cout << "Punto B" << endl;
    cout << "--------------------------" << endl;
    for(i = 0; i < 31; i++){
        if (vecRecaudacion[i] == 0){
            cantDiasSinVentas++;
        }
    }
    cout << "Cantidad de días sin ventas: " << cantDiasSinVentas << endl;

    cout << "Punto C" << endl;
    cout << "--------------------------" << endl;
    for(i = 0; i < 31; i++){
        if (vecRecaudacion[i] > maximo){
            maximo = vecRecaudacion[i];
        }
    }
    cout << "La recaudación diaria más grande fue: " << maximo << endl;

    return 0;
}
