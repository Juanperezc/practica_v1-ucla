/*
 * VEmpresa.h
 *
 *  Created on: 27/1/2016
 *      Author: Noris
 */

#ifndef SRC_VEMPRESA_H_
#define SRC_VEMPRESA_H_
#include <vector>
#include "VGeneral.h"
class VEmpresa: public VGeneral{
public:
	void ReporteVendedores(vector<string> auxced,
            vector<string> auxnom,
            vector<float> auxsuel);
	void PorcentajeVespec(int porc);
	VEmpresa();

};

#endif /* SRC_VEMPRESA_H_ */
