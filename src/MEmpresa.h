/*
 * MEmpresa.h
 *
 *  Created on: 27/1/2016
 *      Author: Noris
 */
// las cosas nuevas las comente con "new"
#ifndef SRC_MEMPRESA_H_
#define SRC_MEMPRESA_H_
#include "MVendedor.h"
#include <vector>
class MEmpresa {
private:
	 vector<MVendedor> vec_vend; //new
public:
	 void IncluirVendedor(MVendedor mv); //new
	 MVendedor getVendedor(int i);   // new
	 int CantVendedores();
	 int BusquedaVendedor(string ced); // Esto es para verificar que una ced no se repita
	 float TotalSueldN();//Total Sueldos Neto
	 float MayorMVenta(); // La Mayor Venta
	 float Porcvesp(); // Porcentaje que sale :P
	MEmpresa();
};

#endif /* SRC_MEMPRESA_H_ */
