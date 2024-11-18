#include <iostream>
#include <cmath>

using namespace std;

float peso(float kg, float m){

    float imc;

    imc = kg / pow(m, 2);

    printf("IMC = %.2lf\n", imc);

}

int main(){

    float kg, m;

    cout << "Informe seu peso em KG:\n";
    cin >> kg;
    cout << "Informe sua altura em metros:\n";
    cin >> m;

    peso(kg, m);

}