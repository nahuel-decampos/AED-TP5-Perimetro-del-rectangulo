/* Perimetro del rectangulo
   Nahuel de Campos
   12/05/15
*/

#include <iostream>
using namespace std;

double ObtNumPosit ();
double CalcPerim (double, double);

int main (){
    cout << "\n   Programa para calcular el perimetro de un rectangulo  ";
    cout << "\n   ----------------------------------------------------";
    cout << "\n Ingrese el valor de la base (en cms): ";
    double b = ObtNumPosit();
    cout << "\n Ingrese el valor de la altura (en cms): ";
    double h = ObtNumPosit();
    cout << "\n El perimetro del rectangulo es de " << CalcPerim (h,b) << " cms.\n";
}

double ObtNumPosit (){
    double num =0;
    while (num <= 0)
        cin >> num;
   return num;
}

double CalcPerim (double base, double altura){
    return 2.0*(base + altura);
}

