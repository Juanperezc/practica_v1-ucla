/*
 * MVendedor.h
 *
 *  Created on: 27/1/2016
 *      Author: Noris
 */

#ifndef SRC_MVENDEDOR_H_
#define SRC_MVENDEDOR_H_
#include <string>
#include "MPersona.h"
using namespace std;
class MVendedor: public MPersona{
private:

	float sueldb;
	float monttv;
	float sueldn;
public:
	MVendedor();


	void setmonttv(float monttv);

	float getsueldb() const;
	void setsueldb(float sueldb);
	void setsueldneto();//es un set de un calcular
	float getsueldneto();//un get de un calcular
	float calcomision(); //es una funcion retornabe para calcular la comision
	float getmonttv() const;
};

#endif /* SRC_MVENDEDOR_H_ */
