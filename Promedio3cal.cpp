#include <iostream>
using namespace std;
int main(){
	double N1, N2, N3, promedio;
	int opcion;
	do {
        cout << "Menu:(1 o 2)" << endl;
        cout << "1. Calcular promedio" << endl;
        cout << "2. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout<<"Ingrese las 3 calificaciones: ";
				cin>>N1;
				cin>>N2;
				cin>>N3;
				promedio=(N1+N2+N3)/3;
				if(promedio>=70){
				cout<<"Aprobado";
				}else{
				cout<<"reprobado"<<endl;
				}
				return 0;
                break;
            case 2:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }

        cout << endl;

    } while(opcion != 2);

    return 0;
}
	

