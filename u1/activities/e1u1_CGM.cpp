//Siempre se debe incluir el archivo <stdio.h> en caso de C, en C++ es iostream
#include<stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
//Declariociones de variables
int age=0, ageLimit=100, remainingAge=0;
float height = 1.75;
//Método principal
int main(){
    //printf funcion para imprimir
    cout << "Introduce tu edad: ";
    cin >> age;
    system("pause");
    remainingAge = ageLimit - age;
    
    if (age >= 18){
        //Sintaxis C++
        cout << "Eres mayor de edad y tu edad es: " << age << endl;
        //Sintaxis C y especificadores de formato %d tipos enteros %f floats
        printf("Eres mayor de edad y tu edad es: %d. Te quedan %d años", age, remainingAge);
        printf("Tu estatura: %.2f", height);
    }else{
       cout << "Eres menor edad y tu edad es: " << age << endl;
       //Sintaxis C
        printf("Eres menor de edad y tu edad es: %d. Te quedan %d años", age, remainingAge);
    }
    //Sintaxis C++
    cout << "Tu edad restante es: " << remainingAge << endl;
    //Sintaxis C
    printf("Tu edad restante es: %d.", remainingAge);


    return 0;
}