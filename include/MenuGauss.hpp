#include <iostream>
#include <iomanip>
#include <conio.h>
#include <Gauss.hpp>

using namespace std;

class MenuGauss
{
private:
    int opcion = 0;
public:
    void showMenuGauss();
};

void MenuGauss::showMenuGauss()
{
   Gauss useFuntionsGauss;

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
               useFuntionsGauss.ingresarDatos();
               system("pause");
               break;
            case 2:
               system("cls");
               useFuntionsGauss.mostrarDatos();
               system("pause");
               break;
            case 3:
               system("cls");
               useFuntionsGauss.resolverPivot();
               useFuntionsGauss.mostrarSolucion();
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
