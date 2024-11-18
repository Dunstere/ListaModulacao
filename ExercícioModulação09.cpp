#include <iostream>

using namespace std;

float combinacao(int N, int k){

    float fat1=1, fat2=1, fat3=1, comb, sub;

    for (int x = 1; x <= N ; x++){

        fat1 *= x;

    }
    for (int x = 1; x <= k ; x++){

        fat2 *= x;

    }

    sub = N - k;

    for (int x = 1; x <= sub ; x++){

        fat3 *= x;

    }

    comb = fat1 / (fat2*fat3);

    return comb;

}

int main(){

    int N, k;
    float result;

    cout << "Obs.: O primeiro valor deve ser maior que o segundo !\n\n";
    cout << "Informe o primeiro valor!\n";
    cin >> N;
    cout << "Informe o segundo valor!\n";
    cin >> k;

    if ( k > N ){

        cout << "Erro! O segundo valor é maior que o primeiro.\n";

    }
    else{

       result = combinacao(N, k);

        printf("Resultado = %.2lf\n", result); 

    }

}