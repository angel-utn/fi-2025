///Ejercicio:
///Autor:DEK
///Fecha:
///Comentario:

# include<iostream>


using namespace std;


int main(){
    int num,contPos=0, i;
    for(i=1;i<=5;i++){
         cout<<"INGRESAR NUMERO ";
         cin>>num;
         if(num>0){
           //contPos=contPos+1;
           contPos++;
         }
    }

	cout<<"CANTIDAD DE POSITIVOS "<<contPos;
	cout<<endl;
	system("pause");
	return 0;
}
