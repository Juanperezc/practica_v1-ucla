/*
 * VEmpresa.cpp
 *
 *  Created on: 27/1/2016
 *      Author: Noris
 */

#include "VEmpresa.h"

void VEmpresa::ReporteVendedores(vector<string> auxced, vector<string> auxnom,
		vector<float> auxsuel) {
	Limpiar();
	    ImprimirStringJustificado("LISTADO CORREDORES DE SEGUROS",46);
	    ImprimirLineasBlanco(1);
	    ImprimirStringJustificado("=============================",46);
	    ImprimirLineasBlanco(2);
	    ImprimirStringJustificado("CEDULA",12);
	    ImprimirStringJustificado("NOMBRE",25);
	    ImprimirStringJustificado("SUELDONETO",20);
	    ImprimirLineasBlanco(1);
	    /* Instrucciones que imprimen la cédula, nombre y comision
	    mensual de los corredores de seguros*/
	    for(unsigned int i=0; i<auxced.size(); i++)
	    {
	 	    ImprimirStringJustificado(auxced[i],12);
		    ImprimirStringJustificado(auxnom[i],25);
		    ImprimirNroDecimalJustificado(auxsuel[i],20);
		    ImprimirLineasBlanco(1);

	    }
	    ImprimirLineasBlanco(1);
	    Pausa();
}

void VEmpresa::PorcentajeVespec(int porc) {
	    ImprimirNro( "\n\n 2.	Porcentaje de vendedores cuyo monto total de ventas estuvo entre la mayor venta y 10% por debajo de la mayor venta: ", porc);
	    ImprimirLineasBlanco(3);
	    Pausa();
}

VEmpresa::VEmpresa() {
	// TODO Auto-generated constructor stub

}

