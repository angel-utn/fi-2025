///Ejercicio:suma de dos números
///Autor:DEK
///Fecha:09-04-2025
///Comentario: primer programa del curso de FI 2025

# include<iostream>


using namespace std;


int main(){
    ///instrucciones específicas de cada programa
    int n1, n2, parteEntera, resto;
	cout<<"INGRESAR NUMERO ";
	cin>>n1;
	cout<<"INGRESAR NUMERO ";
	cin>>n2;
	parteEntera=n1/n2;
    resto=n1%n2;
	cout<<"LA PARTE ENTERA DE LA DIVISION ES "<<parteEntera<<endl;
	cout<<"EL RESTO DE LA DIVISION ES "<<resto<<endl;
	///
	cout<<endl;
	system("pause");
	return 0;
}
