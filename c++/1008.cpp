#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int funcionario, horas;
    double valor_hora, salario;
    
    cin >> funcionario;
    cin >> horas;
    cin >> valor_hora;
    
    salario = horas * valor_hora;
    
    cout << "NUMBER = " << funcionario << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salario << endl;
    return 0;
}