#include "functions.h"

/*
  Laboratorio 3 - Sistemas operativos
  USACH 1-2017
  Integrantes:
  - Kevin Alvarez
  - Javier Vasquez
  Descripción:
  El presente laboratorio consiste en la creación de hebras, para
  recrear el torneo de fuerza de DBS.
*/

int main(int argc, char** argv)
{

	/*  Realizo el get opt de los valores de entrada hechos por la consola */
	int tamanoTablero, Dflag;
	guerrero *guerreros;
	char *nombreArchivo = (char*)malloc(sizeof(char) * 100);
	call_getopt(argc, argv, &tamanoTablero, &Dflag, &nombreArchivo);
	guerreros = readFile(nombreArchivo);
	create_screen();




	return 0;
}
