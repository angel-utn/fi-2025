#include <iostream>
using namespace std;

int main(){
   const int ENSAYOS = 10;
   const int TIPOS_MOTORES = 6;

   int numeroSerie, tipoMotor, i;
   float temperatura, temperaturaTolerancia;

   float tolerancias[TIPOS_MOTORES] = { 60, 70, 65, 90, 45, 55 };

   // A
   int seriesTemperaturaExcedida[ENSAYOS] = {};
   // B
   int motoresTemperaturaAceptable[TIPOS_MOTORES] = {};

   for (i=0; i<ENSAYOS; i++){

      cout << "Número de serie: ";
      cin >> numeroSerie;

      cout << "Tipo de motor: ";
      cin >> tipoMotor;

      cout << "Temperatura de trabajo: ";
      cin >> temperatura;

      temperaturaTolerancia = tolerancias[tipoMotor - 1];

      if (temperatura > temperaturaTolerancia){
         seriesTemperaturaExcedida[i] = numeroSerie;
      }
      else{
         motoresTemperaturaAceptable[tipoMotor-1]++;
      }
   }

   cout << endl << "PUNTO A: Números de serie de motores que trabajaron por encima de la temp. tolerable" << endl;
   cout << "------------------------------------------------------------------------------" << endl;
   for(i = 0; i < ENSAYOS; i++){
      if (seriesTemperaturaExcedida[i] != 0){
         cout << seriesTemperaturaExcedida[i] << " ";
      }
   }
   cout << endl;
   cout << endl << "PUNTO B: Tipos de motores con más de dos motores que trabajaron con temp. tolerable" << endl;
   cout << "------------------------------------------------------------------------------" << endl;
   for(i = 0; i < TIPOS_MOTORES; i++){
      if (motoresTemperaturaAceptable[i] > 2){
         cout << (i+1) << " ";
      }
   }

	return 0;
}
