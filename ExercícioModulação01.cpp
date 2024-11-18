#include <iostream>

using namespace std;

// Função criada para fazer a soma dos dois valores inteiros "na" e "nb"
int somar (int na, int nb){
	
	int result = na + nb;
	
	return result;
	
}

int main (){
	
	//na e nb são dois numeros inteiros onde som é a soma de ambos
	int na, nb, som;
	
	cout << "Informe dois valores inteiros !\n";
	cin >> na >> nb;
	
	// É usado o nome da função com suas variáveis para chamar a função e executar sua função
	som = somar(na, nb);
	
	cout << "O valor da soma dos N = " << som << endl;
	
}
