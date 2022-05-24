

/// @fn float Rebaja(int, float).
/// @brief La funcion calcula el descuento del 10% con tarjetas de debito a efectuarse en el precio de los vuelos de Latam y Aerolineas.
/// @param dato1 int El dato sobre el que se va a calcular el descuento.
/// @param dato2 float Contiene el dato porcentual para calcular el porcentaje de rebaja.
/// @return float representa el retorno del valor del "dato1" ingresado con el descuento aplicado.
float Rebaja(int dato1,float dato2);

/// \fn float Interes(int, float)
/// \brief La funcion calcula el interes del 25% a con tarjetas de credito a efectuarse en el precio de los vuelos de Latam y Aerolineas.
/// \param dato1 int La variable sobre la que se va a calcular el aumento.
/// \param dato2 float representa el parametro porcentual que va a permitir calcular el aumento en los respectivos pasajes.
/// \return float representa el retorno de la funcion con  el dato porcentual calculado.
float Interes(int dato1,float dato2);

/// @fn float Bitcoin(int, float)
/// @brief  la funcion calcula el precio del ticket si se pagase con la criptomoneda "Bitcoin".
/// @param dato1 int la variable contiene el precio del vuelo que se usa para calcular el valor final en bitcoins.
/// @param dato2 float valor flotante que representa la cotizacion de la moneda.
/// @return float determina el retorno del calculo de la division entre el precio y la cotizacion.
float Bitcoin(int dato1,float dato2);

/// @fn float FuncionPrecioKilometros(int, int)
/// @brief la funcion determina el precio unitario del vuelo divido los kilometros recorridos.
/// @param dato1 int la variable recibe el valor de entrada de los precios de los vuelos.
/// @param dato2 int la variable recibe los kilometros a recorrerse en el vuelo.
/// @return float la funcion retorna el resultado de la division entre el precio del vuelo y los kilometros totales.
float FuncionPrecioKilometros(int dato1,int dato2);

/// @fn int FuncionDiferenciaPrecio(int, int)
/// @brief la funcion determina la diferencia entre el precio  del vuelo de Latam con el de Aerolineas.
/// @param dato1 int recibe el precio del vuelo de Latam
/// @param dato2 int recibe el precio del vuelo de Aerolineas
/// @return int retorna el resultado de la resta entre el precio de Latam con el de Aerolineas
int FuncionDiferenciaPrecio(int dato1,int dato2);



