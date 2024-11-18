#include <iostream>
#include <cmath>

using namespace std;

int fatimp(int N){

    int fat=1, y;

    y = N;

    for (int x = 0; x < N ; x = x + 2){

        fat *= y;
        y = y - 2;

    }

    return fat;

}

int main(){

    int result, N;

    cout << "Informe o numero impar para o calculo da fatorial.\n";
    cin >> N;

    if ( N%2 != 0 && N != 0){

        result = fatimp(N);

        cout << "Resultado = " << result;

    }
    if (N == 0 || N == 1){

        cout << "Resultado = 1";

    }
    if ( N%2 == 0 && N != 0){

        cout << "Numero invalido, informe um numero impar!";

    }
    

}