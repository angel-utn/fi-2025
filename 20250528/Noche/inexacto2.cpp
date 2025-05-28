///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;

///Dada una lista de números enteros positivos hacer un programa que termine cuando
/// la suma de los valores ingresado sea mayor a 30. Se debe informar la suma y la cantidad
/// de números ingresados sin tener en cuenta el último valor

///1,4,7,12,3,5-> 27, 5
int main(){
    int num, suma=0, cant=0;
    while(suma<=30){
        cout<<"INGRESAR NUMERO ";
        cin>>num;
        suma+=num;
        cant++;    ///cant=cant+1 ///cant+=1
    }
	cout<<"LA SUMA DE LOS NUMEROS DE LA LISTA ES "<<suma-num<<endl;
	cout<<"LA CANTIDAD DE NUMEROS VALIDOS ES "<<cant-1<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
