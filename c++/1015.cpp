#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main (){
    float x1, y1, x2, y2, distancia;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    distancia = ((x2 -x1)*(x2-x1)) + ((y2 -y1)*(y2-y1));
    distancia = sqrt(distancia);
    cout << fixed << setprecision(4);
    cout << distancia << endl;

    return 0;
}