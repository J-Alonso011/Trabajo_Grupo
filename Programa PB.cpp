#include <iostream>

using namespace std;

class Romanos {
public:
    void convertirARomano() {
        int numero;
        cout << "Ingresa un numero (>=1 y <=1000): ";
        cin >> numero;

        if (numero < 1 || numero > 1000) {
            cout << "Solo se admiten numeros entre 1 y 1000" << endl;
            return;
        }

        string resultado = "";
        int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        for (int i = 0; i < 13; i++) {
            while (numero >= valores[i]) {
                resultado += simbolos[i];
                numero -= valores[i];
            }
        }

        cout << "En romano: " << resultado << endl;
    }
};

class NumeroEntero {
public:
    string convertirEntero(int n) {
        if (n == 0) return "cero";
        if (n == 100) return "cien";

        string texto = "";
        if (n >= 1000) {
            texto += unidades[n / 1000] + " mil ";
            n %= 1000;
        }
        if (n >= 100) {
            texto += centenas[n / 100] + " ";
            n %= 100;
        }
        if (n >= 20) {
            texto += decenas[n / 10];
            if (n % 10) texto += " y " + unidades[n % 10];
        } else if (n >= 10) {
            texto += especiales[n - 10];
        } else if (n > 0) {
            texto += unidades[n];
        }

        return texto;
    }

public:
    string unidades[10] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string decenas[10] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string especiales[10] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};
    string centenas[10] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
};

class NumeroDecimal {
public:
    string convertirDecimal(double num) {
        int entero = (int)num;
        int decimal = (int)((num - entero) * 100); // Considerando solo dos decimales

        string resultado = enteroConverter.convertirEntero(entero);
        if (decimal > 0) {
            resultado += " punto ";
            if (decimal < 10) resultado += "cero ";
            resultado += enteroConverter.convertirEntero(decimal);
        }

        return resultado;
    }

public:
    NumeroEntero enteroConverter;  // Objeto de NumeroEntero para convertir la parte entera
};

class TablaMultiplicar {
public:
    void mostrarTabla() {
        int numero;
        cout << "Ingresa un numero para ver su tabla de multiplicar: ";
        cin >> numero;

        cout << "Tabla del " << numero << ":\n";
        for (int i = 1; i <= 10; i++) {
            cout << numero << " x " << i << " = " << numero * i << endl;
        }
    }
};



