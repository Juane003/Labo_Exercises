#include <iostream>
#include <ctime>

using namespace std;

int main(){
    int o;
    char nombre[50];

    do{
        cout << "Ingrese una de las 4 opciones: ";
        cin >> o;
    }while(o < 0 && o > 4);

    switch(o){
        case 1:
            cout << "Ingrese su nombre: ";
            cin >> nombre;
            cout << "Bienvenido " << nombre;
            break;
        case 2:
            cout << "La fecha de hoy es: 20/04/2022";
            break;
        case 3:
            cout << "programa finalizado";
    }
    return 0;
}
