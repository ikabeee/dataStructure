#include <iostream>
using namespace std;
//Declaracion de variables
int value=50, secondValue=10;


//POr referencia

void passValueByReference(int &secondValue){
    secondValue=300; //Second value valdra 300 en la variable original
    cout << "Valor modificado durante la funcion" << secondValue << "\n";
}



//Por valor

void passArgumentByValue(int value){
    value=200; //New value solo valdra 200 en este scope
    cout << "Valor modificado durante la funcion" << value << "\n";
}

int main(){

    //Demostracion pasar argumentos por valor
    cout << "Pasar argumentos por valor" << "\n" << "Valor antes de la funcion: " << value <<"\n";;
    passArgumentByValue(value);
    cout << "Valor despues de la funcion: "<< value <<"\n";

    //Demostracion pasar argumentos por referencia
    cout << "Pasar argumento por referencia" << "\n" << "Valor antes de la funcion: " << ;
   
    

    return 0;
}