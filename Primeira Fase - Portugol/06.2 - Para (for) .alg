
algoritmo "PARA (FOR)"
// Fun��o : Instru��es b�sicas para comando PARA (for)
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016
// DICAS AP�S "FIMALGORITMO"

var // Declara��o de vari�veis
   largada : inteiro // Come�o do loop
   chegada : inteiro // Fim do Loop
   voltaAtual : inteiro // Contar� as voltas
inicio

   voltaAtual <- 0 // Deve ser inicializada para nao dar erro ao somar +1
   
   // Entradas do usu�rio
   escreva (" - Informe o in�cio do Loop: ")
   leia (largada)
   escreva (" - Informe o fim do Loop: ")
   leia (chegada)
   // Lembre-se, aqui o usu�rio est� entrando com esses dados
   // mas voc� pode inserir constantes, Ex: de 2 ate 6, diretamente no comando 'para'
   
   // Processo e sa�das
   para voltaAtual de largada ate chegada passo 1 faca
        escreval (" Volta: ", voltaAtual)
   fimpara

fimalgoritmo
// DICAS:

// Para qu� usar o 'para'?
// Mais utilizado para repeti��o de blocos de comandos
// que voce sabe qual � o IN�CIO e o FIM do loop.

// Em 'passo' voc� pode usar uma vari�vel que pode ser entrada pelo usu�rio
// neste caso botei uma contante com valor 1 para dar 1 passo em cada volta.

// Lembre-se de ler o comando por extenso:
// para (somando/usando) 'voltaAtual' v� de 'largada' at� 'chegada'
// fazendo este |bloco de comando|

// Tente fazer com n�meros decrescentes, utilizando passo -2
// Crie seus pr�prios enunciados e v� treinando
// Ex: Joao quer saber quais anos viveu, entrando com seu ano de nascimento
// e o ano atual.
// Exemplo da saida: 1992 1993 1994 1995 1996 1997 ... 2016


