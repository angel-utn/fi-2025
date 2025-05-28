///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;



int main(){
    int cantKW, importe;
    cout<<"INGRESE LA CANTIDAD DE KW ";
    cin>>cantKW;
    if(cantKW<=100){
       importe=cantKW*10;
    }
    else{
        if(cantKW<=200){
            importe=100*10+(cantKW-100)*12;
        }
        else{
           importe=100*10+100*12+(cantKW-200)*15;
        }
    }
	cout<<"IMPORTE A PAGAR "<<importe;
	cout<<endl;
	system("pause");
	return 0;
}
