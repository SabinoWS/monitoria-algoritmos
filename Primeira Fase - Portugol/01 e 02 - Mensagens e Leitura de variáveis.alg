algoritmo "Exemplos Entrada de Dados"
// Fun��o : Instru��es b�sicas para Entradas de Dados
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016

var // Declara��o de vari�veis
    valorInteiro : inteiro
    valorReal : real
    msg1 : caractere
    valorLogico : logico
inicio
	// Inicializa��o de vari�veis
	valorInteiro <- 0
	valorReal <- 0
	msg1 <- ""
	valorLogico <- verdadeiro
	
	// Entrada/Leia para INTEIRO -------Novo--------
	escreval ("")
	escreval (" --- GUARDAR VARIAVEL INTEIRA --- ") // Apresenta��o para o usu�rio
	escreva (" - Digite um valor inteiro: ") // Instru��o  para o usu�rio
	leia (valorInteiro) // Leitura da vari�vel inteira 'valorInteiro'
	escreval (" - Voce digitou: ->  ", valorInteiro) // Mostra o valor guardado em 'valorInteiro'
	
	// Entrada/Leia para REAL -------Novo--------
	escreval ("")
	escreval (" --- GUARDAR VARIAVEL REAL ---")
	escreva (" - Digite um valor real: ")
	leia (valorReal)
	escreval (" - Voce digitou: -> ", valorReal)
	
	// Entrada/Leia para TEXTO (Liter�rio/String) -------Novo--------
	escreval ("")
	escreval (" --- GUARDAR CARACTER/TEXTO ---")
	escreva (" - Digite uma mensagem (Texto/String): ")
	leia (msg1)
	escreval (" - Voce digitou: -> ", msg1)

	escreval ("")
	escreval (" --- Fim do programa ---")
	
fimalgoritmo
