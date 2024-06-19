#include <iostream>
using namespace std;
int main(){
    int numero;
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
}

