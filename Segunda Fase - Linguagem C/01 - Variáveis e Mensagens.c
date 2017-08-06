// Sabino

// Exemplo de mensagens

// CHAMADO DE BIBLIOTECAS -------Novo--------
#include <stdio.h>         // Comandos de entrada (teclado) e saída (mensagens)
//#include <string.h>	   // Comandos referentes ao processo de Strings
//#include <stdlib.h>
//#include <conio.h>	   // Comandos para manipulação de fontes (cores etc)
//#include <dos.h>
//#include <windows.h>
//#include <time.h>        // Manipulação de tempo
//#include <ctype.h>
#include <locale.h>        // Escolha de região (Ex: Caracteres especiais "ç")
//#include <math.h>        // Comandos matemáticos
// Obs: Bibliotecas comentadas não estão sendo utilizadas

/* EQUIVALENTES AO VISUALG 
	printf (); = escreva ()
	int = inteiro
	float = real
	char = caracter único
	char [] = sequência de caracteres Ex: mensagem[10] = Mensagem com 10 caracteres
	int main (...) { = Início
	} do main = Fim da função
	Adendos:
 	Usa-se sinal = para atribuição de valores em variáveis
	Utilizar ; após finalizar comandos
*/

// INÍCIO da função principal/main (código principal) -------Novo--------
main() { // int main(int argc, char *argv[])
	
	setlocale (LC_ALL,""); // Muda a localidade
	/* Obs:
		lc_all faz referência à todos os aspectos da localização.
		"" vazia configura para localização atual do sistema. */
	
	// Declaração de variáveis -------Novo--------
	int num1, num2; // Valores inteiro
	float dolar; // Valores reais	
	char letra1 = 'A'; // Caracter
	char mensagem1[] = "Hello World!"; // Vários caracteres (String)
	// Obs: [] vazio para o compilador determinar o tamanho.
	
	// Iniciação/Atribuição das variáveis (podem ser iniciadas na declaração) -------Novo--------
	letra1 = 'A';
	dolar = 3.92;
	num1 = 10;
	// Obs: Recomenda-se sempre iniciar um valor na variável antes de processá-la (pode conter lixo se vier vazia)
	
	// Mensagens -------Novo--------
	printf ("PROGRAMA COM EXEMPLOS BÁSICOS DE MENSAGENS !!!\n"); // Mensagem direta
	printf ("\n String / char:    %s / %c", mensagem1, letra1); // Ex imprimir String (2 em 1 mensagem)
	printf ("\n Número real:      %2.2f", dolar); // Exemplo imprimir n real
	printf ("\n Número inteiro:   %d", num1); // Exemplo imprimir n inteiro
	printf ("\n Porcento:         %%"); // Exemplo para imprimir o simbolo %
	printf ("\n\n");
	// Obs: \n = Quebrar para próxima linha
	
	system ("pause"); // Encerra o programa (precisa para quando executado direto pelo .exe)
}
