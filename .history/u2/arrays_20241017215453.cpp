#include <iostream>

using namespace std;
// Arrayys
string food[] = {"Pizza", "Hamburguesa", "Pasta", "Sandwich"};
float prices[] = {19.00, 40.99, 10.99, 14.99};
int pieces[] = {0, 0, 0, 0};
int totalPerFood[] = {0, 0, 0, 0};

// ints and strings
int i = 0;
int quantity;
int foodSize = sizeof(food) / sizeof(food[0]);
bool flag = false;
string decision, foodChoice, quantityChoice = "s";

// functions
void getMenu()
{
    for (int i = 0; i <= foodSize - 1; i++)
    {

        cout << "Opción No." << i + 1 << " " << food[i] << "\n";
    }
}

int main()
{
    /*Pedir alimentos (Mas de uno),
    volver a solicitar mas unidades de alimentos y sumar las nuevas cantidades*/

    cout << "\n"
         << "Bienvenido al Delfestin" << endl;

    do
    {

        cout << "¿Deseas realizar un pedido? (s/n): ";

        cin >> decision;

        if (decision == "s")
        {
            cout << "Este es el menú" << endl;
            getMenu();
            cout << "¿Qué vas a ordernar?: ";
            cin >> foodChoice;
            cout << "\n";

            for (int i = 0; i < foodSize; i++)
            {
                if (food[i] == foodChoice)
                {
                    flag = true;
                    do
                    {
                        cout << "¿Cuántas unidades?: ";
                        cin >> quantity;
                        cout << "\n";

                        pieces[i] += quantity;
                        totalPerFood[i] = pieces[i] * prices[i];

                        cout << "¿Deseas pedir más unidades? (s/n): ";
                        cin >> quantityChoice;
                        cout << "\n";

                    } while (quantityChoice == "s");
                    
                }
            }
        }


    } while (decision == "s");

    cout << "Resumen de la cuenta: " << endl;
    for (int i = 0; i < foodSize; i++)
    {
        cout << food[i] << "= $" << prices[i] << "* = $" << totalPerFood[i] << endl;
    }

    return 0;
}