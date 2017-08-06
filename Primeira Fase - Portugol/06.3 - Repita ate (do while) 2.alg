
algoritmo "REPITA 2 (do while)"
// Função : Comando REPITA com opção de saída
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016
// DICAS APÓS "FIMALGORITMO"

var // Declaração de variáveis
   opcao : inteiro // Guardará a opção do usuário em cada volta
   saida : inteiro // Guardará a condição de saída do loop
   voltaAtual : inteiro // Acumulará as voltas
inicio

   saida <- 666 //  Condição de saída anunciada para o usuário dentro do Loop
                // note que mesmo contendo o número de saída, ele fará pelo menos
                // uma vez a volta.

   repita
         voltaAtual <- voltaAtual + 1; // Aumentará em cada volta, neste caso, apenas para contar e não será usado para sair
         escreval ("Volta atual: ", voltaAtual) // Apenas mostra, ára o usuário, em qual volta está
         escreval (" Digite 666 para sair do Loop ou digite outro numero para continuar: ")
         leia (opcao) // Aqui o usuário decidirá se desejsa sair do Loop
   ate (opcao = saida) // Condição de saída. Aqui pode ser usado qualquer teste lógico!
   
fimalgoritmo
// DICAS:

// A maioria dos programas podem ser feitos de muitas formas,
// brinque alterando este até aprender bem como funciona.

// Este comando sozinho é fácil e básico porém ele é muito utilizado com outros comandos e
// para resolver inúmeros problemas.

// Pode ser feito de diversas formas, principalmente o tipo de variável.
// Tente fazer o controle de saída usando caractere e não inteiro.
// Tente fazer mais entradas dentro do loop e uma condicao de saída mais complexa usando
// 'e' e 'ou' (tabela verdade)  Ex: 'ate ((a<b) e (c > d))




