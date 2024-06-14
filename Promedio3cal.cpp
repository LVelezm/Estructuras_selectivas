#include <iostream>
using namespace std;
int main(){
	double N1, N2, N3, promedio;
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
}
