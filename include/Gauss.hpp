#ifndef GAUSS_H
#define GAUSS_H

#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

void menuGauss();


class Gauss {

	private:

		int n; 
		double** mat; 
		double* b;
		double* x; 
        int* per; 
	public:

		void creaMatriz();
		void creaArrayValoresIndependientes();
		void ingresarDatos();
		void muestraDatos();
		void creaMatrizInverso();
		void muestraIncongnitas();
		void muestraSolucion();

		void resuelvePivot();
		void resuelveInversa();

        void liberaMemo();

};

#endif // GAUSS_H
