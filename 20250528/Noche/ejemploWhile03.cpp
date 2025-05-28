/**
  Hacer un programa que permita ingresar una nota. La nota debe estar
  obligatoriamente entre 1 y 10. El programa debe validar que la nota
  se encuentre en el rango indicado y pedir nuevamente la nota si no se ingresa
  un valor en dicho rango.
  Una vez ingresado correctamente, mostrar la nota y finalizar el programa.
*/

#include <iostream>
using namespace std;

int main(){

   int nota;

   cout << "Ingresar nota: ";
   cin >> nota;    // Nota que puede ser incorrecta

   // Validación / Comprobación del rango de la nota

   // while(!(nota >= 1 && nota <= 10)){
   while(nota < 1 || nota > 10){
      cout << "-- Ingresar nota: ";
      cin >> nota;
   }

   cout << "La nota ingresada fue: " << nota << endl; // Siempre se encuentre dentro [1; 10]

	return 0;
}
