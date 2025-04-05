#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// tablas de multiplicar
class TablasMultiplicar {
public:
    void mostrarTablas() {
        cout << "\n=== Tablas de multiplicar del 1 al 10 ===\n" << endl;
        for (int i = 1; i <= 10; i++) {
            cout << "Tabla del " << i << ":\n";
            for (int j = 1; j <= 10; j++) {
                cout << i << " x " << j << " = " << i * j << endl;
            }
            cout << endl;
        }
        // Humor matemático
        cout << "Las tablas de multiplicar: el primer paso para dominar el universo numérico.\n";
    }
};

//multiplicación manual de dos digitos
class MultiplicacionManual {
public:
    void calcular() {
        int a, b;
        cout << "\n=== Multiplicacion manual ===" << endl;
        cout << "Ingresa el primer numero (ej. 45): ";
        cin >> a;
        cout << "Ingresa el segundo numero (ej. 32): ";
        cin >> b;


        int unidad = b % 10;
        int decena = (b / 10) % 10;
        int prodUnidad = a * unidad;
        int prodDecena = a * decena;
        int resultado = prodUnidad + (prodDecena * 10);
        
        cout << "\n   " << a << endl;
        cout << "x  " << b << endl;
        cout << "------" << endl;
        cout << "  " << prodUnidad << endl;
        cout << " " << prodDecena << "0" << endl;
        cout << "------" << endl;
        cout << resultado << endl;
        
        // Comentario con humor
        cout << "\nMultiplicar a mano: porque a veces lo clásico es lo que abre camino al futuro.\n";
    }
};

class ConversorBases {
public:
    // Conversor de decimal a binario
    void decimalABinario() {
        int decimal;
        cout << "\n=== Conversor Decimal a Binario ===" << endl;
        cout << "Ingresa un numero decimal: ";
        cin >> decimal;
        
        if (decimal == 0) {
            cout << "Binario: 0" << endl;
            return;
        }
        
        string binario = "";
        int num = decimal;
        while (num > 0) {
            binario += (num % 2 == 0) ? '0' : '1';
            num /= 2;
        }
        reverse(binario.begin(), binario.end());
        cout << "Binario: " << binario << endl;
        
        cout << "\nEl futuro es digital, ¡todo comienza con 0 y 1!\n";
    }
    
    // Conversor de decimal a hexadecimal
    void decimalAHexadecimal() {
        int decimal;
        cout << "\n=== Conversor Decimal a Hexadecimal ===" << endl;
        cout << "Ingresa un numero decimal: ";
        cin >> decimal;
        
        if (decimal == 0) {
            cout << "Hexadecimal: 0" << endl;
            return;
        }
        
        string hexadecimal = "";
        const string hexDigits = "0123456789ABCDEF";
        int num = decimal;
        while (num > 0) {
            hexadecimal += hexDigits[num % 16];
            num /= 16;
        }
        reverse(hexadecimal.begin(), hexadecimal.end());
        cout << "Hexadecimal: " << hexadecimal << endl;
        
        cout << "\nNombres en hexadecimal: ¡lo geek nunca fue tan elegante!\n";
    }
};

int main() {
    int opcion;
    TablasMultiplicar tablas;
    MultiplicacionManual multiMan;
    ConversorBases conversor;
    
    do {
        cout << "\n===== MENU PRINCIPAL =====" << endl;
        cout << "1. Mostrar todas las tablas de multiplicar (1 al 10)" << endl;
        cout << "2. Multiplicacion manual paso a paso" << endl;
        cout << "3. Conversion de decimal a binario" << endl;
        cout << "4. Conversion de decimal a hexadecimal" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                tablas.mostrarTablas();
                break;
            case 2:
                multiMan.calcular();
                break;
            case 3:
                conversor.decimalABinario();
                break;
            case 4:
                conversor.decimalAHexadecimal();
                break;
            case 5:
                cout << "\nGracias por usar el programa. ¡Hasta luego, futuro programador!\n";
                break;
            default:
                cout << "\nOpcion no valida. Intenta de nuevo.\n";
        }
        
    } while(opcion != 5);
    
    return 0;
}

