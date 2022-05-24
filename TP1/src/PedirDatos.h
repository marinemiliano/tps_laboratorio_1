

/// @fn int PedirDatos(char[])
/// @brief la funcion recibe del main un char de cadena con la consigna de que el usuario ingrese un numero.
///  Luego de cargar el numero, la funcion PedirDatos llama a la funcion "ValidarNumeros" para ser validar dicho dato,
/// @param  char mensaje, la funcion recibe una cadena de char por parametro requiriendole al usuario que ingrese un numero
/// @param numeroIngresado la variable "numeroIngresado" es cargada por el valor que coloca el  usuario. Dicha funcion
/// llama a "ValidarNumeros" para que ejecute la validacion del dato ingresado.
/// @return la funcion PedirDatos retorna el valor del dato (ya validado por la funcion "ValidarNumeros" al menu del main.
 int PedirDatos(char mensaje[]);
