
algoritmo "PARA (FOR)"
// Função : Instruções básicas para comando PARA (for)
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016
// DICAS APÓS "FIMALGORITMO"

var // Declaração de variáveis
   largada : inteiro // Começo do loop
   chegada : inteiro // Fim do Loop
   voltaAtual : inteiro // Contará as voltas
inicio

   voltaAtual <- 0 // Deve ser inicializada para nao dar erro ao somar +1
   
   // Entradas do usuário
   escreva (" - Informe o início do Loop: ")
   leia (largada)
   escreva (" - Informe o fim do Loop: ")
   leia (chegada)
   // Lembre-se, aqui o usuário está entrando com esses dados
   // mas você pode inserir constantes, Ex: de 2 ate 6, diretamente no comando 'para'
   
   // Processo e saídas
   para voltaAtual de largada ate chegada passo 1 faca
        escreval (" Volta: ", voltaAtual)
   fimpara

fimalgoritmo
// DICAS:

// Para quê usar o 'para'?
// Mais utilizado para repetição de blocos de comandos
// que voce sabe qual é o INÍCIO e o FIM do loop.

// Em 'passo' você pode usar uma variável que pode ser entrada pelo usuário
// neste caso botei uma contante com valor 1 para dar 1 passo em cada volta.

// Lembre-se de ler o comando por extenso:
// para (somando/usando) 'voltaAtual' vá de 'largada' até 'chegada'
// fazendo este |bloco de comando|

// Tente fazer com números decrescentes, utilizando passo -2
// Crie seus próprios enunciados e vá treinando
// Ex: Joao quer saber quais anos viveu, entrando com seu ano de nascimento
// e o ano atual.
// Exemplo da saida: 1992 1993 1994 1995 1996 1997 ... 2016


