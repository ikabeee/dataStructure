#include <iostream>
using namespace std;
//Declaracion de variables
int originalValue=50, newValue=10;


//POr referencia
int modifyValue(int originalValue){
    newValue=200; //New value solo valdra 200 en este scope
}
//Por valor

int main(){


    return 0;
}