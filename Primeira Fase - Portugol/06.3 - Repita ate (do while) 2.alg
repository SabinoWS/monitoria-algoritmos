
algoritmo "REPITA 2 (do while)"
// Fun��o : Comando REPITA com op��o de sa�da
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016
// DICAS AP�S "FIMALGORITMO"

var // Declara��o de vari�veis
   opcao : inteiro // Guardar� a op��o do usu�rio em cada volta
   saida : inteiro // Guardar� a condi��o de sa�da do loop
   voltaAtual : inteiro // Acumular� as voltas
inicio

   saida <- 666 //  Condi��o de sa�da anunciada para o usu�rio dentro do Loop
                // note que mesmo contendo o n�mero de sa�da, ele far� pelo menos
                // uma vez a volta.

   repita
         voltaAtual <- voltaAtual + 1; // Aumentar� em cada volta, neste caso, apenas para contar e n�o ser� usado para sair
         escreval ("Volta atual: ", voltaAtual) // Apenas mostra, �ra o usu�rio, em qual volta est�
         escreval (" Digite 666 para sair do Loop ou digite outro numero para continuar: ")
         leia (opcao) // Aqui o usu�rio decidir� se desejsa sair do Loop
   ate (opcao = saida) // Condi��o de sa�da. Aqui pode ser usado qualquer teste l�gico!
   
fimalgoritmo
// DICAS:

// A maioria dos programas podem ser feitos de muitas formas,
// brinque alterando este at� aprender bem como funciona.

// Este comando sozinho � f�cil e b�sico por�m ele � muito utilizado com outros comandos e
// para resolver in�meros problemas.

// Pode ser feito de diversas formas, principalmente o tipo de vari�vel.
// Tente fazer o controle de sa�da usando caractere e n�o inteiro.
// Tente fazer mais entradas dentro do loop e uma condicao de sa�da mais complexa usando
// 'e' e 'ou' (tabela verdade)  Ex: 'ate ((a<b) e (c > d))




