
algoritmo "REPITA 1 (do while)"
// Fun��o : Instru��es b�sicas para comando REPITA
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016
// DICAS AP�S "FIMALGORITMO"

var // Declara��o de vari�veis
   chegada : inteiro // Guardar� o n�mero m�ximo de voltas que o loop dar� (controle para o fim)
   voltaAtual : inteiro // Contar� as voltas atuais
inicio
   // Inicializa��o de vari�veis
   chegada <- 0
   voltaAtual <- 0
   
   escreval (" Informe quantas voltas ser�o dadas: ")
   leia (chegada)
   
   repita
         voltaAtual <- voltaAtual + 1; // Aumentar� em cada volta at� alcan�ar a chegada
         escreval ("Volta", voltaAtual) // Apenas mostra, �ra o usu�rio, em qual volta est�
   ate (voltaAtual = chegada) // Aqui pode ser usado qualquer teste l�gico!
   
fimalgoritmo
// DICAS:

// Para qu� usar o repita?
// Diferente dos outros comandos de repeti��o, o REPITA (do while) far�
// seu teste apenas DEPOIS de executar, no min�mo, uma vez seu bloco de comando interior.
// O uso mais comum � para pedir uma entrada dentro dele, e caso essa entrada n�o seja
// o comando de sa�da, ele voltar� para o come�o e ficar� repitindo.
// ( Ver esse exemplo no arquivo 'Loop - Repita 2'

// Leia o c�digo por extenso!!!
// REPITA o |bloco de comando| AT� que
// o conte�do da vari�vel 'voltaAtual' for IGUAL ao conte�do da vari�vel 'chegada'

// Pense no comando funcionando como uma pin�a, come�a no 'repita' e termina no
// 'ate'. Tendo como repeti��o tudo o que h� dentro dele, at� que a condi��o seja VERDADE.

// � poss�vel por QUALQUER comando, por exemplo um 'se' (if) ou
// at� mesmo outros loops, dentro do loop.

// 'voltaAtual <- voltaAtual + 1;'
// este c�digo para acumular as voltas pode ser alterado para pular
// dando quantos passos voc� quiser em cada volta.
// Ex: 'voltaAtual <- voltaAtual + 3;'



