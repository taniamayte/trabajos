#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    float precioN, precioD, pctd, descuento;
    cout << "Dime el precio normal: ";
    cin >> precioN;
    cout << "Dime el porcentaje de descuento: ";
    cin >> pctd;
    descuento = precioN * pctd / 100;
    precioD = precioN - descuento;
    cout << "El precio con descuento es: " << precioD;
    cout << "\nEl precio con descuento es: " << precioN * (100 - pctd) / 100;
    return 0;
}
