#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int n1,n2; //variaveis globais


int main(){
 //operdores matemáticos; + - / * %

 int n3,n4;//variaveis locais
 int res1, res2;

 n1=11;
 n2=3;
 n3=5;
 n4=2;

 res1=n1/n2;
 res2=n1%n2;

 cout <<"Resultado da operacao: "<<res1;
 cout <<"\nResultado da operacao: "<<res2;



return 0;
}
