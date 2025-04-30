#include <iostream>
using namespace std;

int main(){
  int i, n, maximo;

  for(i=1; i<=5; i++){
      cout << "Ingresar numero: ";
      cin >> n;

      if (i == 1 || n > maximo){
        maximo = n;
      }
  }

  cout << "El máximo es: " << maximo << endl;

  return 0;
}
