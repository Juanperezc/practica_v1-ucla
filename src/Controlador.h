/*
 * Controlador.h
 *
 *  Created on: 27/1/2016
 *      Author: Noris
 */

#ifndef SRC_CONTROLADOR_H_
#define SRC_CONTROLADOR_H_
#include "MEmpresa.h"
#include "VEmpresa.h"
class Controlador {

private:
	MEmpresa me;
		VEmpresa ve;
		bool chequeo_opcion;
public:
	Controlador();
	void CargarVendedores();
	void ReporteVendedores();
	void CargarPorc();
};

#endif /* SRC_CONTROLADOR_H_ */
