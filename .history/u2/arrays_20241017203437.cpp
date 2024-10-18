#include <iostream>

// Directiva. Tipo de constante

using namespace std;
string food[] = {"Pizza", "Hamburguesa", "Pasta", "Boluñesa"};
float prices[] = {19.00, 40.99, 10.99, 14.99};
int pieces[] = {};
int counter = 1;
int foodSize = sizeof(food) / sizeof(food[0]);
;
void getMenu()
{
    for (int i = 0; i <= foodSize - 1; i++)
    {
        cout << "Opción No." << counter << " " << food[i] << "\n";
        counter++;
    }
}

int main()
{
    /*Pedir alimentos (Mas de uno),
    volver a solicitar mas unidades de alimentos y sumar las nuevas cantidades*/

    cout << "\n"
         << "Bienvenido al Delfestin" << endl;

    cout << "Este es el menú" << endl;
    

    return 0;
}