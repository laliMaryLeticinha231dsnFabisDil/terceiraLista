
 /* int main() {
	int idade;
	cout << "Qual sua idade? ";
	cin >> idade;
	cout << idade;*/
	
		/*> maior
		< menor
		>= maior ou igual
		<= menor ou igual
		== igual
		!= diferente*/
#include <iostream>
using namespace std;

int main() {


    //EXERCICIO 1


   /* int numero1;
    int numero2;

    // Solicita ao usuário que informe os dois números
    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;

    // Verifica se o primeiro número é maior que o segundo
    if (numero1 > numero2) {
        cout << "O primeiro numero e maior.";
    }
    // Verifica se o segundo número é maior que o primeiro
    else if (numero2 > numero1) {
        cout << "O segundo numero e maior.";
    }
    // Se não, os números são iguais
    else {
        cout << "Os numeros sao iguais.";
    }

    return 0;*/





    //EXERCICIO 2

   /* int EstoqueProduto;
    int resposta;
    cout << "informe a quantidade de produto: ";
    cin >> resposta;
    if (resposta >= 100) {
        cout << "Quantidade suficiente no estoque ";
    }
    else if (resposta >= 50) {
        cout << "Atencao ao estoque";
    }
    else {
        cout << "Faca um novo pedido e reabasteca o estoque";
    };

return 0;
}*/

//EXERCICIO 3

    int numero;
    int resposta;
    cout << "informe um numero ";
    cin >> resposta;
    if(resposta > 0) {
        cout << " o numero e positivo";
    }
    else if(resposta < 0) {
        cout << " O numero e negativo";
    }
    else {
        cout << "o numero e igual a zero";
    }
    return 0;
}