#include <iostream>
using namespace std;

int main(){

    int num;
    cout << "Ingresar número: ";
    cin >> num;

    if (num >= 100 && num <= 999){
        cout << "El número se encuentra entre 100 y 999";
    }

    return 0;
}
