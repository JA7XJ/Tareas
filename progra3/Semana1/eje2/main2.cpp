///Imprimir un menu que pida el tamaño del arreglo, imprime el contenido del arreglo, sale del programa

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//uso de funciones
int menu(){
   int retval=0;
   while(retval==0){
      cout<<"            MENU"<<endl
	  <<"1 Leer tamaño del arreglo"<<endl
          <<"2 Imprimir el arreglo"<<endl
          <<"3 Salir"<<endl
          <<"Ingrese una opción: ";
      cin>>retval;
      if(retval <1 || retval>3){
      	  retval=0;
	  cout<<"Opcion incorrecto, intente de nuevo."<<endl;
      }	      
   }
   return retval;   
}

int main(){
  int opcion=0;
  int size=0;
  do{
     switch(opcion=menu()){
       case 1:
	 cout<<"Ingrese el tamaño del arreglo: ";
         cin>>size;
         break;
       case 2:
	 if(size<=0){
	   cout<<"El tamaño elegido no es correcto."<<endl;
	 }else{
	   char arreglo[size];
	   for(int i=0;i<size;i++){
	     arreglo[i]=64+i;
	   }
	   cout<<"Los datos del arreglo son: "<<endl;
	   for(int i=0;i<size;i++){
	     cout<<" "<<arreglo[i];
	   }
	   cout<<endl;
	 }
	 break;
       case 3:
	 cout<<"Gracias :3"<<endl;
	 break;
     }	     
  }while(opcion!=3);
  return 0;	     
}
