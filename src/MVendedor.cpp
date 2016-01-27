/*
 * MVendedor.cpp
 *
 *  Created on: 27/1/2016
 *      Author: Noris
 */

#include "MVendedor.h"




void MVendedor::setmonttv(float monttv) {
	this->monttv = monttv;
}


float MVendedor::getsueldb() const {
	return sueldb;
}

void MVendedor::setsueldb(float sueldb) {
	this->sueldb = sueldb;
}

MVendedor::MVendedor() {
	// TODO Auto-generated constructor stub

}

void MVendedor::setsueldneto() {

	sueldn= sueldb + calcomision();
}


float MVendedor::getsueldneto() {
	return sueldn;
}

float MVendedor::calcomision() {
	float static var1 = 500000;
	float static var2 = 1000000;
	if (monttv < var1)
		return monttv * 0.025;
	else if (monttv >= var1 && monttv <=var2)
		return monttv * 0.05;
	else if (monttv > var2)
		return monttv * 0.07;
}

float MVendedor::getmonttv() const {
	return monttv;
}
