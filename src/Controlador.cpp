/*
 * Controlador.cpp
 *
 *  Created on: 27/1/2016
 *      Author: Noris
 */

#include "Controlador.h"

Controlador::Controlador() {
	// TODO Auto-generated constructor stub
	  chequeo_opcion = false;
}

void Controlador::CargarVendedores() {
	// Instrucciones que permiten leer por el teclado los
	    // datos de los Vendedores para ser almacenados en la memoria
	    string ced, nom;
	    float sueldb,monttv;
	    int resp;
	    MVendedor mven;  // Establece una relación de Agregracion
	    do
	    {
	        ve.Limpiar();
		    ve.ImprimirEncabezado("\n\n   Datos de los Vendedores","   ==================================");
		    //bloque de instrucciones que permiten leer los datos de entrada por cada Vendedor
		    ced = ve.LeerString("\n   Cedula : ");
	        if (me.BusquedaVendedor(ced) != -1)
	        {
	            ve.ImprimirMensaje ("\n   El Vendedor ya existe: ");
	            ve.Pausa();
	        }
	        else
	        {
		        nom = ve.LeerString("\n   Nombre : ");
		        sueldb = ve.LeerNroDecimal("\n   Sueldo Basico : ");
		        monttv = ve.LeerNroDecimal("\n   Monto Total Ventas : ");
		        //bloque de instrucciones que permiten darle estado al objeto de la clase MVendedorr
		        mven.SetCedula(ced);
		        mven.SetNombre(nom);
		        mven.setmonttv(monttv);
	            mven.setsueldb(sueldb);
	            mven.setsueldneto();// aqui seteo el sueldo neto
		        //Instrucción que permite incluir al Vendedor
	            me.IncluirVendedor(mven);

	        }
		    resp = ve.LeerValidarNro("\n\n   Desea incluir otro Vendedor (1)Si  (2)No : ",1,2);
	    }
	    while (resp == 1);
	    chequeo_opcion = true;
}

void Controlador::ReporteVendedores() {
	  //Chequeo de que hayan datos para generar el reporte
	    ve.Limpiar();
	    if (chequeo_opcion)
		{
		    /*Bloque de instrucciones que solicita al objeto de MEmpresa
		    la información de todos los Vendedores que se debe imprimir*/
		    vector<string> auxced, auxnom;
		    vector<float> auxsueldn;
		    for (int i = 0; i < me.CantVendedores(); ++i)
		    {
		        auxced.push_back(me.getVendedor(i).GetCedula());
		        auxnom.push_back(me.getVendedor(i).GetNombre());
		        auxsueldn.push_back(me.getVendedor(i).getsueldneto());
		    }
		    /* Método de la clase VEmpresa que se encarga de
		    imprimir el reporte */
		    ve.ReporteVendedores(auxced,auxnom,auxsueldn);
		    return;
		}
	    ve.Limpiar();
	    ve.ImprimirMensaje("\n\n NO EXISTEN DATOS QUE PERMITAN GENERAR LAS SALIDAS REQUERIDAS\n\n");
	    ve.Pausa();
}

void Controlador::CargarPorc() {
	ve.Limpiar();
		    if (chequeo_opcion){
	ve.PorcentajeVespec(me.Porcvesp());
		    }
}
