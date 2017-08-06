// Sabino

// Contém:
// Exemplos de If e Operadores Lógicos

// CHAMADO DE BIBLIOTECAS
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
//#include <dos.h>
//#include <windows.h>
//#include <time.h>
//#include <ctype.h>
//#include <locale.h>
//#include <math.h>

/*Equivalentes ao VISUALG
    if ()  =   se ()
    {      =   entao
    else   =   senao
    }      =   fimse
	Obs: if e else fecham separadamente com chaves diferentes.	
	SINAIS: --------------------------------------------------
	Comparação = no if altera para       ==
	Sinal <> diferente altera para      !=
	menor e maior que                   <, >
	Menor ou igual, maior ou igual      <=, >=
	ou                                  ||
	e                                   && 
*/

// Início da função principal/main (código principal)
main() {

	// Declaração e inicialização de variáveis
	int num1 = 0, num2 = 0;

	
	printf ("EXEMPLOS DE IF E OPERADORES LOGICOS !!! \n\n");
	
	// Entradas
	printf ("Digite um valor inteiro: \n   -> ");
	scanf ("%d", &num1);
	printf ("Digite um valor inteiro: \n   -> ");
	scanf ("%d", &num2);
	
	system("cls"); // Limpa a tela após os cadastros dos números
	
	printf ("\n -> Valor 1 (I) = %d", num1);
	printf ("\n -> Valor 2 (I) = %d \n\n", num2);
	
	// Processamento Teste 1
	printf ("Teste 1 entrou em: \n");
	if (num1 == 1)
	{
		printf ("   -> Teste 'if'. Valor 1 = %d", num1);
	}
		else 
		printf ("   -> Teste 'else'. Valor 1 = Qualquer numero diferente de 1");
		{	
			if (num1 == 2)
			{
				printf ("\n   -> Teste 'if dentro do else'. Valor 1 = %d", num1);
			}
		}
	// fim Processamento Teste 1
	
	// Processamento Teste 2
	printf ("\n\n Teste 2 entrou em: \n");
	if (num2 == 2)
	{
		printf ("   -> Teste 'if'. Valor 2 igual a 2");
	}
		else if (num2 == 3)
		{
			printf ("   -> Teste 'else if'. Valor diferente de 2 (if falso) e valor 2 igual a 3");	
		}
		else
		{
			printf ("   -> Nenhum. Else do 'else if'");
		}
	// fim Processamento Teste 2
	
	printf ("\n\n");
	system ("pause"); // Encerra o programa
}
