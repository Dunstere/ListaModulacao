#include <iostream>

using namespace std;

int fatorial(int N){

    int fat=1;

    for (int x = 1; x <= N ; x++){

        fat *= x;

    }

    return fat;
}

int main(){

    int result, N;

    cout << "Informe o numero para o calculo da fatorial.\n";
    cin >> N;

    if (N == 0 || N == 1){
        cout << "Resultado = 1";
    }
    else{
        result = fatorial(N);

        cout << "Resultado = " << result;
    }

}