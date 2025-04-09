///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int num1, num2, mayor;
    cout<<"INGRESAR NUMERO ";
    cin>>num1;
    cout<<"INGRESAR NUMERO ";
	cin>>num2;

	if(num1<num2){
        mayor=num2;
	}
	else{
        mayor=num1;
	}
	cout<<"MAYOR ES "<<mayor;
	cout<<endl;
	system("pause");
	return 0;
}
