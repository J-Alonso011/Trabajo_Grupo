#include <iostream>

using namespace std;

class TablasMultiplicar {
public:
    void mostrarTodas() {
        for (int i = 1; i <= 10; i++) {
            cout << "Tabla del " << i << ":\n";
            for (int j = 1; j <= 10; j++) {
                cout << i << " x " << j << " = " << i * j << endl;
            }
            cout << "------------------\n";
        }
    }
};

class MultiplicacionManual {
public:
    void mostrarMultiplicacion() {
        int a, b;
        cout << "Ingresa el primer numero (multiplicando): ";
        cin >> a;
        cout << "Ingresa el segundo numero (multiplicador): ";
        cin >> b;

        int unidad = b % 10;
        int decena = b / 10;

        int linea1 = a * unidad;
        int linea2 = a * decena;

        cout << "   " << a << endl;
        cout << "x  " << b << endl;
        cout << "------" << endl;
        cout << "   " << linea1 << endl;
        cout << "  " << linea2 << "0" << endl;
        cout << "------" << endl;
        cout << "  " << a * b << endl;
    }
};

class ConversionBinario {
public:
    void convertir() {
        int numero;
        cout << "Ingresa un numero decimal: ";
        cin >> numero;

        if (numero == 0) {
            cout << "En binario: 0" << endl;
            return;
        }

        string binario = "";
        while (numero > 0) {
            binario = char((numero % 2) + '0') + binario;
            numero /= 2;
        }

        cout << "En binario: " << binario << endl;
    }
};

class ConversionHexadecimal {
public:
    void convertir() {
        int numero;
        cout << "Ingresa un numero decimal: ";
        cin >> numero;

        if (numero == 0) {
            cout << "En hexadecimal: 0" << endl;
            return;
        }

        string hexadecimal = "";
        char hexChars[] = {'0', '1', '2', '3', '4', '5', '6', '7',
                           '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

        while (numero > 0) {
            int resto = numero % 16;
            hexadecimal = hexChars[resto] + hexadecimal;
            numero /= 16;
        }

        cout << "En hexadecimal: " << hexadecimal << endl;
    }
};

