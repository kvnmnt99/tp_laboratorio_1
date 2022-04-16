/*
 ============================================================================
 Name        : trabajo_practic.c
 Author      : Kevin
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "library.h"


char salir;
int opcion;
int kmIngresado;
float precioAerolineas;
float precioLatam;
float precioDebito;
float descuentoDebito = 0.1;
float precioCredito;
float interesCredito = 0.25;
float bitcoin = 4606954.55;
float precioUnitario;
float diferenciaPrecios;
float precioTotalBitcoin;


int main(void) {
	setbuf(stdout, NULL);


	do{
		switch(menu())
		{
		case 1:
			 printf("1- Ingresar kilometros\n");
			kmIngresado=ingresoKm ();
			break;
		case 2:
			int subMenu(int);
		break;
		case 3:
			float tarjetaDebito(float, float);
			float tarjetaCredito(float, float);
			float bitcoinTransf(float, float);
			float precioUnitarioFunc(float, float);
			float diferenciaPreciosF(float, float);
		break;
		case 4:
			break;
		case 5:
		break;
		case 6:
		break;
		default:
		break;
		}
	}
	while(salir !='y');


	return EXIT_SUCCESS;
}

























}
