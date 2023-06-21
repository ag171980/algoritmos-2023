//============================================================================
// Name        : Matrices.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int vec[10]; //vector de 10 posiciones
	//tipoDato nombreMatriz [filas][columnas]
	int mat [10][3];
	//carga matriz
	for (int i=0; i<10;i++){
	   //i fila
	   for (int j=0; j<3; j++){
	      cout<<"ingrese un valor para la matriz"<<endl;
	      cin>>mat[i][j];
	   }
	}
   //mostrar la matriz
	for (int i=0; i<10; i++){
	   //i filas
	   for(int j=0; j<3; j++){
	      cout<<" "<<mat[i][j];
	   }
	   cout<<endl;
	}

	return 0;
}
