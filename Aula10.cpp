#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main (){

    int n1, n2, res;
    char opc;

    inicio:
    system ("cls");

    cout <<"Digite a nota 1: ";
    cin >> n1;
    cout <<"\nDigite a nota 2: ";
    cin >> n2;

    res=n1+n2;

    if (res >= 60){

        cout << "Nota "<< res <<"----Aprovado----\n";

    }else if (res >=40){

        cout << "Nota" << res <<" Vai para reco reco\n";

    }else{

        cout << "Nota" << res <<" Repita de ano\n";

    }

    cout <<"\n\nDeseja digitar outras notas?\n";
    cin >>opc;
    if (opc == 's' or opc =='S'){
        goto inicio;
    }

return 0;
}
