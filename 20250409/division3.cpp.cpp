///Ejercicio:suma de dos n�meros
///Autor:DEK
///Fecha:09-04-2025
///Comentario: primer programa del curso de FI 2025

# include<iostream>


using namespace std;


int main(){
    ///instrucciones espec�ficas de cada programa
    int n1, n2;
    float resultado;/// float permite almacenar n�meros reales
	cout<<"INGRESAR NUMERO ";
	cin>>n1;
	cout<<"INGRESAR NUMERO ";
	cin>>n2;
	///resultado=1.00*n1/n2;
	resultado=(float)n1/n2;
	cout<<"LA DIVISION ES "<<resultado<<endl;

	///
	cout<<endl;
	system("pause");
	return 0;
}
