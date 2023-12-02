#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
#include <MenuGauss.hpp>
#include <MenuLagrange.hpp>
class MenuPrincipal
{
private:
int opcion;
   
public:
    void showMenuPrincipal();
};
void MenuPrincipal::showMenuPrincipal()
{
    MenuGauss menu2;
    MenuLagrange menu3;
    

    do
    {
        system("cls");
        cout << "/// MENU DE RESOLUCIONES DE ECUACIONES";
        cout << "\n\n\n";

        cout << "1- METODO DE RESOLUCION DE LAGRANGE\n";
        cout << "2- METODO DE RESOLUCION DE SISTEMAS DE ECUACIONES\n";
        cout << "3- SALIDA\n\n";

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("cls");
            cout << "METODO DE RESOLUCION DE LAGRANGE \n";
            menu3.showMenuLagrange();
            break;
        case 2:
            system("cls");
            cout << "METODO DE RESOLUCION DE SISTEMAS DE ECUACIONES \n";
            menu2.showMenuGauss();
            break;
        case 3:
            system("cls");
            cout << "Usted esta saliendo del programa. Hasta pronto.\n";
            break;
        default:
            system("cls");
            cout << "Ha ingresado una opcion incorrecta. Elija nuevamente una opcion.\n";
            break;
        }
    } while (opcion != 3);
}