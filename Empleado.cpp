#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona  {
	//atribiutos 
	private :int codigo_empleado;
	private : int salario;
	private :string cargo; 
	
	//costructor
     public :
	Empleado(){
	}
Empleado(string nom,string ape,string dir,int tel,int sal,int coem,string car) : Persona(nom,ape,dir,tel){ 
salario = sal;
codigo_empleado=coem;
cargo= car;
 }
void setsalario(int sal){salario = sal;}
void setcodigo_Empleado(int coem){codigo_empleado = coem;}
void setcargo(string car){cargo = car;}

void setNombres(string nom){nombres= nom;}
void setApellidos(string ape){apellidos= ape;}
void setDireccion(string dir){direccion= dir;}
void setTelefono(int tel){telefono= tel;}
//get mostrar 

int getSalario(){return salario;}
int getCodigo_empleado(){return codigo_empleado;}
string getcargo(){return cargo;}
string getNombres(){return nombres;}
string getApellidos(){return apellidos;}
string getDireccion(){return direccion ;}
void mostrar(){

	cout<<"______________________"<<endl;

	cout<<salario<<","<<codigo_empleado<<","<<cargo<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
}
};
