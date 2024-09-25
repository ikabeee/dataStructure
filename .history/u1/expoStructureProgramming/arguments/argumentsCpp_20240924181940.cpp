#include <iostream>
using namespace std;
//Declaracion de variables
int value=50, newValue=10;


//POr referencia

//Por valor

void modifyValue(int value){
    value=200; //New value solo valdra 200 en este scope
    cout << "Valor modificado durante la funcion" << value;
}

int main(){

    //Demostracion pasar argumentos por re
    cout<<"Introduce un numero: ";
    cin >> value;
    cout<<"Valor antes de la funcion: " << value<<"\n";
    modifyValue(value);
    cout<<"Valor despues de la funcion: "<<value<<"\n";
    

    return 0;
}