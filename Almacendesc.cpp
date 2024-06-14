#include <iostream>
using namespace std;
int main(){
    double totalCompra, montoAPagar, DESCUENTO, LIMITE_DESCUENTO;
    LIMITE_DESCUENTO=1000.0;
    DESCUENTO=0.20;
	cout << "Ingrese el total de su compra: ";
	cin >> totalCompra;
    if (totalCompra > LIMITE_DESCUENTO) {
        montoAPagar = totalCompra * (1 - DESCUENTO);
    } else {
        montoAPagar = totalCompra;
    }
    cout << "El monto a pagar es: "<<montoAPagar<<endl;
    return 0;
}
