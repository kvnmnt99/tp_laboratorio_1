

#include "library.h"

int menu()
{
	int opcion;
	    int cant;
	        system("cls");

	        printf("1- Ingresar kilometros\n");

	        printf("2- Ingresar precio de vuelo \n");

	        printf("3- Calcular costos\n");

	        printf("4- Informar resultados\n");

	        printf("5- Carga forzada de datos\n ");

	        printf("6- Salir\n ");

	        fflush(stdin);
	        cant =  scanf("%d", &opcion);
	        if(cant == 0){
	            opcion = 5;
	        }
	        return opcion;
}


float ingresoKm(){


	float acumuladorKm = 0;
	float kmIng;
	int ok;

	printf("Ingrese kilometros\n ");
	ok = scanf("%f", &kmIng);

	while(kmIng<=0 || ok == 0){

			printf("Ingrese kilometros\n ");
			ok = scanf("%f", &kmIng);
	}

	acumuladorKm += kmIng;

		return acumuladorKm;
}

int subMenu(int)
{
	char agencia;
	int precioAerolineas;
	int precioLatam;
	printf("y- Aerolineas\n");
	printf("z- Latam\n");

	scanf("%c", &agencia);
	while (agencia != 'y' || agencia != 'z')
	{
		printf("Ingrese nuevamente\n");
		printf("y- Aerolineas\n");
		printf("z- Latam\n");

		scanf("%c", &agencia);
	}


	if (agencia == 'y')
	{
	printf("Ingrese precio\n");
	scanf("%d", &precioAerolineas);

	return precioAerolineas;
	}
	else
	{
	printf("Ingrese precio\n");
	scanf("%d", &precioLatam);

	return precioLatam;
	}


}

float tarjetaDebito(float, float)
{
	float precioAeroDeb;
	float precioLatDeb;

	precioAeroDeb = precioAerolineas - precioAerolineas*descuentoDebito;
	precioLatDeb = precioLatam - precioLatam *descuentoDebito;

	return
}

float tarjetaCredito(float, float)
{
	float precioAeroCr;
	float precioLatCr;

	precioAeroCr = precioAerolineas + precioAerolineas*interesCredito;
	precioLatCr = precioLatam + precioLatam *interesCredito;
	return
}
float bitcoinTransf(float, float){

	float precioAeroBt;
	float precioLatBt;

	precioAeroBt = precioAerolineas / bitcoin;
	precioLatBt = precioLatam / bitcoin;
	return
}

float precioUnitarioFunc(float, float){

	float precioUnitario = precioIngresado / kmIngresado;

	return precioUnitario;
}
