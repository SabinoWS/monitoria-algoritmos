
algoritmo "REPITA 1 (do while)"
// Função : Instruções básicas para comando REPITA
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016
// DICAS APÓS "FIMALGORITMO"

var // Declaração de variáveis
   chegada : inteiro // Guardará o número máximo de voltas que o loop dará (controle para o fim)
   voltaAtual : inteiro // Contará as voltas atuais
inicio
   // Inicialização de variáveis
   chegada <- 0
   voltaAtual <- 0
   
   escreval (" Informe quantas voltas serão dadas: ")
   leia (chegada)
   
   repita
         voltaAtual <- voltaAtual + 1; // Aumentará em cada volta até alcançar a chegada
         escreval ("Volta", voltaAtual) // Apenas mostra, ára o usuário, em qual volta está
   ate (voltaAtual = chegada) // Aqui pode ser usado qualquer teste lógico!
   
fimalgoritmo
// DICAS:

// Para quê usar o repita?
// Diferente dos outros comandos de repetição, o REPITA (do while) fará
// seu teste apenas DEPOIS de executar, no minímo, uma vez seu bloco de comando interior.
// O uso mais comum é para pedir uma entrada dentro dele, e caso essa entrada não seja
// o comando de saída, ele voltará para o começo e ficará repitindo.
// ( Ver esse exemplo no arquivo 'Loop - Repita 2'

// Leia o código por extenso!!!
// REPITA o |bloco de comando| ATÉ que
// o conteúdo da variável 'voltaAtual' for IGUAL ao conteúdo da variável 'chegada'

// Pense no comando funcionando como uma pinça, começa no 'repita' e termina no
// 'ate'. Tendo como repetição tudo o que há dentro dele, até que a condição seja VERDADE.

// É possível por QUALQUER comando, por exemplo um 'se' (if) ou
// até mesmo outros loops, dentro do loop.

// 'voltaAtual <- voltaAtual + 1;'
// este código para acumular as voltas pode ser alterado para pular
// dando quantos passos você quiser em cada volta.
// Ex: 'voltaAtual <- voltaAtual + 3;'



