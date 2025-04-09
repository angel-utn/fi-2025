///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int cantidad, sueltos, cajas, importe;
    const int TOTAL_CAJA=12, PRECIO_SUELTO=100, PRECIO_CAJA=1000;
    cout<<"INGRESAR CANTIDAD DE ALFAJORES ";
    cin>>cantidad;

    sueltos=cantidad%TOTAL_CAJA;
    cajas=cantidad/TOTAL_CAJA;
    importe=sueltos*PRECIO_SUELTO+cajas*PRECIO_CAJA;

    cout<<"IMPORTE DE LA VENTA "<<importe;
	cout<<endl;
	system("pause");
	return 0;
}
