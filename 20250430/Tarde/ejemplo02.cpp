#include <iostream>
using namespace std;

int main(){

    int n, maximo = 0;

    cout << "Ingresar número: ";
    cin >> maximo;

    cout << "Ingresar número: ";
    cin >> n;

    if (n > maximo){
        maximo = n;
    }

    cout << "Ingresar número: ";
    cin >> n;

    if (n > maximo){
        maximo = n;
    }

    cout << "Ingresar número: ";
    cin >> n;

    if (n > maximo){
        maximo = n;
    }

    cout << "Ingresar número: ";
    cin >> n;

    if (n > maximo){
        maximo = n;
    }

    cout << "El maximo es: " << maximo << endl;


    return 0;
}
