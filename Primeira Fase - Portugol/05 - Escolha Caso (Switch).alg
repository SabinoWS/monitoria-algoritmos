algoritmo "Exemplo Caso"
// Fun��o : Instru��es b�sicas para comando Escolha Caso
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016
// DICAS AP�S FIMALGORITMO

var // Declara��o de vari�veis
    num1 : inteiro
inicio

	// Inicializa��o de vari�veis
	num1 <- 0

	escreval ("EXEMPLOS DE SWITCH !!! \n\n")
	
	// Entradas
	escreval ("")
   escreval (" - Entradas - ")
	escreval ("Digite um valor para escolher o caso:")
	escreval (" -> 1 - Caso 1")
   escreval (" -> 2 - Caso 2")
   escreval (" -> 3 - Caso 3")
   escreval (" -> 4 - Caso 4 ")
   escreval (" -> Outro n�mero - Outro Caso (default) ") // Menu
	escreva (" Escolha: ")
	leia (num1)
	
   escreval ("")
   escreval (" - Valores Guardados - ")	
	escreval (" -> Valor 1 (I) = ", num1)
	escreval ("")
	
   escreval ("")
   escreval (" - Sa�das/Resultados - ")		
	// Switch (escolhacaso)
	escolha (num1)
		caso 1
			escreval (" -> Voce escolheu o caso 1.")		
		caso 2
			escreval (" -> Voce escolheu o caso 2.")		
		caso 3
			escreval (" -> Voce escolheu o caso 3.")		
		caso 4
			escreval (" -> Voce escolheu o caso 4.")		
		outrocaso
			escreval (" -> Default (Nenhum do menu).")	
  fimescolha
  
  escreval ("")

fimalgoritmo
