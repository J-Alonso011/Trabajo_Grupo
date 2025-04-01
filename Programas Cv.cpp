#include <iostream>
using namespace std;

//Verificar si es Primo o no 
bool esPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
};

//contar los digitos de un numero.
int contarDigitos(string num) {
    if (num[0] == '-') {
        return num.length() - 1; // Restamos 1 si hay un signo negativo
    }
    return num.length();
}





