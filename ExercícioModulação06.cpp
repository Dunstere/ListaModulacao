#include <iostream>

using namespace std;

float media(float n1, float n2){

    float mf;

    mf = ( n1 + n2 )/2;

    return mf;

}

int main (){

    int y = 0;
    float result, n1, n2;

    while ( y < 10 )
    {
        cout << "Informe as notas N1 e N2 do aluno " << y + 1 << endl;
        cin >> n1 >> n2;
        
        result = media(n1, n2);
        printf("Media Final: %.1f\n", result);

        y++;
    }

}