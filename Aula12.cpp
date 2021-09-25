#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main (){

    int n1, n2, nota;
    string res;

    cout <<"Digite valor 1: ";
    cin >> n1;
      cout <<"\nDigite valor 2: ";
    cin >> n2;

    nota=n1+n2;

    (nota >= 60) ? res="Aprovado" : res="Reprovado";//operador ternario
    res=(nota >=60 ) ? "Aprovado" : "Reprovado";//opção 2 op. ternaio

    cout << "Situação do ALuno \n" << res;






return 0;
}
