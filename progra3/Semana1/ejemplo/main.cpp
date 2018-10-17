#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
  int num;
  int c=0;
  while(c==0){  
    cout<<"Ingrese un número: ";
    cin>>num;
    cout<<"------------------------------------"<<endl;
    while(num<=0){
       cout<<"Error, ingrese un número: ";
       cout<<"--------------------------------------"<<endl;
       cin>>num;
    }
    for(int i=1;i<=num;i++){
       cout<<"Numero:"<<i<<endl;
    }
    cout<<"------------------------------------"<<endl;
    cout<<"¿Desea ingresar otra vez?[0/1]:";
    cin>>c;
  }  
  return 0;
}
