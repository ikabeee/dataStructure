#include <iostream>

using namespace std;
// Arrayys
string food[] = {"Pizza", "Hamburguesa", "Pasta", "Sandwich"};
float prices[] = {19.00, 40.99, 10.99, 14.99};
int pieces[] = {0, 0, 0, 0};
int totalPerFood[] = {0,0,0,0};

// ints and strings
int counter = 0;
int quantity;
int foodSize = sizeof(food) / sizeof(food[0]);
// strings
string decision, foodChoice, quantityChoice="s";

// functions
void getMenu()
{
    for (int i = 0; i <= foodSize - 1; i++)
    {
        int j = 1;
        cout << "Opción No." << j << " " << food[i] << "\n";
        j++;
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

        cout << "Este es el menú" << endl;

        getMenu();

        cout << "¿Qué vas a ordernar?: ";
        cin >> foodChoice;

        while (food[counter] == foodChoice && quantityChoice=="s")
        {
            cout << "¿Cuántas unidades?: ";
            cin >> quantity;
            cout << "\n";
            
            pieces[counter] += quantity;
            totalPerFood[counter] = pieces[counter] * prices[counter];
            cout<<totalPerFood[counter]<<endl;
            cout<<"¿Deseas pedir más unidades? (s/n): ";
            cin>>quantityChoice;
            cout<<"\n";

        }
        quantityChoice="s";

    } while (decision == "s");

    return 0;
}