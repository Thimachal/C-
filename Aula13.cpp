#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
    int val;

    cout << "Digite: (1)Carro (2)Moto (3) Aviao (4) Helicoptero  ";
    cin >> val;

    switch (val){
    case 1:
    case 2:
         cout << "\nVeiculo Terrestre\n";
            switch(val){
            case 1:
                 cout << "\nEscolhido carro\n";
            break;
            case 2:
                 cout << "\nEscolhido moto\n";
            break;
            }
    break;
    case 3:
    case 4:
         cout <<"\n Veiculo Aereo\n";
            switch (val){
            case 3:
                cout <<"\n Veiculo escolhido Aviao\n";
            break;
            case 4:
                cout <<"\n Veiculo escolhido Helicoptero\n";
            break;
            }
    break;

    default:
         cout <<"\nValor invalido, tchau\n";
    }

    cout <<"\n\nPrograma Encerrado\n\n";

return 0;
}

