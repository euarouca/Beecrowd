#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int km;
    float combustivel, consumo;

    // distancia percorrida
    cin >> km;
    // combustivel gasto
    cin >> combustivel;
    // consumo
    consumo = km / combustivel;

    cout << fixed << setprecision(3);
    cout << consumo << " km/l" << endl;
    
    return 0;
}
