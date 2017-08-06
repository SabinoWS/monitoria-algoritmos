// Sabino

// Cont�m:
// Exemplos de funcao

// CHAMADO DE BIBLIOTECAS
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
//#include <dos.h>
//#include <windows.h>
//#include <time.h>
//#include <ctype.h>
#include <locale.h>
//#include <math.h>

/*EQUIVALENTE AO VISUALG
		  ???
*/

// Fun��o com valores e sem retorno
void soma (numero1, numero2)
{
	printf ("FUN��O COM VALORES SEM RETORNO (VOID) \n");
	int resultado = 0;
	resultado = numero1 + numero2;
	printf ("O resultado da soma de %d e %d �: %d", numero1, numero2, resultado);
}

// Fun��o com valores e com retorno
int mult (numero1, numero2)
{
	printf ("FUN��O COM VALORES COM RETORNO (Int) \n");
	int resultado = 0;
	resultado = numero1 * numero2;
}
  
// Fun��o com REFER�NCIA * (troca de valores)
void troca(int *a, int *b)    
{    
	int temp;    
	temp = *a;     
	*a = *b;     
	*b = temp;     
	//printf ("\nEndere�o de &a: %d", &a);
  	//printf ("\nApontador de *a: %d\n", &b);  
}    
    
int main () {    
	
	setlocale (LC_ALL,"");
	
  	// Soma de valores usando fun��o void (sem retorno)
  	int num1 = 5, num2 = 5;
  	soma(num1, num2); // Chamando fun��o 'soma' e enviando os par�metros para o processo
  	printf ("\n\n");
  	// fim Soma de valores usando fun��o void
  	
  	// Soma de valores usando fun��o int (com retorno)
  	int num3 = 2, num4 = 50, result = 0;
  	result = mult(num3, num4); // Chamando fun��o 'mult' e enviando os par�metros para o processo
  	printf ("O resultado da multiplica��o de %d e %d �: %d", num3, num4, result);
  	printf ("\n\n");
  	// fim Soma de valores usando fun��o int
  	
  	// Troca de valores usando fun��o com ponteiro
	int a = 1, b = 2;  
	printf ("Antes da fun��o de troca: \n");
	printf(" A = %d \n B = %d \n", a, b);  
	troca(&a,&b);   
	printf ("Depois da fun��o de troca: \n");
	printf(" A = %d \n B = %d \n", a, b);   
	printf ("Endere�o de &a: %d", a);
  	printf ("\nApontador de *a: %d", b);
	printf ("\n");
  	/* Obs:
  		& indica o endere�o
  		* indica o conte�do do apontador
  	*/
	// fim Troca de valores
  	
  system ("pause");
}   
