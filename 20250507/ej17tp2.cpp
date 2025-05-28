///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int num1, num2, num3;
    int primero, segundo, tercero;

    cout<<"INGRESAR NUMERO ";
    cin>>num1;
    cout<<"INGRESAR NUMERO ";
    cin>>num2;
    cout<<"INGRESAR NUMERO ";
    cin>>num3;

    if(num1<num2 &&num1<num3){
        primero=num1;
        if(num2<num3){
                segundo=num2;
                tercero=num3;
        }
        else{
                segundo=num3;
                tercero=num2;
        }
    }
    else{
        ///num1 no es el más chico
        if(num2<num3){
            primero=num2;
            if(num1<num3){
                segundo=num1;
                tercero=num3;
            }
            else{
                segundo=num3;
                tercero=num1;
            }
        }
        else{
                ///
                primero=num3;
                if(num1<num2){
                    segundo=num1;
                    tercero=num2;
                }
                else{
                    segundo=num2;
                    tercero=num1;
                }

        }

    }
	cout<<primero<<", "<<segundo<<", "<<tercero;
	cout<<endl;
	system("pause");
	return 0;
}
