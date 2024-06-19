#include <iostream>
using namespace std;
int main(){
    int numero, opcion;
    cout<<"Este programa determinara las vocales de acuerdo a numeros asignados (seleccione 1 o 2)"<<endl;
    cout<<"1. Iniciar"<<endl;
    cout<<"2. Salir"<<endl;
    cin>>opcion;
    if (opcion==1){
    cout<<"Ingrese un numero del 1 al 5: "<<endl;
    cin>>numero;
    switch (numero){
        case 1:
            cout<<"La vocal es: A"<< endl;
            break;
        case 2:
            cout<<"La vocal es: E"<< endl;
            break;
        case 3:
            cout<<"La vocal es: I" << endl;
            break;
        case 4:
            cout<<"La vocal es: O" << endl;
            break;
        case 5:
            cout<<"La vocal es: U" << endl;
            break;
        default:
            cout<<"El numero ingresado no es valido" << endl;
            break;
    }
    return 0;
	}else{
		if (opcion==2){
			return 0;
		}else{
			cout<<"Opcion invalida"<<endl;
		}
	}	
}