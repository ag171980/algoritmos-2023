//============================================================================
// Name        : Arch.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


//Ordenar el archivo K1151v2.dat por número de legajo.

#include <iostream>
#include <stdio.h>
using namespace std;

struct Alumno{
   int legajo;
   int dni;
   int nota1;
   int nota2;
};

void inicializar (Alumno vec[], int cantP, Alumno ValorIni);
void insertar(Alumno vec[], int &len1,Alumno valor, int pos);
void insertarOrdenado(Alumno vec[], int &len1,Alumno valor);

int main() {
	Alumno vecaux[10];
	int len=0;

	Alumno regini;
	regini.legajo=0;
	regini.dni=0;
	regini.nota1=0;
	regini.nota2=0;

	inicializar(vecaux,10,regini);

	FILE*Alum;
	Alum=fopen("K1151v2.dat","rb");

	Alumno raux;
	fread(&raux,sizeof(struct Alumno),1,Alum);
	while(!feof(Alum)){
	   insertarOrdenado(vecaux,len,raux);
	   fread(&raux,sizeof(struct Alumno),1,Alum);
	}
	fclose(Alum);

	Alum=fopen("K1151v2.dat","wb");
	for(int i=0;i<len;i++){
	   fwrite(&vecaux[i],sizeof(struct Alumno),1,Alum);
	}
	fclose(Alum);

	return 0;
}

void inicializar (Alumno vec[], int cantP, Alumno ValorIni){
   for (int i=0; i<cantP; i++){
      vec[i].legajo=ValorIni.legajo;
      vec[i].dni=ValorIni.dni;
      vec[i].nota1=ValorIni.nota1;
      vec[i].nota2=ValorIni.nota2;
   }
}

void insertar(Alumno vec[], int &len1,Alumno valor, int pos){
   //generar el movimiento de los valores para generar el espacio de carga necesario
   for (int i=len1;i>pos;i--){
      vec[i].legajo=vec[i-1].legajo;
      vec[i].dni=vec[i-1].dni;
      vec[i].nota1=vec[i-1].nota1;
      vec[i].nota2=vec[i-1].nota2;
   }
   //cargo el valor
   vec[pos].legajo=valor.legajo;
   vec[pos].dni=valor.dni;
   vec[pos].nota1=valor.nota1;
   vec[pos].nota2=valor.nota2;
   len1++;
}

void insertarOrdenado(Alumno vec[], int &len1,Alumno valor){
   //1 dónde lo voy a cargar, buscar la posición en la que lo tengo que insertar
   int i=0;
   while(i<len1 && vec[i].legajo<=valor.legajo){
      i++;
   }
   //2 CARGAR el valor en la posición que determiné
   if(i==len1){
      vec[len1].legajo=valor.legajo;
      vec[len1].dni=valor.dni;
      vec[len1].nota1=valor.nota1;
      vec[len1].nota2=valor.nota2;
      len1++;
   }else insertar(vec,len1,valor,i);
}
