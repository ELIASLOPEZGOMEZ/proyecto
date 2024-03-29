#ifndef LAGRANGE_H
#define LAGRANGE_H

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;


class Lagrange
{

private:
    float Matriz[4][2];
    int N = 4;
    int I;
    int J;
    float Li[4];

public:
    int setValores();
    void setContadores();
    void calcularLx();
    void calcularPolinomio();
};

int Lagrange::setValores()
{

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            if (j != 1)
                cout << "\nIngrese la coordenada [x" << i + 1 << "]"
                     << ": ";
            else if (j == 1)
                cout << "\nIngrese la coordenada [y" << i + 1 << "]"
                     << ": ";
            cin >> Matriz[i][j]; // 0,0 = 0 . 0,1 = 1  .. 1,0 = 1 . 1,1 = 3  2,0= 2  2,1=0
        }
    }

    for (int r = 0; r < 2; r++)
    {
        if (Matriz[r][0] == Matriz[2][0])
        {
            cout << "\nCoordenadas inconsistentes" << endl
                 << "Presiona una tecla para volver a ingresar" << endl;
            while (!kbhit())
                ;
            system("cls");
            return 1;
        }
    }
    for (int r = 1; r < 4; r++)
    {
        if (Matriz[r][0] == Matriz[0][0])
        {
            cout << "\nCoordenadas inconsistentes" << endl
                 << "Presiona una tecla para volver a ingresar" << endl;
            while (!kbhit())
                ;
            system("cls");
            return 1;
        }
    }
    return 0;
}

void Lagrange::setContadores()
{

    I = N - 1;
    J = N - 1;
}

void Lagrange::calcularPolinomio (){
	
	 float Px =( Li[0] ) + (  Li[1] ) + ( Li[2] ) + (  Li[3] );
	        cout<<"\n\nEl resultado del polinomio es: "<<setw(10)<<fixed<<setprecision(4)<<Px<<endl;
	}
	

	void Lagrange::calcularLx (){
	
	    float valorX;
	
	    cout<<"\nIngrese el valor de X: \n";
	    cin>>valorX;
	
	    Li[0] = (Matriz[0][1])*((( valorX - Matriz[1][0] )  * ( valorX - Matriz[2][0])*( valorX - Matriz[3][0])) / (( Matriz [0][0] - Matriz[1][0]) * ( Matriz[0][0] - Matriz[2][0] )*( Matriz[0][0] - Matriz[3][0] )));
		cout<<"\nEl resultado es: Li(1)="<<setw(10)<<fixed<<setprecision(4)<<Li[0]<<endl;
	
		Li[1] = (Matriz[1][1])*((( valorX - Matriz[0][0] ) * ( valorX - Matriz[2][0] )*( valorX - Matriz[3][0])) / (( Matriz [1][0] - Matriz [0][0] ) * ( Matriz [1][0] - Matriz [2][0] )*( Matriz[1][0]- Matriz[3][0])));
	    cout<<"\nEl resultado es: Li(2)="<<setw(10)<<fixed<<setprecision(4)<<Li[1]<<endl;
	
	
	    Li[2] = (Matriz[2][1])*((( valorX - Matriz[0][0] ) * ( valorX - Matriz[1][0] )*( valorX - Matriz[3][0])) / (( Matriz [2][0] - Matriz [0][0] ) * ( Matriz [2][0] - Matriz [1][0] )*( Matriz[2][0]- Matriz[3][0])));
	    cout<<"\nEl resultado es: Li(3)="<<setw(10)<<fixed<<setprecision(4)<<Li[2]<<endl;
	    
	    
	    Li[3] = (Matriz[3][1])*((( valorX - Matriz[0][0] ) * ( valorX - Matriz[1][0] )*( valorX - Matriz[2][0])) / (( Matriz [3][0] - Matriz [0][0] ) * ( Matriz [3][0] - Matriz [1][0] )*( Matriz[3][0]- Matriz[2][0])));
	    cout<<"\nEl resultado es: Li(4)="<<setw(10)<<fixed<<setprecision(4)<<Li[3]<<endl<<endl;
	}
#endif 
