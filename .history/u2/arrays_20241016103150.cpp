#include <iostream>

#define quantity 4 //Directiva. Tipo de constante

using namespace std;
string food[quantity]= {"Pizza", "Hamburguesa", "Pasta", "Boluñesa"};
float prices[quantity]={19.00, 40.99, 10.99, 14.99};
int inventory[quantity]={10,20,23,20};
int options[5]={1,2,3,4,5};

int main(){

    for(int i=0; i<=sizeof(food); i++){
        cout<<"";
    }

    return 0;
}