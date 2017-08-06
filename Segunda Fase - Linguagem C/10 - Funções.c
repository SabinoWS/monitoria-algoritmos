// Sabino

// Contém:
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

// Função com valores e sem retorno
void soma (numero1, numero2)
{
	printf ("FUNÇÃO COM VALORES SEM RETORNO (VOID) \n");
	int resultado = 0;
	resultado = numero1 + numero2;
	printf ("O resultado da soma de %d e %d é: %d", numero1, numero2, resultado);
}

// Função com valores e com retorno
int mult (numero1, numero2)
{
	printf ("FUNÇÃO COM VALORES COM RETORNO (Int) \n");
	int resultado = 0;
	resultado = numero1 * numero2;
}
  
// Função com REFERÊNCIA * (troca de valores)
void troca(int *a, int *b)    
{    
	int temp;    
	temp = *a;     
	*a = *b;     
	*b = temp;     
	//printf ("\nEndereço de &a: %d", &a);
  	//printf ("\nApontador de *a: %d\n", &b);  
}    
    
int main () {    
	
	setlocale (LC_ALL,"");
	
  	// Soma de valores usando função void (sem retorno)
  	int num1 = 5, num2 = 5;
  	soma(num1, num2); // Chamando função 'soma' e enviando os parâmetros para o processo
  	printf ("\n\n");
  	// fim Soma de valores usando função void
  	
  	// Soma de valores usando função int (com retorno)
  	int num3 = 2, num4 = 50, result = 0;
  	result = mult(num3, num4); // Chamando função 'mult' e enviando os parâmetros para o processo
  	printf ("O resultado da multiplicação de %d e %d é: %d", num3, num4, result);
  	printf ("\n\n");
  	// fim Soma de valores usando função int
  	
  	// Troca de valores usando função com ponteiro
	int a = 1, b = 2;  
	printf ("Antes da função de troca: \n");
	printf(" A = %d \n B = %d \n", a, b);  
	troca(&a,&b);   
	printf ("Depois da função de troca: \n");
	printf(" A = %d \n B = %d \n", a, b);   
	printf ("Endereço de &a: %d", a);
  	printf ("\nApontador de *a: %d", b);
	printf ("\n");
  	/* Obs:
  		& indica o endereço
  		* indica o conteúdo do apontador
  	*/
	// fim Troca de valores
  	
  system ("pause");
}   
