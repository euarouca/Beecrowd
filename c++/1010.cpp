/*
Neste problema, deve-se ler o código de uma peça 1, 
o número de peças 1, 
o valor unitário de cada peça 1, 
o código de uma peça 2, 
o número de peças 2 
o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

Entrada
O arquivo de entrada contém duas linhas de dados. 
Em cada linha haverá 3 valores, respectivamente dois inteiros e um valor com 2 casas decimais.

Saída
A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo
lembrando de deixar um espaço após os dois pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int codigo_p1, num_p1, codigo_p2, num_p2;
    double valor_p1, valor_p2, valor_total;

    cin >> codigo_p1 >> num_p1 >> valor_p1;
    cin >> codigo_p2 >> num_p2 >> valor_p2;

    valor_total = (num_p1 * valor_p1) + (num_p2 * valor_p2);

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << valor_total << endl;


    return 0;
}