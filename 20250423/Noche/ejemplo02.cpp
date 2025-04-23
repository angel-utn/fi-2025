#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Ingresar numero: ";
    cin >> num;

    if (num > 0){
        cout << "El numero es positivo";
    }

    if (num == 0){
        cout << "El numero es cero";
    }

    if (num < 0){
        cout << "El numero es negativo";
    }


    return 0;
}
