#include <iostream>

using namespace std;

float soma(float n1, float n2){
	float result = n1 + n2;
	return result;
}
float sub(float n1, float n2){
	float result = n1 - n2;
	return result;
}
float mult(float n1, float n2){
	float result = n1 * n2;
	return result;
}
float div(float n1, float n2){
	float result = n1 / n2;
	return result; 
}

int main (){

	int x;
	float n1, n2;

	cout << "Escolha o numero da operação desejada:\n1.Soma\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n";
	cin >> x;
	cout << "Agora informe os numeros desejados\n(Em caso de Subtracao ou Divisao saiba que o primeiro numero digitado vira primeiro, exemplo: 12 e 24 / 12-24 = -12)\n";
	cin >> n1 >> n2;

	if (x == 1){
		cout << "Resultado = " << soma(n1, n2);
	}
	if (x == 2){
		cout << "Resultado = " << sub(n1, n2);
	}
	if (x == 3){
		cout << "Resultado = " << mult(n1, n2);
	}
	if (x == 4){
		cout << "Resultado = " << div(n1, n2);
	}
}
