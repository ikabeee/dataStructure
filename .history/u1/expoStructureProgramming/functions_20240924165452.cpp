#include <iostream>
using namespace std;
string carNames[5]={"Corolla", "Chevy", "Tsuru", "Cordoba", "Toledo"};
string car="";
string carSelected="";
bool flag=false;
int indexCounter=0;

void showCars(){
    //Equivalente de un foreach
    for(string i : carNames) {
        cout<<i<<"\n";
    }
}

string selectCar (string car) {
    while(flag==false && indexCounter <= sizeof(carNames)){
        if(carNames[indexCounter]==car){
            carSelected=carNames[indexCounter];
            flag=true;
        }
        indexCounter++;
    }
    return carSelected;
}


int main(){
    cout<<"Modelos Disponibles: "<<"\n";
    showCars();
    cout<<"Selecciona un carro: ";
    cin>>car;
    selectCar(car);
    cout << "Haz seleccionado el siguiente modelo: ";
    cout << carSelected;

    return 0;
}