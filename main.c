#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#include "string.h"
#include "movimientosL.h"
#include "mocksMovimientos.h"
#define AR_MOVIMIENTOS "movimientos.dat"

/*

Alta, Baja, Modificaci�n, Consulta y Listados de Movimientos por Cuenta y por mes.
Alta de movimientos aleatorios del a�o actual anteriores a la fecha actual.
La funci�n deber� agregar 1000 eligiendo de manera aleatoria el cliente el  mes y el
d�a. Si el importe es negativo en descripci�n deber� insertar un  texto relativo a
un pago, transferencia a cuenta propia, transferencia a
cuenta de terceros, pago de TC, o pagos con TD. Si es positivo en descripci�n
deber� insertar un texto relativo a un cobro, ej. cr�dito Haberes, transferencia
de cuenta propia, transferencia de cuenta ajena, acreditaci�n de plazo fijo, etc.
Cada vez que se ingresa o modifica un movimiento se debe actualizar el saldo de la cuenta.
Validaci�n en el ingreso de los Datos.
Buscar Movimientos por fecha.
Buscar Clientes.
*/

    int main()
{


    stMovimiento movimientos[10];
    stMovimiento movimientos2[10];
    int vMovimientos=0;
    int vMovimientos2=0;





    vMovimientos=cargaMovimientos(movimientos,vMovimientos,10);
    muestraMovimientos(movimientos,vMovimientos);

cargaArchMovimientoRandom (AR_MOVIMIENTOS,1);
    muestraArchivoMovimimiento (AR_MOVIMIENTOS);



    printf ("\n");
    printf ("\Bye bye world");
    return 0;
}


