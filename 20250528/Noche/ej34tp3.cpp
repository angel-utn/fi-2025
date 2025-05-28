///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){

	int i, j, equipo, resultado;
    ///punto a
    int cantPerdidos, cantEmpatados, cantGanados;
    for(j=1;j<=4;j++){
        cantPerdidos=cantEmpatados=cantGanados=0;

        for(i=1;i<=3; i++){
            cout<<"INGRESAR EQUIPO ";
            cin>>equipo;
            cout<<"INGRESAR RESULTADO ";
            cin>>resultado;
            switch(resultado){
                case 1: cantPerdidos++;
                        break;
                case 2: cantEmpatados++;
                        break;
                case 3: cantGanados++;
                        break;
                default:cout<<"NUMERO INGRESADO INCORRECTO";
                        break;
            }
            /*if(resultado==1){
                cantPerdidos++;
            }
            else{
                if(resultado==2){
                    cantEmpatados++;
                }
                else{
                    cantGanados++;
                }
            } */
        }
	cout<<"CANTIDAD PERDIDOS "<<cantPerdidos<<endl;
	cout<<"CANTIDAD EMPATADOS "<<cantEmpatados<<endl;
	cout<<"CANTIDAD GANADOS "<<cantGanados<<endl;
	cout<<endl;
    }
	system("pause");
	return 0;
}
