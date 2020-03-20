//programa en c
//LICY_P06
//16/03/2020
//YAEL IVAN LINARES CRUZ
/*
Realizar un programa que contenga funciones que realice lo siguiente.
1.- Leer una cadena, desplegar la cadena en forma : original, en
mayúsculas, minúsculas, al revez. Cantidad de caracteres, Cantidad de
vocales, consonantes y espacios o caracteres especiales.
2.- Leer una cadena y desplegarla de la siguiente manera:
(Realizar una función para cada salida)
cadena: Ensenada

*/

#include <stdlib.h>
#include <time.h>
#include <string.h>
//prototipos
void menu (void);
void cadena_1(char *frase);
void cadena_2(char *frase,char *frase_rev);
//funcion principa;l
int main (void)
{
   menu();
   return 0;
}