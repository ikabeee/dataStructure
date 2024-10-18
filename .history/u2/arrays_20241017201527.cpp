#include <iostream>

#define quantity 4 //Directiva. Tipo de constante

using namespace std;
string food[quantity]= {"Pizza", "Hamburguesa", "Pasta", "Boluñesa"};
float prices[quantity]={19.00, 40.99, 10.99, 14.99};
int pieces[quantity]={0,0,0,0};
int options[5]={1,2,3,4,5};
int counter=0;
int main(){
    /*Pedir alimentos (Mas de uno),
    volver a solicitar mas unidades de alimentos y sumar las nuevas cantidades*/
    cout<<"Bienvenido al Delfestin"<<endl;
    cout<<"Este es el menú"<<endl;
    for(int i=0; i<=sizeof(food); i++){
        counter=1;
        cout<< "No. " << counter << endl << food[i];
        counter++;
    }
 

    return 0;
}