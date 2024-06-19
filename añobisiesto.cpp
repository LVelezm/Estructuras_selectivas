#include<iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
    int year, opcion;
    cout<<"Este programa determinara si un año es bisiesto o no (seleccione 1 o 2)"<<endl;
    cout<<"1. Iniciar"<<endl;
    cout<<"2. Salir"<<endl;
    cin>>opcion;
    if (opcion==1){
    	    cout<<"Ingrese un año:";
    		cin>>year;
    if(year%4==0){
    	if(year%100==0){
    		if(year%400==0){
    			cout<<year<<" es un año bisiesto."<<endl;
    		}else{
    			cout<<year<<" no es un año bisiesto."<<endl;
             }
    	}else{
    		cout<<year<<" es un año bisiesto."<<endl;
		}
	}else{
    	cout<<year<<" no es un año bisiesto."<<endl;
    }
    return 0;
	}else{
		if (opcion==2){
			return 0;
		}else{
			cout<<"Opción inválida"<<endl;
		}
	}

}

