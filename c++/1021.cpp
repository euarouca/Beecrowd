#include <iostream>
#include <cmath>  // Para usar a função round

using namespace std;

int main(){
    float n;
    int notas, moedas;

    cin >> n;

    notas = int(n); // parte inteira de n 
    moedas = (int) round((n-notas) * 100);

    cout << "NOTAS:" << endl;
    // notas de 100
    cout << notas / 100 << " nota(s) de R$ 100.00" << endl;
    notas =  notas % 100;
    // notas de 50
    cout << notas / 50 << " nota(s) de R$ 50.00" << endl;
    notas =  notas % 50;
    // notas de 20
    cout << notas / 20 << " nota(s) de R$ 20.00" <<  endl;
    notas =  notas % 20;
    // notas de 10
    cout << notas / 10 << " nota(s) de R$ 10.00" <<  endl;
    notas =  notas % 10;
    // notas de 5
    cout << notas / 5 << " nota(s) de R$ 5.00" <<  endl;
    notas =  notas % 5;
    // notas de 2
    cout << notas / 2 << " nota(s) de R$ 2.00" <<  endl;
    notas =  notas % 2;

    // Moedas
    cout << "MOEDAS:" << endl;
    cout << notas / 1 << " moeda(s) de R$ 1.00" <<  endl;
    cout << moedas / 50 << " moeda(s) de R$ 0.50" << endl;
    moedas %= 50;
    cout << moedas / 25 << " moeda(s) de R$ 0.25" << endl;
    moedas %= 25;
    cout << moedas / 10 << " moeda(s) de R$ 0.10" << endl;
    moedas %= 10;
    cout << moedas / 5 << " moeda(s) de R$ 0.05" << endl;
    moedas %= 5;
    cout << moedas << " moeda(s) de R$ 0.01" << endl;  // O restante é em moedas de 0.01

    return 0;
}