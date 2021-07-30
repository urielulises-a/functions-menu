#include<stdio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
/*Problema 2: Un programa que realice 3 funciones y muestre un menu,
numeros pares, perfectos y invertir un string*/

using namespace std;
	
void es_par(){
	system("cls");
	
	int num;
	
	printf("\nIngresa 10 numeros enteros: \n");
	
	for (int i = 0; i<10; i++){
		
		scanf("%i", &num);
		
		if(num % 2 == 0){
			
			printf("El numero %i", num); printf(" es par. \n");
		}
		else {
			
			printf("El numero %i", num); printf(" no es par. \n");
		}
	}
}
void perfectos(){
	system("cls");
	
	printf("\nLos numeros perfectos del uno al 100 son: \n");
	int div, n, j = 1; 
	
	for (int i = 2; i<100; i++){
		n = 0; //N se reinicia cada vez que se terminan de buscar los factores de un numero
		while(j<100){
			
			div = i; 
			j++;
			if((div!=j) && (div % j == 0)){ //Mientras el numero sea distinto al divisor, va a ver si es un factor
				n+= j;
					
				if(div == n && n!= 24){ //El programa muestra el 24 a pesar de no ser perfecto
						
					printf(" %i ", n);
				} 
			}
		}
		j = 0; //Esta variable recorre los numeros hasta alcanzar a i
	}
	printf("\n");
}
void invert(){
	system("cls");
	
	string normal;
	
	std::string::reverse_iterator invert; 
	
	cout<<"\nIngresa 4 numeros: "<<endl;
	cin>>normal;
	//Estas funciones recorren el vector de final a incio intercambiando posiciones
	for (invert= normal.rbegin(); invert!= normal.rend(); invert++){
		
		cout<<*invert;;
	}
	cout<<endl;
}

int main(){
	
	char accion;
	
	do{
		
		printf("Menu de Opciones: \n\n"); printf("Conocer cual numero es par (a): \n");
		printf("Numeros perfectos 1-100 (b): \n"); printf("Numeros en reversa (c): \n");
		printf("Salir (s).\n");
		
		scanf("%c", &accion);
		
		switch (accion){
			
			case 'a': es_par(); scanf("%c", &accion);
			break;
			case 'b': perfectos();scanf("%c", &accion);
			break;
			case 'c': invert(); scanf("%c", &accion);
			break;
			case 's': system("cls"); printf("Salida exitosa. \n"); break;
			default: printf("Opcion incorrecta.");
			break;
		}
		
	}while (accion!= 's');
}

	
