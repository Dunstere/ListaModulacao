#include <iostream>

using namespace std;

int kesimodigito( int k, int n){

    int num[], count, x = 0, dez = 10;

    do
    {

        num[x] = n % 10;


    } while ( count != 1 );
    

}

int main (){

    int n, k, result;

    cout << "Informe um numero inteiro!\n";
    cin >> n;
    cout << "Informe o K_ésimo digito que queira.\n";
    cin >> k;

    result = kesimodigito(k, n);
}