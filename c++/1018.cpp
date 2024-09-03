#include <iostream>

using namespace std;

int main(){
    int valor;

    cin >> valor;
    cout << valor << endl;
    // notas de 100
    cout << valor / 100 << " nota(s) de R$ 100,00" << endl;
    valor =  valor % 100;
    // notas de 50
    cout << valor / 50 << " nota(s) de R$ 50,00" << endl;
    valor =  valor % 50;
    // notas de 20
    cout << valor / 20 << " nota(s) de R$ 20,00" <<  endl;
    valor =  valor % 20;
    // notas de 10
    cout << valor / 10 << " nota(s) de R$ 10,00" <<  endl;
    valor =  valor % 10;
    // notas de 5
    cout << valor / 5 << " nota(s) de R$ 5,00" <<  endl;
    valor =  valor % 5;
    // notas de 2
    cout << valor / 2 << " nota(s) de R$ 2,00" <<  endl;
    valor =  valor % 2;
    // notas de 1
    cout << valor / 1 << " nota(s) de R$ 1,00" <<  endl;
    valor =  valor % 1;

    return 0;
}