#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "costo_minimo.h"

int main(int argc, char const *argv[])
{
	/* code */
	printf("Iniciando Metodo Multiplicadores\n");
	insert_fila_nodo(1,5,&pt1);
	insert_fila_nodo(1,2,&pt1);
	insert_fila_nodo(1,7,&pt1);
	insert_fila_nodo(1,3,&pt1);
	close_line(1, pt1); //cierro linea de insercion

	insert_fila_nodo(1,3,&pt1);
	insert_fila_nodo(1,6,&pt1);
	insert_fila_nodo(1,6,&pt1);
	insert_fila_nodo(1,1,&pt1);
	close_line(2, pt1); //cierro linea de insercion

	insert_fila_nodo(1,6,&pt1);
	insert_fila_nodo(1,1,&pt1);
	insert_fila_nodo(1,2,&pt1);
	insert_fila_nodo(1,4,&pt1);
	close_line(3, pt1); //cierro linea de insercion

	insert_fila_nodo(1,4,&pt1);
	insert_fila_nodo(1,3,&pt1);
	insert_fila_nodo(1,6,&pt1);
	insert_fila_nodo(1,6,&pt1);
	close_line(4, pt1); //cierro linea de insercion

	// ------------------------------------------------------------------------------
	inserta_demanda(45, &l_Demanda); //DEMANDA ALMACEN1
	inserta_demanda(20, &l_Demanda);//DEMANDA ALMACEN2
	inserta_demanda(30, &l_Demanda);//DEMANDA ALMACEN3
	inserta_demanda(30, &l_Demanda);//DEMANDA ALMACEN4

	inserta_oferta(35, &l_Oferta);//OFERTA YUCATAN
	inserta_oferta(50, &l_Oferta);//OFERTA CAMPECHE
	inserta_oferta(40, &l_Oferta);//OFERTA TABASCO
	inserta_oferta(30, &l_Oferta);//OFERTA QUINTANA ROO
	//ver_n(pt1);
	ver_Demanda_Oferta(l_Demanda, l_Oferta);

	printf("\n");

	ver_n(pt1);
	Operacion_costo_minimo(pt1, l_Oferta, l_Demanda);

	v_cost_min();
	ver_n(pt1);

	printf("\n");
	return 0;
}
