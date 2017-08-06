algoritmo "Exemplos Entrada de Dados"
// Função : Instruções básicas para Entradas de Dados
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016

var // Declaração de variáveis
    valorInteiro : inteiro
    valorReal : real
    msg1 : caractere
    valorLogico : logico
inicio
	// Inicialização de variáveis
	valorInteiro <- 0
	valorReal <- 0
	msg1 <- ""
	valorLogico <- verdadeiro
	
	// Entrada/Leia para INTEIRO -------Novo--------
	escreval ("")
	escreval (" --- GUARDAR VARIAVEL INTEIRA --- ") // Apresentação para o usuário
	escreva (" - Digite um valor inteiro: ") // Instrução  para o usuário
	leia (valorInteiro) // Leitura da variável inteira 'valorInteiro'
	escreval (" - Voce digitou: ->  ", valorInteiro) // Mostra o valor guardado em 'valorInteiro'
	
	// Entrada/Leia para REAL -------Novo--------
	escreval ("")
	escreval (" --- GUARDAR VARIAVEL REAL ---")
	escreva (" - Digite um valor real: ")
	leia (valorReal)
	escreval (" - Voce digitou: -> ", valorReal)
	
	// Entrada/Leia para TEXTO (Literário/String) -------Novo--------
	escreval ("")
	escreval (" --- GUARDAR CARACTER/TEXTO ---")
	escreva (" - Digite uma mensagem (Texto/String): ")
	leia (msg1)
	escreval (" - Voce digitou: -> ", msg1)

	escreval ("")
	escreval (" --- Fim do programa ---")
	
fimalgoritmo
