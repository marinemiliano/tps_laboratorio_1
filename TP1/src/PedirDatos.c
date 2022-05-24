/*
 * PedirDatos.c
 *
 *  Created on: 14 abr. 2022
 *      Author: marin
 */
#include "CalculoDatos.h"
#include "PedirDatos.h"



 int PedirDatos(char mensaje[])
 {
	 	  int numeroIngresado;
	      printf("%s",mensaje);
	      scanf("%d",&numeroIngresado);

	       numeroIngresado=ValidarDatos(numeroIngresado,"Error, valor ingresado fue cero o menor, reingrese cifra.\n");

        return numeroIngresado;
    }
