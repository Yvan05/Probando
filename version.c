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
//esta funcion imprime cadena original,alreves, mayusculas, minusculas,numeros y caracteres raros
void cadena_1(char *frase)
{
	int vocales=0,consonantes=0,espacios=0,especiales=0,numeros=0,caracteres=0;
	char *letra;
	letra = frase;
	//original
	printf("Cadena original:\n");
	puts(frase);
	//mayusculas
	printf("\nCadena mayuscula:\n");
	strupr(frase);
	puts(frase);
	//minusculas
	printf("\nCadena minuscula:\n");
	strlwr(frase);
	puts(frase);
	//al reves
	printf("\nCadena al reves:\n");
	strrev(frase);	
	puts(frase);
	printf("\n");
	//caracter nullo o espacio
	while (*letra != '\0')
	{ 
		if (*letra == 65 || *letra == 97 || *letra == 69|| *letra == 101 || *letra == 73 || *letra ==105|| *letra == 79|| *letra == 111 || *letra == 85|| *letra == 117)
		   {
		   		vocales ++;
		   }
		   else
		   {
		   		if  ( !( *letra >= 48 && *letra <= 57 || *letra >= 32 && *letra <= 47 || *letra >= 58 && *letra <= 64 || *letra >= 91 && *letra <= 96 || *letra >= 123 && *letra <= 126)) 
		   			{
		     			consonantes ++;	   	
		   			}
		   		   else
		   			 {
		   				if (*letra == 32)
		   				   {
		   						espacios++;
		  				   }
		  				  else
		   					{
		   						if (*letra >= 48 && *letra <= 57)
		   						   {
		   								numeros++;
		  						   }
		  						  else
		  							{
		  								especiales++;
		  							}
		   						
		   					}
		   			} 			
		   }		    
	    letra++; 
	}
	caracteres=vocales+consonantes+espacios+numeros+especiales;
	printf("Vocales:%d\n\nConsonantes:%d\n\nEspacios:%d\n\nNumeros:%d\n\nEspeciales:%d\n\nNoCaracteres:%d\n",vocales,consonantes,espacios,numeros,especiales,caracteres);
}
void cadena_2(char *frase,char *frase_rev)
{
	
	char cad [100];
	int i;
	int j;
	int k;	
	int cont_1=strlen(frase),cont_2=0;
	//mayusculas
	strupr(frase);
	strcpy(frase_rev,frase);
	strcpy(cad,frase);
	j=strlen(cad);
	printf("Salida1:\n");
	puts(frase);
	printf("\nSalida2:\n");
    //alreves
	strrev(frase_rev);	
	puts(frase_rev);
	printf("\nSalida3:\n");
	//vertical

	while (*frase != '\0')
	{
		printf("\n%c",*frase);	
		frase++;
	}
	printf("\nSalida4:\n");
	//vertcal reves
	while (*frase_rev != '\0')
	{
		printf("\n%c",*frase_rev);	
		frase_rev++;
	}
	printf("\n");
	printf("\nSalida5:\n");
	///salida 5

	for( k = 0; k <= j; k++ )
	   {
		 for( i = 0; i < j - k; i++ )
	        {
	   			printf("%c",cad[i]);		
	   		}
			printf("\n");
	   }
	printf("\nSalida6:\n");
///salida 6
	printf("\n");printf("\n");
	strrev(cad);
	for( k = 0; k <= j; k++ )
	   {
			for( i = 0; i < j - k; i++ )
	    	   {
	   				printf("%c",cad[i]);
	   		
	   		   }
			printf("\n");
		}
	printf("\n");printf("\n");
	printf("\nSalida8:\n");
///salida 8
	
	
	for( k = 0; k <= j; k++ )
	   {
			for( i = k; i < j; i++ )
	   		   {
	   				printf("%c",cad[i]);
	   		
	   		   }
	   	 
			printf("\n");
		}
	printf("\nSalida7:\n");
    ///salida 7
	strrev(cad);
	
	for( k = 0; k <= j; k++ )
	   {
		 for( i = k; i <= j; i++ )
	   		{
	   			printf("%c",cad[i]);		
	   		}
	   	 
		 printf("\n");
	   }
	printf("\n");
	printf("\nSalida9:\n");
///salida 9
  
	printf("vocales\n");
	for( i = 0; i <= j; i++ )
	   {
		  	if ( cad[i] == 65 || cad[i] == 69 || cad[i] == 73|| cad[i] == 79 || cad[i] == 85)
		       {	  
	   				printf("%c",cad[i]);
	   		   }
	   }
	printf("\n");
	printf("\nSalida10:\n");
	printf("Consonantes\n");
	for( i = 0; i <= j; i++ )
	   {
	   		if ( !( cad[i] == 65 || cad[i] == 69 || cad[i] == 73|| cad[i] == 79 || cad[i] == 85))
		   	   {
	   				printf("%c",cad[i]);
		   	   }
	   }
	printf("\n");	
}