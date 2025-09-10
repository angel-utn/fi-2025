#include <iostream>
using namespace std;

int main(){
  int vec[10] = {};
  int num, i;

  int maximo = 0, numeroMasApariciones;

  cout << "Numero: ";
  cin >> num;

  while (num != 0){

    vec[num-1]++;

    cout << "Numero: ";
    cin >> num;
  }

  // A) El número que más apariciones tuvo en la lista
  for(i = 0; i < 10; i++){
    if (vec[i] > maximo){
      maximo = vec[i];
      numeroMasApariciones = i + 1;
    }
  }
  cout << "A) El número con más apariciones es: " << numeroMasApariciones << endl;

  // B) Los números que se repitieron al menos una vez
  cout << "B) Los números que se repitieron al menos una vez" << endl;
  for(i = 0; i < 10; i++){
    if (vec[i] > 1){
      cout << (i+1) << endl;
    }
  }
  // C) Los números que no fueron ingresados
  cout << endl << "C) Los números que no fueron ingresados" << endl;
  for(i = 0; i < 10; i++){
    if (vec[i] == 0){
      cout << (i+1) << endl;
    }
  }

  return 0;
}
