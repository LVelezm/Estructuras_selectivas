#include <iostream>
using namespace std;
int main(){
    double total, descuento, numero;
    cout<<"Ingrese el total de la compra: ";
    cin>>total;
    if (total<0){
    	cout<<"Total de compra invalido"<<endl;
    	return 0;
	}else{
		cout<<"Ingrese el numero escogido al azar: ";
    	cin>>numero;
    	if(numero < 74){
        descuento=total*0.15;
    	}else{
        descuento=total*0.20;
    }
    cout<<"El descuento aplicado es: "<<descuento<<endl;
    return 0;
	}
}
