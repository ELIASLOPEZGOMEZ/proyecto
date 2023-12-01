#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#include "Lagrange.hpp"

class MenuLagrange
{
private:
    int opcion;
    int err;

public:
    void showMenuLagrange();
};

void MenuLagrange::showMenuLagrange()
{
   
    Lagrange funciones;
    do
    {
        system("cls");
        cout << "\n1- INGRESO DE DATOS\n";
        cout << "2- CALCULO LX\n";
        cout << "3- CALCULO POLINOMIO\n";
        cout << "4- Vuelta a menu principal\n";

        cout << "\n\n";

        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("cls");
            do
            {
             err = funciones.setValores();
            } while (err);
            funciones.setContadores();
            cout << endl;
            cout << "Presione una tecla para volver al menu" << endl;
            while (!kbhit())
                ;
            break;
        case 2:
            system("cls");
            funciones.calcularLx();
            cout << endl;
            cout << "Presione una tecla para volver al menu" << endl;
            while (!kbhit())
                ;
            break;
        case 3:
            system("cls");
            funciones.calcularPolinomio();
            cout << endl;
            cout << "Presione una tecla para volver al menu principal" << endl;
            while (!kbhit())
                ;
            return;
        case 4:
            system("cls");
            cout<<"Usted esta regresando al menu principal.\n";
            break;
        default:
            system("cls");
            cout << "Ha ingresado una opcion incorrecta. Elija nuevamente una opcion.\n";
            break;
        }
    } while (opcion != 4);
}