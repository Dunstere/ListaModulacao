#include <iostream>

using namespace std;

int somatoria(int N){

    int x=1, soma=0;

    while (x <= N){
        soma += x;
        x = x + 1;
    }

    return soma;
}

int main(){

    int result, N;

    cout << "Informe ate quantos numeros voce quer somar, comecando de 1\n";
    cin >> N;
    result = somatoria(N);

    cout << "Resultado = " << result;

}