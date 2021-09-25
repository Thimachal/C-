#include <iostream>
using namespace std;
int main (){
    int l, c, matriz[3][4];


    for (l=0; l<3 ; l++){
        for(c=0; c<4; c++){

            cout << matriz [l][c] << " ";
        }
        cout << "\n";
    }






    /* for (x; x<sizeof(vetor)/4 ; x++){ //outra opção de delimitar o for
        cout << vetor [x] << "\n";
    }*/

    /* for (x; x < vetor[tam] ; x++){ //3º opção do for
        cout << vetor [x] << "\n";
    }*/


return 0;
}
