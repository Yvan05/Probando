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
void menu(void)
{
   int opc;
   char frase[50],frase_rev[50];
   do
   {
      system ("cls");
      printf("\n M  E   N   U");
	  printf("\n1.- Funcion 1");
	  printf("\n2.- Funcion 2");
	  printf("\n3.- Salir");
	  printf("\nESCOGE UNA OPCION.");
      scanf ("%d",&opc);
	  switch(opc)
	    {
		  case 1: 
		  		  printf("Escriba una frase\t");
		  		  fflush(stdin);
				  gets(frase);
				  cadena_1(frase);  
		  break;
		  case 2: printf("Escriba una frase\t");
		  		  fflush(stdin);
				  gets(frase);
				  strcpy(frase_rev,frase);
				  cadena_2(frase,frase_rev); 
		  break;
		}
	  system("pause");
   }while(opc != 3);
}