// DetectorDeTriangulos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string>
#include<math.h>
# define M_PI 3.14159265358979323846 /* pi */
using namespace std;
void Calculos(double l1, double l2, double l3)
{
    double area = 0;
    double perimetro = 0;
    double semiperimetro = 0;
    perimetro = l1 + l2 + l3;
    cout << "El perimetro es: " << perimetro << "\n";
    semiperimetro = perimetro / 2;
    area = sqrt(semiperimetro * (semiperimetro - l1) * (semiperimetro - l2) * (semiperimetro - l3));
    cout << "El area es: " << area << "\n";
}
void Angulos(double l1, double l2, double l3)
{
    double a1 = 0, a2 = 0, a3 = 0;
    a1 = acos((-(l1 * l1) + (l2 * l2) + (l3 * l3)) / (2 * l2 * l3)) * 180 / M_PI;
    a2 = acos(((l1 * l1) - (l2 * l2) + (l3 * l3)) / (2 * l1 * l3)) * 180 / M_PI;
    a3 = acos(((l1 * l1) + (l2 * l2) - (l3 * l3)) / (2 * l2 * l1)) * 180 / M_PI;
    cout << "Los angulos intenrnos del triangulo son: " << "\n";
    cout << "Angulo 1: " << a1 << "\n";
    cout << "Angulo 2: " << a2 << "\n";
    cout << "Angulo 3: " << a3 << "\n";
}
int main()
{
    double l1 = 0, l2 = 0, l3 = 0;
    string tipo, salir = "n";
    while (salir != "s")
    {
        cout << "Dame el primer lado:";
        cin >> l1;
        cout << "Dame el segudno lado:";
        cin >> l2;
        cout << "Dame el tercer lado:";
        cin >> l3;
        if (l1 == l2 && l2 == l3)
        {
            cout << "El triangulo es equilartero" << "\n";
            Calculos(l1, l2, l3);
            Angulos(l1, l2, l3);
        }
        if (l1 == l2 && l2 != l3)
        {
            cout << "El triangulo es isosceles" << "\n";
            Calculos(l1, l2, l3);
            Angulos(l1, l2, l3);
        }
        if (l1 != l2 && l2 != l3)
        {
            cout << "El triangulo es escaleno" << "\n";
            Calculos(l1, l2, l3);
            Angulos(l1, l2, l3);
        }
        cout << "Desea salir? si(s) no (n):";
        cin >> salir;

    }
}