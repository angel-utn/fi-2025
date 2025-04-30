#include <iostream>
using namespace std;

int main(){
  int n, maximo = 0;

  cout << "Ingresar numero: ";
  cin >> maximo;

  cout << "Ingresar numero: ";
  cin >> n;

  if (n > maximo){
    maximo = n;
  }

  cout << "Ingresar numero: ";
  cin >> n;

  if (n > maximo){
    maximo = n;
  }

  cout << "Ingresar numero: ";
  cin >> n;

  if (n > maximo){
    maximo = n;
  }

  cout << "Ingresar numero: ";
  cin >> n;

  if (n > maximo){
    maximo = n;
  }

  cout << endl << "El maximo es: " << maximo << endl;

  return 0;
}
