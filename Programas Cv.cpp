#include <iostream>
#include <sstream>
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
};

//contar las palabras de una frase .
int contarPalabras(string frase){
	stringstream ss(frase);
	string palabra;
	int contador = 0;
	
	while (ss>>palabra){
		contador++;
	}
	return contador;
};

//Calcular el MCD de dos numeros
int encontrarMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}






