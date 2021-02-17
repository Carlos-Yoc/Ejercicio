#include "Empleado.cpp"
#include <iostream>
using namespace std;

main(){

	string nombres,apellidos,direccion,cargo;

	int telefono,salario,codigo_empleado;

    cout<<"Ingrese Nombres: ";

	cin>>nombres;

	cout<<"Ingrese Apellidos: ";

	cin>>apellidos;

	cout<<"Ingrese Direccion: ";

	cin>>direccion;

	cout<<"Ingrese Telefono: ";

	cin>>telefono;

	cout<<"Ingrese salario: ";

	cin>>salario;

	
	cout<<"Ingrese codigo del empleado: ";

	cin>>codigo_empleado;
	
	cout<<"Ingrese cargo: ";

	cin>>cargo;

	Empleado obj = Empleado (nombres,apellidos,direccion,telefono,salario,codigo_empleado,cargo);

	obj.mostrar();

}
