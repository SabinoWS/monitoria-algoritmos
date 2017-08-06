algoritmo "ENQUANTO (WHILE)
// Função : Instruções básicas para comando ENQUANTO
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016
// DICAS APÓS "FIMALGORITMO"

var // Declaração de variáveis
   largada : inteiro // Guardará o Km inicial de corrida
   chegada : inteiro // Guardará o Km final da corrida
   kmAtual : inteiro // Contará os Km rodados
inicio
   // Inicializações de variáveis
   chegada <- 12
   kmAtual <- 0

   // Entradas do usuário
   escreval (" - Sabendo que se começar após o KM da chegada (12) ele está desclassificado,")
   escreval ("informe de qual KM o carro começará a corrida: ")
   leia (largada) // Aqui poderia ser lido direto o 'kmAtual' explicação abaixo.

   kmAtual <- largada // Isso não é necessário. Poderia usar a largada no loop.
                      // Usei para o funcionamento do loop ficar mais visível.
                      // E também para guardar o valor da largada

   // Processo e saída
   enquanto (kmAtual <= chegada) faca
         escreval (" > Km atual: ", kmAtual)
         kmAtual <- kmAtual + 1
   fimenquanto

fimalgoritmo
// DICAS:

// Para quê usar o enquanto?
// Ele é quase igual o repita, porém ele fará um teste lógico ANTES
// de começar a volta do loop. Caso este teste retorne como
// FALSO, ele não executará a volta, coisa que pode acontecer já na primeira
// e não entrar nenhuma vez no loop.

// Ler em extenso:
// Enquanto VERDADE faça |bloco de comando|

// Tente por um 'se' para mostrar uma mensagem caso o usuário for desclassificado

