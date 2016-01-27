/*
 *  MPersona.cpp
 *  Creado: 22/10/2011
 *  Autor: Prof. Luis Pereira
 *  Ajustado: 17/04/2012
 */

#include "MPersona.h"
MPersona :: MPersona(){

}

void MPersona :: SetCedula(string ced){
   cedula = ced;
}
   
void MPersona :: SetNombre(string nomb){
   nombre = nomb;
}  

string MPersona :: GetCedula(){
   return cedula;
}     

string MPersona :: GetNombre(){
   return nombre;
}        

