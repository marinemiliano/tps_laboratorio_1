/*
 ============================================================================
 Name        : TP1.c Marin Emiliano Lionel DIV C.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "CalculoDatos.h"
#include "PedirDatos.h"
#include "ValidarDatos.h"

int main(void) {

	setbuf(stdout,NULL);

	int opcion;
	int x;
	int z;
	int y;
	float rebaja;
	float interes;
	float bitcoin;
	rebaja=0.10;
	interes=0.25;
	bitcoin=4606954.55;
	float precioAerolineasInt;
	float precioAerolineasDesc;
	float precioBitcoinAerolineas;
	float precioKilometrosAerolineas;
	float precioKilometrosLatam;
	int   diferenciaPrecio;
	float precioLatamDesc;
	float precioLatamInt;
	float precioBitcoinLatam;

	do
	{
		printf("\n1) Ingresar Kilometros:\n"); //muestro el menu, el usuario dice lo que quiere hacer,hace lo
		printf("2) Ingresar Precio de Vuelos:\n");
		printf("3) Calcular todos Los Costos:\n");
		printf("4) Informar Resultados: \n");//que tiene que hacer y cuando termina vuelve a mostrar el menu
		printf("5) Carga forzada de datos:\n");
		printf("6) Salir:\n");
		scanf("%d", &opcion);
		switch(opcion)
		{
		case 1:

			 x=PedirDatos("ingrese kilometros");
			break;
		case 2:
			 y=PedirDatos("ingrese precio latam");
			 z=PedirDatos("ingrese precio aerolineas");
			break;
		case 3:
			    precioAerolineasInt=Interes(y,interes);
			   	precioAerolineasDesc=Rebaja(y,rebaja);
			   	precioBitcoinAerolineas=Bitcoin(y,bitcoin);
			   	precioKilometrosAerolineas=FuncionPrecioKilometros(y,x);
			   	precioLatamDesc=Rebaja(z,rebaja);
			   	precioLatamInt=Interes(z,interes);
			   	precioBitcoinLatam=Bitcoin(z,bitcoin);
			   	precioKilometrosLatam=FuncionPrecioKilometros(z,x);
			   	diferenciaPrecio=FuncionDiferenciaPrecio(z,y);
			break;
		case 4:
			  printf("Precio Latam:$ %d \n",z);
			  printf("Precio con tarjeta de debito:$ %.2f\n",precioLatamDesc);
			  printf("Precio con tarjeta de credito:$ %.2f\n",precioLatamInt);
			  printf("Precio pagando con bitcoin:BTC %.5f\n",precioBitcoinLatam);
			  printf("Mostrar precio unitario:$ %.2f\n",precioKilometrosLatam);

			  printf("\nPrecio Aerolineas:$ %d  \n",y);
			  printf("Precio con tarjeta de debito: $ %.2f\n",precioAerolineasDesc);
			  printf("Precio con tarjeta de credito:$ %.2f\n",precioAerolineasInt);
			  printf("Precio pagando con bitcoin:BTC %.5f\n",precioBitcoinAerolineas);
			  printf("Mostrar precio unitario:$ %.2f\n",precioKilometrosAerolineas);

			  printf("La diferencia de precio es: %d\n",diferenciaPrecio);
			break;
	   case 5:

		        precioAerolineasInt=Interes(159339,0.25);
		   	    precioAerolineasDesc=Rebaja(159339,0.10);
		   		precioBitcoinAerolineas=Bitcoin(159339,4606954.55);
		   	    precioKilometrosAerolineas=FuncionPrecioKilometros(159339,7090);
		   		precioLatamDesc=Rebaja(162965,0.10);
		   	    precioLatamInt=Interes(162965,0.25);
		   		precioBitcoinLatam=Bitcoin(162965,4606954.55);
		   		precioKilometrosLatam=FuncionPrecioKilometros(162965,7090);
		   	    diferenciaPrecio=FuncionDiferenciaPrecio(162965,159339);


		   	    printf("Precio Latam:$ %d \n",162965);
		   	    printf("Precio con tarjeta de debito:$ %.2f\n",precioLatamDesc);
		   	    printf("Precio con tarjeta de credito:$ %.2f\n",precioLatamInt);
		   	    printf("Precio pagando con bitcoin:BTC %.5f\n",precioBitcoinLatam);
		   	 	printf("Mostrar precio unitario:$ %.2f\n",precioKilometrosLatam);
		   	 	printf("\nPrecio Aerolineas:$ %d  \n",159339);
				printf("Precio con tarjeta de debito: $ %.2f\n",precioAerolineasDesc);
				printf("Precio con tarjeta de credito:$ %.2f\n",precioAerolineasInt);
			    printf("Precio pagando con bitcoin:BTC %.5f\n",precioBitcoinAerolineas);
			    printf("Mostrar precio unitario:$ %.2f\n",precioKilometrosAerolineas);
		   	 	printf("La diferencia de precio es: %d\n",diferenciaPrecio);
			break;
		case 6:
				printf("Salir \n");
			break;
		default:
			    printf("Numero incorrecto.Ingrese numero del 1 al 5; Numero 6 para salir del menu \n");
			break;
		}

	}while(opcion!=5);

	return 0;
}

