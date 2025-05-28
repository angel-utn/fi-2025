/**
  Se dispone de una lista de nros enteros que finaliza cuando se ingresa un
  valor igual a cero. (Cero no es un valor a procesar)

  Se pide calcular e informar:
  A) La cantidad de nros positivos
  B) El promedio de numeros
*/


#include <iostream>
using namespace std;

int main(){

   int numero;
   /// A
   int cantPositivos = 0;
   /// B
   int sumaNumeros = 0;
   int cantNumeros = 0;
   float promedio;

   cout << "Ingresar número: ";
   cin >> numero;

   while (numero != 0){

      /// A
      if (numero > 0){
         cantPositivos++;
      }

      /// B
      sumaNumeros += numero;
      cantNumeros++;


      cout << "Ingresar número: ";
      cin >> numero;
   }

   cout << endl << "Resultados: " << endl;

   cout << "A) Cantidad de positivos: " << cantPositivos << endl;

   if (cantNumeros > 0){
      promedio = sumaNumeros / (float) cantNumeros;
      cout << "B) Promedio: " << promedio << endl;
   }
   else{
      cout << "B) No hay números para calcular el promedio" << endl;
   }

	return 0;
}
