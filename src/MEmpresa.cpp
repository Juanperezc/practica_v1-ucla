/*
 * MEmpresa.cpp
 *
 *  Created on: 27/1/2016
 *      Author: Noris
 */

#include "MEmpresa.h"

void MEmpresa::IncluirVendedor(MVendedor mv) {
vec_vend.push_back(mv);
}

MVendedor MEmpresa::getVendedor(int i) {
	return vec_vend[i];
}

float MEmpresa::TotalSueldN() {
	float acumsueldn=0;
	for (int i=0; i<CantVendedores();i++){
		acumsueldn+= vec_vend[i].getsueldneto();
	}
	return acumsueldn;
}

float MEmpresa::Porcvesp() {
	float static dporcmayorv = (MayorMVenta() - (MayorMVenta() * 0.10)); // 10% menos a la mayor venta
	int conte=0; //contador especifico;
	for (int i=0; i<CantVendedores();i++){
		if (vec_vend[i].getmonttv() > dporcmayorv)
			conte++;
		}
	return conte * 100/CantVendedores();
}

int MEmpresa::CantVendedores() {
	return vec_vend.size();
}

float MEmpresa::MayorMVenta() {
	float mayormventa=0;
	for (int i=0; i<CantVendedores();i++){
		if  (vec_vend[i].getmonttv() > mayormventa)
			mayormventa= vec_vend[i].getmonttv();
		}
	return mayormventa;
}

int MEmpresa::BusquedaVendedor(string ced) {

	    for (int i=0; i<CantVendedores();++i)
	       if (vec_vend[i].GetCedula() == ced)
		      return i;
		   return -1;

}

MEmpresa::MEmpresa() {
	// TODO Auto-generated constructor stub

}

