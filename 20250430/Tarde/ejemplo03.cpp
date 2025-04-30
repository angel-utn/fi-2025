#include <iostream>
using namespace std;

int main(){

    int i, maximo = 0, n;

    for(i=1; i <= 5; i++){

        cout << "Ingresar número: ";
        cin >> n;

        if (i == 1 || n > maximo){
            maximo = n;
        }

    }

    cout << "Maximo valor: " << maximo;

    return 0;
}
