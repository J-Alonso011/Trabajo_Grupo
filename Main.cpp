//agregar el include para llamar a los programas 
//Agregar funcion para llamar a tus programas
#include<iostream>
#include "Programas Cv.cpp"
using namespace std;

bool esPrimo(int);
int contarDigitos(string);

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
		cout<<"17. Verificar si es Primo o no\n";
		cout<<"18. contar los digitos de un numero\n";
		cout<<"19. \n";
		cout<<"20. \n";
		cout<<"21. Salir\n";
		cout<<"Que necesitas el dia de Hoy?"<<endl;
		cin>> opcion;
		cin.ignore();
		
		
		switch (opcion){
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
		}
		
		
	}while (opcion != 21);
};

