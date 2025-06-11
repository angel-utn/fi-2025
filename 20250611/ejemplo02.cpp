#include <iostream>
using namespace std;

int main(){
  int nmaq, piezas, tiempo;
  int i, j;
  int totalMaquina;
  int cantidadMaquinasMas30Piezas = 0;

  for(i=1; i<=3; i++){
    totalMaquina = 0;

    for(j=1; j<=3; j++){
      cout << "Order de producción # " << j << endl;
      cout << "Numero de máquina: ";
      cin >> nmaq;

      cout << "Piezas producidas: ";
      cin >> piezas;

      cout << "Tiempo producción: ";
      cin >> tiempo;

      totalMaquina += piezas;
      cout << endl;
    }
    cout << endl;
    cout << "A) Maquina  : " << nmaq << endl;
    cout << "Total piezas: " << totalMaquina << endl;

    if (totalMaquina > 30){
      cantidadMaquinasMas30Piezas++;
    }
    cout << endl;
  }

  cout << "B) Cantidad de máquinas con más de 30 piezas producidas: " << cantidadMaquinasMas30Piezas << endl;
  return 0;
}
