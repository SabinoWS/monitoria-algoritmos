algoritmo "ENQUANTO (WHILE)
// Fun��o : Instru��es b�sicas para comando ENQUANTO
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016
// DICAS AP�S "FIMALGORITMO"

var // Declara��o de vari�veis
   largada : inteiro // Guardar� o Km inicial de corrida
   chegada : inteiro // Guardar� o Km final da corrida
   kmAtual : inteiro // Contar� os Km rodados
inicio
   // Inicializa��es de vari�veis
   chegada <- 12
   kmAtual <- 0

   // Entradas do usu�rio
   escreval (" - Sabendo que se come�ar ap�s o KM da chegada (12) ele est� desclassificado,")
   escreval ("informe de qual KM o carro come�ar� a corrida: ")
   leia (largada) // Aqui poderia ser lido direto o 'kmAtual' explica��o abaixo.

   kmAtual <- largada // Isso n�o � necess�rio. Poderia usar a largada no loop.
                      // Usei para o funcionamento do loop ficar mais vis�vel.
                      // E tamb�m para guardar o valor da largada

   // Processo e sa�da
   enquanto (kmAtual <= chegada) faca
         escreval (" > Km atual: ", kmAtual)
         kmAtual <- kmAtual + 1
   fimenquanto

fimalgoritmo
// DICAS:

// Para qu� usar o enquanto?
// Ele � quase igual o repita, por�m ele far� um teste l�gico ANTES
// de come�ar a volta do loop. Caso este teste retorne como
// FALSO, ele n�o executar� a volta, coisa que pode acontecer j� na primeira
// e n�o entrar nenhuma vez no loop.

// Ler em extenso:
// Enquanto VERDADE fa�a |bloco de comando|

// Tente por um 'se' para mostrar uma mensagem caso o usu�rio for desclassificado

