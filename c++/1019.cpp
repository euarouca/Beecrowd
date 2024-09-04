#include <iostream>

using namespace std;

int main (){
    int segundos, minutos, horas;

    cin >> segundos;
    // horas
    horas = segundos / 3600;
    segundos = segundos % 3600;
    // minutos
    minutos = segundos / 60;
    segundos = segundos % 60;

    cout << horas << ":" << minutos << ":" << segundos << endl;

    return 0;
}