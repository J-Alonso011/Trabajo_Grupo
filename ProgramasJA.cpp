#include <iostream>
using namespace std;
//FUNCIONES PROGRAMA 13.--------------------------
void cuadrado() {
    cout << "#####" << endl;
    cout << "#   #" << endl;
    cout << "#   #" << endl;
    cout << "#   #" << endl;
    cout << "#####" << endl;
}

void triangulo() {
    cout << "  #  " << endl;
    cout << " ### " << endl;
    cout << "#####" << endl;
}

void circulo() {
    cout << "  ***  " << endl;
    cout << " *   * " << endl;
    cout << "*     *" << endl;
    cout << " *   * " << endl;
    cout << "  ***  " << endl;
}
//------------------------------------------------

//CLASE PROGRAMA 15---------------------------------
class Cajero {
private:
    double saldo;
    int pin;
public:
    Cajero(double saldoInicial, int pinInicial) {
        saldo = saldoInicial;
        pin = pinInicial;
    }
    
    bool verificarPin(int intento) {
        return intento == pin;
    }
    
    void mostrarSaldo() {
        cout << "Saldo actual: Q" << saldo << endl;
    }
    
    void depositar(double cantidad) {
        if (cantidad > 0) {
            saldo += cantidad;
            cout << "Has depositado Q" << cantidad << ". Saldo actual: Q" << saldo << endl;
        } else {
            cout << "Cantidad no valida para deposito." << endl;
        }
    }
    
    void retirar(double cantidad) {
        if (cantidad > saldo) {
            cout << "Fondos insuficientes." << endl;
        } else if (cantidad > 0) {
            saldo -= cantidad;
            cout << "Has retirado Q" << cantidad << ". Saldo actual: Q" << saldo << endl;
        } else {
            cout << "Cantidad no valida para retiro." << endl;
        }
    }
};
//--------------------------------------------------------------------------------------------------
//variables programa 14.--------------------
	const int ANCHO = 40;
    const int ALTO = 20;
    int posicion_x = 0, posicion_y = 0;
    int direccion_x = 1, direccion_y = 1;
    //------------------------------------------
    //variables programa 15.--------------------
     Cajero cajero(1000.0, 1234); 
    int pinIngresado;
    int intentos = 3;
    //-------------------------------------------
    //variables programa 16.---------------------
    double cat1, cat2, hip;
    //-------------------------------------------
