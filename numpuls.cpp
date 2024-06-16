#include <iostream>
using namespace std;
int main(){
    double num_pulsaciones;
    int edad;
    char sexo;
    cout<<"Ingrese el sexo ('F' para femenino, 'M' para masculino):"<<endl;
    cin>> sexo;
    cout<<"Ingrese la edad:"<<endl;
    cin>> edad;
    if(edad<0){
    	cout<<"Edad invalida"<<endl;
	}else{
    if(sexo='F'){
        num_pulsaciones=(220-edad)/10;
    }else if(sexo='M'){
        num_pulsaciones=(210-edad)/10;
    }else{
        cout<<"Sexo no valido. Ingrese 'F' o 'M'."<<endl;
    }
    cout<<"Numero de pulsaciones por cada 10 segundos:"<<num_pulsaciones<<endl;
    return 0;
}
}
