#include <iostream>
using namespace std;
int a=0,b=0,result=0;
//Funcion retornando void
void printInformation(){
    cout << "Nombre: Carlos" << "\n";
}
//Funcion retornando un valor tipo entero
int sumNumbers(int a, int b){
    return a+b;
}

int main(){
    cout << "RESULTADO DE LA FUNCION TIPO VOID: ";
    printInformation();
    
    //Guardamos el valor en una variable
    result=sumNumbers

    return 0;
}