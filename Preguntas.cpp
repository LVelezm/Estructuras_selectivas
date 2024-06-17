#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
    char respuesta;
    int opcion;
    cout<<"Este es un juego de preguntas (seleccione 1 o 2) "<<endl;
    cout<<"1. Jugar"<<endl;
    cout<<"2. Salir"<<endl;
    cin>>opcion;
    if(opcion==1){
    	 cout<<"¿Colon descubrio America? (Responde S o N):";
   		 cin>>respuesta;
    if(respuesta=='S'){
        cout<<"¿El lago Titicaca es el lago navegable mas alto del mundo? (Responde S o N):";
        cin>>respuesta;
        if(respuesta=='S'){
            cout<<"¿El español es el unico idioma oficial de Peru? (Responde S o N):";
            cin>>respuesta;
            if(respuesta=='N'){
                cout<<"Ganaste"<<endl;
            }else{
                cout<<"perdiste"<<endl;
            }
        }else{
            cout<<"perdiste"<<endl;
        }
    }else{
        cout<<"perdiste"<<endl;
    }
    return 0;	
	}else{
		if(opcion==2){
			return 0;
		}else{
			cout<<"Opción inválida"<<endl;
		}
	}
	return 0;
}

