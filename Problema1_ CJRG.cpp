#include <iostream>
using namespace std;
class Empleado{
	private:
		//Atributos
		int ClaveEmpleado;
		string Nombre;
		string Domicilio;
		float Sueldo;
		string ReportaA;
	protected:
	public:
		//constructor
		Empleado(int C,string N,string D,float S,string R): ClaveEmpleado(C), Nombre(N), Domicilio(D), Sueldo(S), ReportaA(R){}
		//Metodos
		int busqueda(int clave){
			if(clave == ClaveEmpleado){
				return 1;
			}
			else{
				return 0;
			}
		}
		void imprime(){
			cout <<"Nombre del empleado: "<<Nombre<<"\n"<<"Domicilio: "<<Domicilio<<"\n"<<"Sueldo: "<<Sueldo <<"\n"<<"Reporto: "<<ReportaA <<"\n";
		}
		void cambiadomic(){
			string newdom;
			cout << "Ingresa el nuevo domicilio: ";
			cin >> newdom;
			Domicilio = newdom;
			cout << "Domicilio cambiado exitosamente\n"; 
		}
		void actualsueldo(){
			float newsuel;
			cout << "Ingresa el porcentaje de incremento para el actual sueldo (solo numeros): ";
			cin >> newsuel;
			newsuel = newsuel / 100;
			Sueldo = Sueldo*newsuel+Sueldo;
			cout << "Sueldo cambiado exitosamente\n"; 	
		}
		void cambiareportaA(){
			string newrep;
			cout << "Ingresa el nuevo nombre de quien reporta: ";
			cin >> newrep;
			ReportaA = newrep;
			cout << "Nombre de quien reporta cambiado exitosamente\n";
		}
};

void menu(){
	cout << "//BIENVENIDO AL REGISTRO DE EMPLEADOS//\n\n";
	cout << "1. Cambio de domicilio \n2. Actualizar sueldo de un empleado\n3. Imprimir los datos de un empleado\n4. Cambiar el nombre de la persona que reporta\n5. Terminar el programa\n\n";
	cout << "Ingresa el numero con la opcion deseada: ";	
}

int main(){
	int num,terminar = 0;
	int Encontrar;	
	Empleado JefePlanta(3112,"Christian","GDL",15000,"Juan");
	Empleado JefePersonal(3264,"Luis","Tlaquepaque",10000,"Christian");
	while(terminar == 0){
		bool confirmacion;
		menu();
		cin >> num;
		switch(num){
			case 1: 
				int clave;
				int bandera;
				bandera = 0;
				cout << "\nIngresa la clave: ";
				cin >> clave; 
				Encontrar = JefePlanta.busqueda(clave);
				if(Encontrar == 1){
					cout << "Clave encontrada exitosamente\n\n";
					JefePlanta.cambiadomic();
					bandera++;		
				}
				Encontrar = JefePersonal.busqueda(clave);
				if(Encontrar == 1){
					cout << "Clave encontrada exitosamente\n\n";
					JefePersonal.cambiadomic();	
					bandera++;	
				}
				if(bandera == 0){
					cout << "Clave no encontrada, regresando al menu....";
				}
				break;
			case 2:
				bandera = 0; 
				cout << "\nIngresa la clave: ";
				cin >> clave; 
				Encontrar = JefePlanta.busqueda(clave);
				if(Encontrar == 1){
					cout << "Clave encontrada exitosamente\n\n";
					JefePlanta.actualsueldo();
					bandera++;		
				}
				Encontrar = JefePersonal.busqueda(clave);
				if(Encontrar == 1){
					cout << "Clave encontrada exitosamente\n\n";
					JefePersonal.actualsueldo();
					bandera++;		
				}
				if(bandera == 0){
					cout << "Clave no encontrada, regresando al menu....";
				}
				break;
			case 3:
				bandera = 0; 
				cout << "\nIngresa la clave: ";
				cin >> clave; 
				Encontrar = JefePlanta.busqueda(clave);
				if(Encontrar == 1){
					cout << "Clave encontrada exitosamente\n\n";
					JefePlanta.imprime();
					bandera++;		
				}
				Encontrar = JefePersonal.busqueda(clave);
				if(Encontrar == 1){
					cout << "Clave encontrada exitosamente\n\n";
					JefePersonal.imprime();	
					bandera++;	
				}
				if(bandera == 0){
					cout << "Clave no encontrada, regresando al menu....";
				}
				break;
			case 4:
				bandera = 0; 
				cout << "\nIngresa la clave: ";
				cin >> clave; 
				Encontrar = JefePlanta.busqueda(clave);
				if(Encontrar == 1){
					cout << "Clave encontrada exitosamente\n\n";
					JefePlanta.cambiareportaA();
					bandera++;		
				}
				Encontrar = JefePersonal.busqueda(clave);
				if(Encontrar == 1){
					cout << "Clave encontrada exitosamente\n\n";
					JefePersonal.cambiareportaA();
					bandera++;		
				}
				if(bandera == 0){
					cout << "Clave no encontrada, regresando al menu....";
				}
				break;
			case 5:
				terminar = 1;
				cout << "Terminando el programa...."; break;
			default: cout<< "\nError ingresa un nuevo numero"; break;
		}
		cout << "\n\n";
	}
	return 0;
}
