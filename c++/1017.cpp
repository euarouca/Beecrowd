#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int horas, velocidade;
    float combustivel;

    cin >> horas;
    cin >> velocidade;
    combustivel = velocidade * horas / 12.0;
    cout << fixed << setprecision(3);
    cout << combustivel << endl;

    return 0;
}