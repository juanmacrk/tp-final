#ifndef MOVIMIENTOSL_H_INCLUDED
#define MOVIMIENTOSL_H_INCLUDED

typedef struct
{
    int id; /// campo �nico y autoincremental
    int idCuenta; /// Id de la cuenta
    char detalle[100];
    float importe;
    int anio;
    int mes; /// 1 a 12
    int dia; /// 1 a � dependiendo del mes
    int eliminado; /// 0 si est� activo - 1 si est� eliminado

} stMovimiento;

stMovimiento cargaUnMovimiento();
void muestraUnMovimiento(stMovimiento m);
int cargaMovimientos(stMovimiento a[], int v, int dim);
void muestraMovimientos(stMovimiento a[], int v);
void cargaArchMovimientoRandom(char nombreArchivo[] ,int cant);
void muestraArchivoMovimimiento (char nombreArchivo[]);

stMovimiento getMovimientoRandom();


#endif // MOVIMIENTOSL_H_INCLUDED
