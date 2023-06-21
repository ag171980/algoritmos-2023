//============================================================================
// Name        : Vectores.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
using namespace std;

void inicializar (int vec[], int cantP, int ValorIni);
void mostrar (int vec [], int len1);
void insertar(int vec[], int &len1,int valor, int pos);
void insertarOrdenado(int vec[], int &len1,int valor);
void sumarizo(int vec[], int len1);
int busquedaBinaria(int vec[], int len, int valor);

int main() {
   //1 Declarar el vector
   int numeros [10];
   int len =0;
   int n;
   int cont=0;
   int pos;
   //2 Inicializar el vector
   inicializar(numeros,10,0);

   //3 Cargar el vector - insertar ordenado
   cout<<"ingrese un valor o 0 para terminar"<<endl;
   cin>>n;

   while(n!=0&&cont<10){
      insertarOrdenado(numeros,len,n);
      cont++; //cuento para no pasarme de la capacidad del vector
      cout<<"ingrese un valor o 0 para terminar"<<endl;
      cin>>n;
   }

   //4 Sumarizo el vector y buscar el valor 8 (digo la pos o un mensaje de que no est�)
   sumarizo(numeros,len);
   pos=busquedaBinaria(numeros,len,8);
   if (pos == -1){
      cout<<"no encontr� el valor 8"<<endl;
   }else cout<<"la posici�n en la que lo encontr� es: "<<pos<<endl;

   //5 Mostrar el vector
   mostrar(numeros,len);

   return 0;
}

void inicializar (int vec[], int cantP, int ValorIni){
   for (int i=0; i<cantP; i++){
      vec[i]=ValorIni;
   }
}

void mostrar (int vec [], int len1){
   for (int i=0; i<len1; i++){
      cout<<vec[i]<<endl;
   }
}


void sumarizo(int vec[], int len1){
   int suma=0;
   for(int i=0;i<len1;i++){
      suma=suma+vec[i];
   }
   cout<<suma<<endl;
}

void insertar(int vec[], int &len1,int valor, int pos){
   //generar el movimiento de los valores para generar el espacio de carga necesario
   for (int i=len1;i>pos;i--){
      vec[i]=vec[i-1];
   }
   //cargo el valor
   vec[pos]=valor;
   len1++;
}

void insertarOrdenado(int vec[], int &len1,int valor){
   //1 d�nde lo voy a cargar, buscar la posici�n en la que lo tengo que insertar
   int i=0;
   while(i<len1 && vec[i]<=valor){
      i++;
   }
   //2 CARGAR el valor en la posici�n que determin�
   if(i==len1){
      vec[len1]=valor;
      len1++;
   }else insertar(vec,len1,valor,i);
}


int busquedaBinaria(int vec[], int len, int valor){
   int pos=-1;
   int pri=0;
   int ult=len-1;
   int med;

   while(pri<=ult && pos==-1){
      med=(pri+ult)/2;
      if(vec[med]==valor){
         pos=med;
      }else if (valor > vec[med]){
         pri= med +1;
      }else{
         ult=med -1;
      }
   }
   return pos;
}
