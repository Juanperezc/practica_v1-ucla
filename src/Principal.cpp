/*
 * Principal.cpp
 *
 *  Created on: 27/1/2016
 *      Author: Noris
 */




#include "Controlador.h"
#include "VGeneral.h"

int main()
{
   int opc;
   VGeneral  vg;
   Controlador c;
   do
   {
     vg.Limpiar();
     vg.ImprimirLineasBlanco(2);
     vg.Limpiar();
     vg.ImprimirEncabezado("\n      M E N U  O P C I O N E S\n","      =======  ===============");
     vg.ImprimirMensaje("   1. CARGAR VENDEDORES\n");
     vg.ImprimirMensaje("   2. CARGAR REPORTE VENDEDORES\n");
     vg.ImprimirMensaje("   3. PORCENTAJE DE VENDEDORES CUYO MONTO TOTAL DE VENTAS ESTUVO ENSIMA DEL 90% DE LA MAYOR VENTA\n");
     vg.ImprimirMensaje("   4. FINALIZAR\n\n");
     opc = vg.LeerValidarNro("   SELECCIONE SU OPCION : ",1,4);
     switch (opc)
     {
      case 1: c.CargarVendedores();
              break;
      case 2: c.ReporteVendedores();
              break;
      case 3: c.CargarPorc();
              break;
     }
   }
   while(opc != 4);
   return 0;
}


