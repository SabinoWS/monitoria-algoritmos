// Sabino

// Contém:
// Exemplo de Operadores Aritméticos e alguns cálculos

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
	
*/

// Início da função principal/main (código principal)
main() {

	// Declaração e inicialização de variáveis
	int num1 = 0, num2 = 0;
	float num3 = 0, num4 = 0;
	
	printf ("EXEMPLOS DE OPERADORES E CALCULOS BASICOS !!! \n\n");
	
	// Entradas
	printf ("Digite um valor inteiro: \n   -> ");
	scanf ("%d", &num1);
	printf ("Digite um valor inteiro: \n   -> ");
	scanf ("%d", &num2);
	printf ("Digite um valor real: \n   -> ");
	scanf ("%f", &num3);
	printf ("Digite um valor real: \n   -> ");
	scanf ("%f", &num4);
	
	system("cls"); // Limpa a tela após os cadastros dos números
	
	printf ("\n -> Valor 1 (I) = %d", num1);
	printf ("          -> Valor 3 (R) = %2.2f", num3);
	printf ("\n -> Valor 2 (I) = %d", num2);
	printf ("          -> Valor 4 (R) = %2.2f", num4);
	printf ("\n");
	
	// CÁLCULOS -------------Novo---------------
	// (sem tratamento de divisão por 0) 
	
	// Com Inteiros (num1 e num2)
	printf ("\n SOMA"); // Apresentação  
	int resultSoma = num1 + num2; // Cria nova variável, para o resultado, e atribui o cálculo à ela
	printf ("\n %d + %d = %d", num1, num2, resultSoma); // Apresenta o cálculo e o resultado
	
	printf ("\n SUBTRACAO");
	int resultSub = num1 - num2;
	printf ("\n %d + %d = %d", num1, num2, resultSub);
	
	printf ("\n MULTIPLICACAO");
	int resultMult = num1 * num2;
	printf ("\n %d * %d = %d", num1, num2, resultMult);
	
	printf ("\n DIVISAO INTEIROS");
	float resultDivI = /*(float)*/ num1 / num2;
	printf ("\n %d / %d = %2.2f", num1, num2, resultDivI);
	// Obs:
	//  (float) -desativado-
	//  Converte para float (apenas no cálculo),
	//  dando o resultado correto e não apenas inteiro.
	
	printf ("\n RESTO DA DIVISAO");
	int resultMod = num1 % num2;
	printf ("\n %d Mod %d = %d", num1, num2, resultMod);
	
	printf ("\n\n DIVISAO REAIS");
	float resultDivR = (num3 / num4);
	printf ("\n %2.2f / %2.2f = %2.2f", num3, num4, resultDivR);
	
	// fim CÁLCULOS
	
	printf ("\n\n");
	system ("pause"); // Encerra o programa
}
