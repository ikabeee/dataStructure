#include <stdio.h>

//Declaracion de variables
int value=50, secondValue=10;


//POr referencia

void passValueByReference(int *secondValue){ //NOTA los "*" son los punteros
    secondValue=300; //Second value valdra 300 en la variable original
    printf(<< "Valor modificado durante la funcion: ")  << secondValue << "\n";
}



//Por valor

void passArgumentByValue(int value){
    value=200; //New value solo valdra 200 en este scope
    cout << "Valor modificado durante la funcion: " << value << "\n";
}

int main(){

    //Demostracion pasar argumentos por valor
    cout << "PASAR ARGUMENTOS POR VALOR" << "\n" << "Valor antes de la funcion: " << value <<"\n";;
    passArgumentByValue(value);
    cout << "Valor despues de la funcion: "<< value << "\n \n";

    //Demostracion pasar argumentos por referencia
    cout << "PASAR ARGUMENTOS POR REFERENCIA" << "\n" << "Valor antes de la funcion: " << secondValue <<"\n";
    passValueByReference(secondValue);
    cout << "Valor despues de la funcion: " << secondValue << "\n";
   
    

    return 0;
}