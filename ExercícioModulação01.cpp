#include <iostream>

using namespace std;

// Fun��o criada para fazer a soma dos dois valores inteiros "na" e "nb"
int somar (int na, int nb){
	
	int result = na + nb;
	
	return result;
	
}

int main (){
	
	//na e nb s�o dois numeros inteiros onde som � a soma de ambos
	int na, nb, som;
	
	cout << "Informe dois valores inteiros !\n";
	cin >> na >> nb;
	
	// � usado o nome da fun��o com suas vari�veis para chamar a fun��o e executar sua fun��o
	som = somar(na, nb);
	
	cout << "O valor da soma dos N = " << som << endl;
	
}
