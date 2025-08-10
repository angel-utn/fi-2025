/*
La Cámara de Exportadores de la República Argentina dispone de las exportaciones realizadas por las cinco industrias más importantes del país. Por cada exportación se registra:
Código de industria (Número entero)
Código de exportación (Número entero)
Continente de destino (1 - América, 2 - Europa, 3 - Asia)
Total de toneladas exportadas (float)
Importe total (float)

La información se encuentra agrupada por código de industria. Para indicar el fin de la carga de datos de una industria se ingresa un código de exportación igual a cero.


Se pide calcular e informar




Pts
A)
Por cada industria, indicar el código y el total de toneladas exportadas discriminadas por continente. Es decir el total de toneladas exportadas a América, Europa y Asia.
30
B)
La cantidad de industrias que exportaron más toneladas a América que a Asia.
30
C)
El total de dinero abonado por Europa en concepto de exportaciones.
20
D)
El nombre del continente que haya registrado la exportación individual más pesada. (20 puntos)
20


*/

#include <iostream>
using namespace std;

int main(){
    const int NUM_INDUSTRIAS = 5;
    int i, codigoIndustria, codigoExportacion, continente;
    float toneladasExportadas, importeTotal;
    // A y B
    float totalToneladasAmerica = 0, totalToneladasEuropa = 0, totalToneladasAsia = 0;

    // B
    int industriasMasAmericaQueAsia = 0;

    //C
    float totalImporteEuropa = 0;

    // D
    string nombreContinenteMaxPeso;
    float pesoMaximo = 0;


    for (i = 1; i <= NUM_INDUSTRIAS; i++) {

        totalToneladasAmerica = 0;
        totalToneladasEuropa = 0;
        totalToneladasAsia = 0;

        cout << "Ingrese el código de industria: ";
        cin >> codigoIndustria;

        cout << "Ingrese el código de exportación: ";
        cin >> codigoExportacion;

        while (codigoExportacion != 0){

            cout << "Ingrese el continente de destino (1 - América, 2 - Europa, 3 - Asia): ";
            cin >> continente;
            cout << "Ingrese el total de toneladas exportadas: ";
            cin >> toneladasExportadas;
            cout << "Ingrese el importe total: ";
            cin >> importeTotal;

            // A y C
            switch (continente) {
                case 1: // América
                    totalToneladasAmerica += toneladasExportadas;
                    break;
                case 2: // Europa
                    totalToneladasEuropa += toneladasExportadas;
                    totalImporteEuropa += importeTotal; // C
                    break;
                case 3: // Asia
                    totalToneladasAsia += toneladasExportadas;
                    break;
            }

            // D
            if (toneladasExportadas > pesoMaximo) {
                pesoMaximo = toneladasExportadas;
                switch (continente) {
                    case 1:
                        nombreContinenteMaxPeso = "América";
                        break;
                    case 2:
                        nombreContinenteMaxPeso = "Europa";
                        break;
                    case 3:
                        nombreContinenteMaxPeso = "Asia";
                        break;
                }
            }

            cout << "Ingrese el código de exportación: ";
            cin >> codigoExportacion;
        }

        // B
        if (totalToneladasAmerica > totalToneladasAsia) {
            industriasMasAmericaQueAsia++;
        }

        // A
        cout << "A) Código de industria: " << codigoIndustria << endl;
        cout << "Total toneladas exportadas a América: " << totalToneladasAmerica << endl;
        cout << "Total toneladas exportadas a Europa: " << totalToneladasEuropa << endl;
        cout << "Total toneladas exportadas a Asia: " << totalToneladasAsia << endl;

    }

    // B
    cout << "B) Cantidad de industrias que exportaron más toneladas a América que a Asia: " << industriasMasAmericaQueAsia << endl;

    // C
    cout << "C) Total de dinero abonado por Europa en concepto de exportaciones: " << totalImporteEuropa << endl;

    // D
    cout << "D) El continente con la exportación individual más pesada es: " << nombreContinenteMaxPeso << endl;


}
