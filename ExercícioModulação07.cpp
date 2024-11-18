#include <iostream>

using namespace std;

int glicose(int valor){


    if ( valor <= 100){
        cout << "Glicose em classificacao Normal.";
    }
    if ( valor > 100 && valor <= 140 ){
        cout << "Glicase em classificacao Elevada.";
    }
    if ( valor > 140 ){
        cout << "Glicose muito elevada! Classificacao: Diabetes !!";
    }

}

int main(){

    int valor;

    cout << "Informe o valor da glicose em mg/dl\n";
    cin >> valor;

    glicose(valor);
    //Perguntar soluções;

}