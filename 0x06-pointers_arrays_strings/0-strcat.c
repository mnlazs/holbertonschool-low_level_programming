#include "main.h"
#include<iostream>
#include<conio.h>
#include<string.h>
/**
 *Escribe una función que concatene dos cadenas.

Prototipo: char *_strcat(char *dest, char *src);
Esta función agrega la cadena src a la cadena dest, sobrescribiendo el byte nulo de terminación (\0) al final de dest, y luego agrega un byte nulo de terminación
Devuelve un puntero a la cadena resultante dest
 *
 *//

char *_strcat(char *dest, char *src)
{
	char *dest[] = "esto es una cadena";
	char *src[] = "de ejemplo";
	char cad[\0];

	strcpy(cad3,cad1); 
	
	strcat(cad3,cad2);
       
	cout<<cad3<<cad1;

	getch();
	return 0;
}

