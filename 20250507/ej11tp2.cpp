///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int num1, num2, num3;
    cout<<"INGRESAR UN NUMERO ";
	cin>>num1;
	cout<<endl;

	cout<<"INGRESAR UN NUMERO ";
	cin>>num2;
	cout<<endl;

	cout<<"INGRESAR UN NUMERO ";
	cin>>num3;

	if(num1!=num2){
        if(num2!=num3){
            if(num1!=num3){
                cout<<"LOS 3 NUMEROS SON DISTINTOS";
            }
        }
	}
	cout<<endl;
	system("pause");
	return 0;
}
