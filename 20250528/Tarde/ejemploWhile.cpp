/**
  Estructura general del ciclo inexacto (while)
  --------------------------------------------

  while(condicionACumplir == true){

      instruccion1;
      instruccion2;
      instruccion3;

  }

*/

#include <iostream>
using namespace std;

int main(){
   int totalPiezas = 0;
   int cantPiezas;
   float temperatura;

   cout << "Temperatura: ";
   cin >> temperatura;

   while (temperatura <= 65){

      cout << "Cantidad Piezas: ";
      cin >> cantPiezas;

      totalPiezas += cantPiezas; //      totalPiezas = totalPiezas + cantPiezas;

      cout << "Temperatura: ";
      cin >> temperatura;

   }

   cout << endl << "Total piezas producidas: " << totalPiezas << endl;


	return 0;
}
