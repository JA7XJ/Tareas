//declaracion e inicializacion de arreglos
//prototipos de funciones
//sobrecarga de funciones
//introduccion a parámetros por valor y por referencia

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<string>
using std::string;

//prototipo de función
void printArray(char[],int);
//función que imprime un arreglo de Strings
void printArray(string[],int);
//funcion foo
void foo(int&);
int main(){
  	//declaracion e inicializacion de arreglos
  	//opcion1:como lo hicimos el martes
  	//opcion2:declarar e inicializar con valores al mismo tiempo
  	char arreglo[] = {'A','b','c','d','e','f'};
	//llamar funcion printArray
	printArray(arreglo,6);
	string days[] = {"Lunes","Martes","Miercoles","Jueves"};
	//llamar funcion printArray
	printArray(days,4);
	//opcion3:inicializar en memoria dinámica con un 'new'
//	int* intPtr = new int[10];
//	par+ametros por valor y referencia
	int size=10;
	foo(size);
	cout<<"El valor de size es: "<<size<<endl;
	return 0;
}
//foo
void foo(int& num){
	cout<<"El numero es: "<<num<<endl;
	num=7;
	cout<<"El numero ahora es: "<<num<<endl;
}
//imprimir arreglo de chars
void printArray(char arreglo[], int size){
	cout<<"Arreglo de chars: "<<endl;
	for(int i=0;i<size;i++)
		cout<<" "<<arreglo[i];
	cout<<endl;
}
//imprimir arreglo de strings
void printArray(string arreglo[],int size){
	cout<<"Arreglo de strings: "<<endl;
	for(int i=0;i<size;i++)
		cout<<" "<<arreglo[i];
	cout<<endl;
}
