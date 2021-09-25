#include <iostream>
using namespace std;
int main (){
    int x=0,vetor[5];//vetor [tam], tam=5; para usar 3º opção do for

    vetor [0]=10;
    vetor [1]=20;
    vetor [2]=30;
    vetor [3]=40;
    vetor [4]=50;

    for (x; x<5 ; x++){
        cout << vetor [x] << "\n";
    }


    /* for (x; x<sizeof(vetor)/4 ; x++){ //outra opção de delimitar o for
        cout << vetor [x] << "\n";
    }*/

    /* for (x; x < vetor[tam] ; x++){ //3º opção do for
        cout << vetor [x] << "\n";
    }*/


return 0;
}
