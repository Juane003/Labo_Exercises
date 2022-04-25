#include <iostream>

using namespace std;

int main(){
    const int p = 80;
    int z, t, n;

    do{
        cout << "Ingrese la cantidad de zapatos: ";
        cin >> z;
    } while(z <= 0);

    n = p *z;

    if(z < 10){
        t = p * z;
    }
    else if (z < 20){
        t = n * 0.9;
    }
    else if(z <= 30){
        t = n * 0.8;
    }
    else{
        t = n * 0.6;
    }

    if(z > 10){
        cout << "El precio total sin descuento es: " << n << endl;
        cout << "El precio total con descuento es: " << t << endl;
    }
    else {
        cout << "El precio total es: " << n << endl;
    }

    return 0;
}
