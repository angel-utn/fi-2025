#include <iostream>
using namespace std;

int main(){
    int univ, cant, puntaje,i, sumaP;
    float promedio;
    cout<<"UNIVERSIDAD ";
    cin>>univ;
    while(univ!=0){
        cout<<"CANTIDAD DE ESTUDIANTES ";
        cin>>cant;
        sumaP=0;
        for(i=1;i<=cant;i++){
            cout<<"PUNTAJE ";
            cin>>puntaje;
            sumaP+=puntaje;
        }
        promedio=(float)sumaP/cant;
        cout<<"UNIVERSIDAD "<<univ<<" CANTIDAD DE ESTUDIANTES "<<cant;
        cout<<" PROMEDIO "<<promedio<<endl;
        cout<<"UNIVERSIDAD ";
        cin>>univ;
    }
    return 0;
}
