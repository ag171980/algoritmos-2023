//============================================================================
// Name        : Ej.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

struct Proveedor
{
   int ID;
   char tipo;
   int CPI;
   int CC;
};

struct ProvVec
{
   int ID;
   int CPI;
   int CC;
};

void inicializar (Alumno vec[], int cantP, Alumno ValorIni);
void insertar(Alumno vec[], int &len1,Alumno valor, int pos);
void insertarOrdenado(Alumno vec[], int &len1,Alumno valor);

int main()
{  ProvVec PROV_A[100];
   int lenA = 0;
   ProvVec PROV_F[100];
   int lenF=0;
   ProvVec regini;

   regini.ID=0;
   regini.CPI=0;
   regini.CC=0;

   inicializar(PROV_A,100,regini);
   inicializar(PROV_F,100,regini);

   FILE *Prov;
   Prov=fopen("ISP_G.dat","rb");
   Proveedor raux;
   fread(&raux,sizeof(struct Proveedor),1,Prov);

   while()

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
