#include <iostream>

using namespace std;

float maiorSal(float sal1, float sal2){
	
	float maior;
	
	if (sal1 > sal2){
		return sal1;
	}
	else {
		return sal2;
	}
	
}

int main (){
	
	float sal1, sal2, result;
	
	cout << "Informe o primeiro salario:\n";
	cin >> sal1;
	cout << "Informe o segundo salario:\n";
	cin >> sal2;
	
	result = maiorSal(sal1, sal2);
	
	printf("O maior salario e %.2lf", result);
}
