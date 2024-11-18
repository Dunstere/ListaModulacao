#include <iostream>
#include <cmath>

using namespace std;

int fatprim(int N){

    int fat=1, i, sup1, sup2;

    i = N;

    for (int x = 0; x < N ; x++){

        for (int y = 0; y < N ; y++){

            sup1 = N % y;

            if( N % y == 0 ){

                sup2++;

            }

        }

        if ( sup2 == 2){

            fat *= i;
            i--;

        }

    }

    return fat;

}

int main(){

    int result, N, sup1, sup2;

    cout << "Informe o numero primo para o calculo da fatorial.\n";
    cin >> N;

    for (int y = 0; y < N ; y++){

        sup1 = N % y;

        if( N % y == 0 ){

            sup2++;

        }

    }

    if( sup2 != 2 ){

        cout << "Esse numero nao e um numero primo!";

    }

    result = fatprim(N);

    cout << "Resultado = " << result;
    

}