#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleOutputCP(CP_UTF8);
    char respuesta;
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
}

