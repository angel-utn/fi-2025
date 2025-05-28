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
    }
    else{
        if(num2<num3){
            primero=num2;
        }
        else{
            primero=num3;
        }
    }


    if(num1>num2 &&num1>num3){
        tercero=num1;
    }
    else{
        if(num2>num3){
            tercero=num2;
        }
        else{
            tercero=num3;
        }
    }

	if(num1>primero && num1<tercero){
        segundo=num1;
	}
	else{
        if(num2<tercero){
            segundo=num2;
        }
        else{
            segundo=num3;
        }
	}
	cout<<primero<<", "<<segundo<<", "<<tercero;
	cout<<endl;
	system("pause");
	return 0;
}
