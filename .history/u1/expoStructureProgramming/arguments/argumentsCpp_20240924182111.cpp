#include <iostream>
using namespace std;
//Declaracion de variables
int value=50, secondValue=10;


//POr referencia

void passValueByReference(int secondValue)

//Por valor

void passArgumentByValue(int value){
    value=200; //New value solo valdra 200 en este scope
    cout << "Valor modificado durante la funcion" << value << "\n";
}

int main(){

    //Demostracion pasar argumentos por valor
    cout<<"Introduce un numero: ";
    cin >> value;
    cout<<"Valor antes de la funcion: " << value<<"\n";
    passArgumentByValue(value);
    cout<<"Valor despues de la funcion: "<<value<<"\n";
    

    return 0;
}