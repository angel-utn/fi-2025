#include <iostream>
using namespace std;

int main(){

  int i, nmaq, piezas, tiempo;
  int totalMaquina1 = 0;
  int totalMaquina2 = 0;
  int totalMaquina3 = 0;
  int cantidadMaquinasMas30Piezas = 0;

  for(i=1; i<=9; i++){
    cout << "Numero de máquina: ";
    cin >> nmaq;

    cout << "Piezas producidas: ";
    cin >> piezas;

    cout << "Tiempo producción: ";
    cin >> tiempo;

    switch (nmaq){
      case 1:
        totalMaquina1 += piezas;
      break;

      case 2:
        totalMaquina2 += piezas;
      break;

      case 3:
        totalMaquina3 += piezas;
      break;
    }

    cout << endl;
  }

  cout << "A) Total de piezas producidas" << endl;
  cout << "Maquina 1: " << totalMaquina1 << endl;
  cout << "Maquina 2: " << totalMaquina2 << endl;
  cout << "Maquina 3: " << totalMaquina3 << endl;

  if (totalMaquina1 > 30){
    cantidadMaquinasMas30Piezas++;
  }

  if (totalMaquina2 > 30){
    cantidadMaquinasMas30Piezas++;
  }

  if (totalMaquina3 > 30){
    cantidadMaquinasMas30Piezas++;
  }

  cout << "B) Cantidad de máquinas con más de 30 piezas producidas: " << cantidadMaquinasMas30Piezas << endl;




  return 0;
}
