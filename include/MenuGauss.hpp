#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
#include "Gauss.hpp"

class MenuGauss
{
private:
    int opcion = 0;
public:
    void showMenuGauss();
};

void MenuGauss::showMenuGauss()
{
   Gauss funciones2;

   do{
       system("cls");
       system("cls");
        cout<<"\n1- INGRESO DE DATOS\n";
        cout<<"2- FORMA DE MATRIZ\n";
        cout<<"3- SOLUCION DE INCOGNITAS\n";
        cout<<"4- Vuelta a menu principal\n";

        cout<<"\n\n";

        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        switch(opcion){
            case 1:
               system("cls");
               funciones2.ingresarDatos();
               system("pause");
               break;
            case 2:
               system("cls");
               funciones2.muestraDatos();
               system("pause");
               break;
            case 3:
               system("cls");
               funciones2.resuelvePivot();
               funciones2.muestraSolucion();
               system("pause");
               return;
            case 4:
               system("cls");
               break;
            default:
                system("cls");
                cout<<"Ha ingresado una opcion incorrecta. Elija nuevamente una opcion.\n";
                break;
        }

    }while(opcion!=4);
}
