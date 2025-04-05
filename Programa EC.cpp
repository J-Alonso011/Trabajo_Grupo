#include <iostream>
using namespace std;

class Operaciones {
private:
    double num1, num2;

public:
    Operaciones(double n1, double n2) {
        num1 = n1;
        num2 = n2;
    }
    void suma() {
        cout << "Suma: " << num1 + num2 << endl;
    }
    void resta() {
        cout << "Resta: " << num1 - num2 << endl;
    }
    void multiplicacion() {
        cout << "Multiplicacion: " << num1 * num2 << endl;
    }
    void division() {
        if (num2 != 0) {
            cout << "Division: " << num1 / num2 << endl;
        } else {
            cout << "Error: No se puede dividir entre cero:" << endl;
        }
    }
};

class ParImpar {
public:
    void verificarNumero() {
        int num;
        char continuar;  
        
        do {
            cout << "Ingresa un numero: ";
            cin >> num;
            if (num % 2 == 0) {
                cout << "El numero " << num << " es par." << endl;
            } else {
                cout << "El numero " << num << " es impar." << endl;
            }
            
            
            cout << "¿Quieres ingresar otro numero? (s/n): ";
            cin >> continuar;
            
        } while (continuar == 's' || continuar == 'S');  
    }
};

class Conversor {
public:
    
    void realizarConversion() {
        int opcion;
        double valor, resultado;

        do {
           
            cout << "Elige una opcion para realizar la conversion:" << endl;
            cout << "1. Kilometros a Millas" << endl;
            cout << "2. Metros a Pulgadas" << endl;
            cout << "3. Libras a Kilogramos" << endl;
            cout << "4. Kilogramos a Libras" << endl;
            cout << "5. Millas a Kilómetros" << endl;
            cout << "6. Pulgadas a Metros" << endl;
            cout << "7. Salir" << endl;
            cout << "Opcion: ";
            cin >> opcion;

            switch (opcion) {
                case 1: 
                    cout << "Ingresa la cantidad en kilometros: ";
                    cin >> valor;
                    resultado = valor * 0.621371;  // 1 km = 0.621371 millas
                    cout << valor << " kilometros son " << resultado << " millas." << endl;
                    break;

                case 2: 
                    cout << "Ingresa la cantidad en metros: ";
                    cin >> valor;
                    resultado = valor * 39.3701;  // 1 metro = 39.3701 pulgadas
                    cout << valor << " metros son " << resultado << " pulgadas." << endl;
                    break;

                case 3: 
                    cout << "Ingresa la cantidad en libras: ";
                    cin >> valor;
                    resultado = valor * 0.453592;  // 1 libra = 0.453592 kilogramos
                    cout << valor << " libras son " << resultado << " kilogramos." << endl;
                    break;

                case 4:
                    cout << "Ingresa la cantidad en kilogramos: ";
                    cin >> valor;
                    resultado = valor * 2.20462;  // 1 kilogramo = 2.20462 libras
                    cout << valor << " kilogramos son " << resultado << " libras." << endl;
                    break;

                case 5: 
                    cout << "Ingresa la cantidad en millas: ";
                    cin >> valor;
                    resultado = valor / 0.621371;  // 1 milla = 1 / 0.621371 kilómetros
                    cout << valor << " millas son " << resultado << " kilometros." << endl;
                    break;

                case 6: 
                    cout << "Ingresa la cantidad en pulgadas: ";
                    cin >> valor;
                    resultado = valor / 39.3701;  // 1 pulgada = 1 / 39.3701 metros
                    cout << valor << " pulgadas son " << resultado << " metros." << endl;
                    break;

                case 7: 
                    cout << "¡Hasta luego!" << endl;
                    break;

                default:
                    cout << "Opcion no valida, intenta de nuevo." << endl;
            }

            cout << endl; 
        } while (opcion != 7); 
    }
};

class Palindromo {
public:
    
    bool esPalindromo(string texto) {
        int inicio = 0;
        int fin = texto.length() - 1;

      
        while (inicio < fin) {
            if (texto[inicio] != texto[fin]) {
                return false;  
            }
            inicio++;
            fin--;
        }
        return true;  
    }

   
    bool esPalindromoNumero(int num) {
        int original = num;
        int invertido = 0;

        
        while (num > 0) {
            int digito = num % 10;
            invertido = invertido * 10 + digito;
            num /= 10;
        }

        return original == invertido;  
    }

    
    void verificar() {
        int opcion;
        cout << "Elige una opcion:\n";
        cout << "1. Verificar si una palabra es palindromo\n";
        cout << "2. Verificar si un numero es palindromo\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            string palabra;
            cout << "Ingresa una palabra: ";
            cin >> palabra;

            if (esPalindromo(palabra)) {
                cout << "La palabra \"" << palabra << "\" es un palindromo." << endl;
            } else {
                cout << "La palabra \"" << palabra << "\" no es un palindromo." << endl;
            }
        } else if (opcion == 2) {
            int numero;
            cout << "Ingresa un numero: ";
            cin >> numero;

            if (esPalindromoNumero(numero)) {
                cout << "El numero " << numero << " es un palindromo." << endl;
            } else {
                cout << "El numero " << numero << " no es un palindromo." << endl;
            }
        } else {
            cout << "Opcion no valida." << endl;
        }
    }
};
