/*
 * calculodedatos.c
 *
 *  Created on: 14 abr. 2022
 *      Author: marin
 */

///implementacion de la funcion

#include "PedirDatos.h"
#include "CalculoDatos.h"

/// @fn float Rebaja(int, float)
/// @brief
/// @param dato1
/// @param dato2
/// @return
float Rebaja(int dato1,float dato2)
{
	float descuento;

	descuento= dato1*dato2;

	descuento= dato1-descuento;

	return descuento;
}

float Interes(int dato1,float dato2)
{
  float interes;

  interes=dato1*dato2;

  interes=dato1+interes;

  return interes;
}

float Bitcoin(int dato1,float dato2)
{
	float resultado;

	resultado=dato1/dato2;

	return resultado;
}
float FuncionPrecioKilometros(int dato1,int dato2)
{
	float resultado;

	resultado=(float)dato1/dato2;

	return resultado;
}

int FuncionDiferenciaPrecio(int dato1,int dato2)
{

	int resultado;

	resultado=dato1-dato2;

	return resultado;

}
