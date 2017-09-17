#include<contrasenia.h>

/*
	Seccion de variables:
	Variables:
		conActual: arreglo de caracteres que contiene la contrasenia actual
		conNueva: contrasenia nueva ingresada por teclado.
		cantActual: la cantidad de variables actuales de la contrasenia
		cantNueva:  La cantidad ingersada por teclado.
*/
#define MAX_CON 7

char conActual[MAX_CON] = {'1','2','3','4','0','0','0','0'};
char conNueva[MAX_CON];
char cantActual;
char cantNueva;

contrasenia::contrasenia(){
	 for ( n=0 ; n<MAX_CON; ++n ){
    	conNueva[n]='0';
  	}
  	cantActual = 4;
  	cantNueva = 0;
	// inicio de variables-
}
void contrasenia::setContraseniaNueva(char tecla){
	if(cantNueva < MAX_CON){
		conNueva[cantNueva] = tecla;
		cantNueva++;
	}
}