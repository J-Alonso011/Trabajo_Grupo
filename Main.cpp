//agregar el include para llamar a los programas 
//Agregar funcion para llamar a tus programas
#include<iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h> 
#include <cmath>
#include "Programas Cv.cpp"
#include "ProgramasJA.cpp"
#include "Programa EC.cpp"
#include "Programa PB.cpp"


using namespace std;

bool esPrimo(int);
int contarDigitos(string);
int contarPalabras(string);


//No tocar este Void es para esperar para regresar al menu 
void esperarTecla() {
	cout << "\n___________________________________";
    cout << "\nPresiona Enter para continuar...";
    cin.ignore();  
    cin.get(); 
}

main(){
	
	int opcion;
	
	do{
		cout<<"\n Menu \n";
		cout<<"1. Suma, Resta, Multiplicacion, division de dos numeros\n";
		cout<<"2. Determinar si es par o impar\n";
		cout<<"3. Conversor\n";
		cout<<"4. Determinar si una palabra o un numero es palindromo\n";
		cout<<"5. Convertir a numero romano (1 a 1000)\n";
		cout<<"6. Convertir numero a letras enteros\n";
		cout<<"7. Convertir numero a letras en decimal\n";
		cout<<"8. Mostrar tabla de multiplicar\n";
		cout<<"13. Crear figuras geometricas basicas\n";
		cout<<"14. Mover un punto en toda la pantalla\n";
		cout<<"15. Simulacion de un Cajero\n";
		cout<<"16. Calcular la Hipotenusa\n";
		cout<<"17. Verificar si es Primo o no\n";
		cout<<"18. Contar los Digitos de un Numero\n";
		cout<<"19. Contar las Palabras de una Frase\n";
		cout<<"20. Calcular el MCD \n";
		cout<<"21. Salir\n";
		cout<<"¿Que necesitas el dia de Hoy?"<<endl;
		cin>> opcion;
		cin.ignore();
		
		
		switch (opcion){
			
			case 1:{
				double num1, num2;
                cout << "Ingresa el Primer Numero: ";
                cin >> num1;
                cout << "Ingresa el Segundo Numero: ";
                cin >> num2;
                Operaciones operaciones(num1, num2);
                operaciones.suma();
                operaciones.resta();
                operaciones.multiplicacion();
                operaciones.division();
                esperarTecla();
				break;
			}
			case 2:{			
                ParImpar pi;
                pi.verificarNumero();
                esperarTecla();
				break;
			}
			case 3:{
                Conversor conversor;
                conversor.realizarConversion();
                esperarTecla();
				break;
			}
			case 4:{
                Palindromo p;
                p.verificar();
                esperarTecla();
				break;
			}
			case 5:{
				Romanos r;
                r.convertirARomano();
                esperarTecla();
                break;
			}
			case 6:{
				NumeroEntero enteroConverter;
                int numero;
                cout << "Ingresa el numero entero: ";
                cin >> numero;
                cout << "En letras: " << enteroConverter.convertirEntero(numero) << endl;
                esperarTecla();
				break;
			}
			case 7:{
				NumeroDecimal decimalConverter;
                double numero;
                cout << "Ingresa el numero decimal: ";
                cin >> numero;
                cout << "En letras: " << decimalConverter.convertirDecimal(numero) << endl;
                esperarTecla();
				break;
			}
			case 8:{	  
    			TablaMultiplicar tm;
                tm.mostrarTabla();
                esperarTecla();
				break;
			}
			case 13:{
			 cout << "Cuadrado:" << endl;
             cuadrado();
             cout << "Triangulo:" << endl;
             triangulo();
             cout << "Circulo:" << endl;
             circulo();
				break;
			}
			
		    case 14:{
		    	 while (true) {
        system("cls");
        
        for (int i = 0; i < ALTO; i++) {
            for (int j = 0; j < ANCHO; j++) {
                if (i == posicion_y && j == posicion_x)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
        
        Sleep(100);
        
        posicion_x += direccion_x;
        posicion_y += direccion_y;   
        if (posicion_x >= ANCHO - 1 || posicion_x <= 0) direccion_x *= -1;
        if (posicion_y >= ALTO - 1 || posicion_y <= 0) direccion_y *= -1;
    }
				break;
			}
		    case 15:{
		    	cout << "Bienvenido Usuario (el pin es: 1234 )" << endl;
    
    while (intentos > 0) {
        cout << "Ingrese su PIN: ";
        cin >> pinIngresado;
        
        if (cajero.verificarPin(pinIngresado)) {
            int opcion;
            do {
                cout << "Por Favor Elige una Opcion:" << endl;
                cout << "1. Consultar saldo" << endl;
                cout << "2. Depositar dinero" << endl;
                cout << "3. Retirar dinero" << endl;
                cout << "4. Salir" << endl;
                cout << "Opcion: ";
                cin >> opcion;
                
                switch (opcion) {
                    case 1:
                        cajero.mostrarSaldo();
                        break;
                    case 2:
                        double deposito;
                        cout << "Ingrese la cantidad a depositar: ";
                        cin >> deposito;
                        cajero.depositar(deposito);
                        break;
                    case 3:
                        double retiro;
                        cout << "Ingrese la cantidad a retirar: ";
                        cin >> retiro;
                        cajero.retirar(retiro);
                        break;
                    case 4:
                        cout << "Gracias por usar el cajero ." << endl;
                        break;
                    default:
                        cout << "Opcion no valida." << endl;
                }
            } while (opcion != 4);
            break;
        } else {
            intentos--;
            cout << "PIN incorrecto. Intentos restantes: " << intentos << endl;
        }
    }
    
    if (intentos == 0) {
        cout << "Cuenta bloqueada intentos agotados :(." << endl;
        cout << "Por favor comunicate con tu banco para desbloquear tu cuenta" << endl;
    }
				break;
			}
			case 16:{
				cout << "Ingresa el valor del primer cateto: ";
                cin >> cat1;
                cout << "Ingresa el valor del segundo cateto: ";
                cin >> cat2;
                hip = sqrt(pow(cat1, 2) + pow(cat2, 2));
                cout << "El valor de tu hipotenusa es: " << hip << endl;
				break;
			}
			case 17:{
				int num;
				cout<< "Introduce un Numero:";
				cin>> num;
				cout<< num << (esPrimo(num) ? " Es primo.\n" : "No es primo");
				esperarTecla();
				break;
			}
			case 18: {
				string num;
                cout << "Introduce un numero: ";
                cin >> num;
                cout << "El numero tiene " << contarDigitos(num) << " digitos.\n";
                esperarTecla(); 
				break;
			}
			case 19 : {
				string frase;
                cout << "Introduce una frase: ";
                getline(cin, frase);
                int cantidad = contarPalabras(frase);
                cout << "La frase tiene " << cantidad << " palabra/s.\n";
                esperarTecla();
				break;
			}
			case 20 : {
				int a, b;
                cout << "Introduce el primer número: ";
                cin >> a;
                cout << "Introduce el segundo número: ";
                cin >> b;

                int resultado = encontrarMCD(a, b);
                cout << "El MCD de " << a << " y " << b << " es: " << resultado << "\n";
                esperarTecla();
				break;
			}
		}
		
		
	}while (opcion != 21);
};



