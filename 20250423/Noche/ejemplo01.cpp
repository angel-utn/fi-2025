#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Ingresar numero: ";
    cin >> num;

    if (num > 0){
        cout << "El numero es positivo";
    }
    else {
        if (num == 0){
            cout << "El numero es cero";
        }
        else{
            cout << "El numero es negativo";
        }
    }

    return 0;
}
