/*
 *  MPersona.h
 *  Creado: 22/10/2011
 *  Autor: Prof. Luis Pereira
 *  Ajustado: 17/04/2012
 */

#ifndef MPERSONA_H //DIRECTIVAS DE PREPROCESADOR QUE CHEQUEA SI NO EXISTE LA ETIQUETA MPERSONA_H
#define MPERSONA_H //DIRECTIVAS DE PREPROCESADOR QUE CREA LA ETIQUETA MPERSONA_H
#include <string> //se incluye la clase string porque se requiere para el nombre 
using namespace std; //se requiere cada vez que incluimos una clase estandar de C++

//DECLARACION DE LA CLASE Persona
class MPersona
{
      protected:
              string cedula,nombre,dir,tlf; 
              char sexo,edocivil;
              int edad;
      public:
              MPersona();
              void SetCedula(string);
              void SetNombre(string);
              string GetCedula();
              string GetNombre();

}; 
#endif     

