#include <iostream>
#include <cstring>

// Directiva. Tipo de constante

using namespace std;
//Arrayys
string food[] = {"Pizza", "Hamburguesa", "Pasta", "Boluñesa"};
float prices[] = {19.00, 40.99, 10.99, 14.99};
//ints and floats
int pieces[] = {};
int counter = 1;
int foodSize = sizeof(food) / sizeof(food[0]);
//strings
string decision;
//functions
void getMenu()
{
    for (int i = 0; i <= foodSize - 1; i++)
    {
        cout << "Opción No." << counter << " " << food[i] << "\n";
        counter++;
    }
}
string getLower(decision){
    putchar(tolower)
}
int main()
{
    /*Pedir alimentos (Mas de uno),
    volver a solicitar mas unidades de alimentos y sumar las nuevas cantidades*/

    cout << "\n"
         << "Bienvenido al Delfestin" << endl;

    cout << "Este es el menú" << endl;

    getMenu();

    do{
            cout << "¿Deseas realizar un pedido?: ";
 
            cin >> decision;

            putchar(tolower(decision));
    }


    return 0;
}