/*
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados. 
Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. 
O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    double a, b, c;

    cin >> a >> b >> c;

    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << a*c/2 << endl;
    cout << "CIRCULO: " << c * c * 3.14159 << endl;
    cout << "TRAPEZIO: " << (a+b) * c / 2 << endl;
    cout << "QUADRADO: " << b * b << endl;
    cout << "RETANGULO: " << a * b << endl;

    return 0;
}