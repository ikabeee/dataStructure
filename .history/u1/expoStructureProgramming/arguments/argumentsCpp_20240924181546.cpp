#include <iostream>
using namespace std;
//Declaracion de variables
int userValue=50, newValue=10;


//POr referencia
int modifyValue(int userValue){
    newValue=200; //New value solo valdra 200 en este scope
}
//Por valor

int main(){
    cout<<"Introduce un numero: ";
    cin >> userValue;


    return 0;
}