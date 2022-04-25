#include <iostream>

using namespace std;

int main(){
    int n;
    int cont = 0;
    int anterior = 0;

    cout << "Ingrese los numeros: ";
    do{
        anterior = n;
        cin >> n;
        cont++;
    }while(n > 0 && n == anterior+1);

    cout << "cantidad de numeros: " << cont << endl;

    cout << "Numero que corto la secunecia: " << n;
}
