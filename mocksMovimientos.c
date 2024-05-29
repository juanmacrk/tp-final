
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "movimientosL.h"

char* getDetalles()
{
      char* detalle = (char*) malloc(sizeof(char)*30);
    char detalles[][30]={
        "Dep�sito en efectivo",
        "Retiro en efectivo",
        "Transferencia bancaria",
        "Pago de servicios",
        "Consulta de saldo",
        "Pago de tarjeta de cr�dito",
        "Domiciliaci�n de n�mina",
        "Domiciliaci�n de recibos",
        "Transferencia internacional",
        "Ingreso de cheque",
        "Cobro de cheque",
        "Cambio de divisas",
        "Reintegro en cajero autom�tico",
        "Dep�sito en cajero autom�tico",
        "Pago de impuestos",
        "Consulta de movimientos",
        "Actualizaci�n de datos",
        "Cambio de PIN",
        "Solicitud de extracto",
        "Bloqueo de tarjeta"};
    strcpy(detalle,detalles[rand()%(sizeof(detalles)/30)]);
    return detalle;
}

int* getIdCuenta()
{
    char* idCuenta = (char*) malloc(sizeof(char)*6);
    printf(idCuenta, "%d", (rand()%10)+1);
    return idCuenta;
}
int getdia(){
    return (rand()%31)+1;
}

int getmes(){
    return (rand()%12)+1;
}

int getanio(){
    return (rand()%90)+1930;
}

stMovimiento getMovimientoRandom()
{
    stMovimiento d;


    strcpy(d.detalle,getDetalles());

   d.idCuenta=getIdCuenta();

    d.dia=getdia ();


    d.mes=getmes();


   d.anio= getanio ();



    return d;
}
