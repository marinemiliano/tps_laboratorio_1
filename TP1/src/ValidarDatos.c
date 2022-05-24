
#include "CalculoDatos.h"
#include "PedirDatos.h"
#include "ValidarDatos.h"

int ValidarDatos(int numero,char MensajeError[])
    {

       while(numero<=0)
        {
             printf("%s",MensajeError);

        }

       return numero;
    }
