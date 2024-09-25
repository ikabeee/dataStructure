#include <stdio.h>

//Declaracion de variables
int value=50, secondValue=10;


//Por valor

void passArgumentByValue(int value){
    value=200; //New value solo valdra 200 en este scope
    printf("Valor modificado durante la funcion: %d", value);
}

//POr referencia

void passValueByReference(int *secondValue){ //NOTA los "*" son los punteros
    *secondValue=300; //Second value valdra 300 en la variable original
    printf("Valor modificado durante la funcion: %d", secondValue);
}

int main(){

    //Demostracion pasar argumentos por valor
    printf("PASAR ARGUMENTO POR VALOR \n");
    printf("Valor ante de la funcion: %d\n", value);
    passArgumentByValue(value);
    printf("Valor despues de la funcion: %d\n", value);

    //Demostracion pasar argumentos por referencia
    printf("PASAR ARGUMENTO POR REFERENCIA \n");
    printf("Valor ante de la funcion: %d\n", secondValue);
    passArgumentByValue(value);
    printf("Valor despues de la funcion: %d\n", value);

    

    return 0;
}