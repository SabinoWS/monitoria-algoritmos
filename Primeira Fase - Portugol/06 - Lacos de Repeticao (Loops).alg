algoritmo " Exemplos de Loop"
// Função : Instruções básicas para ---
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016

var // Declaração de variáveis
num1 : inteiro
contador : inteiro
acumulador : inteiro
limite : inteiro
inicio

	// inicialização de variáveis
	num1 <- 0
	contador <- 1
	acumulador <- 0
	limite <- 0

	escreval (" --- EXEMPLOS BASICOS DE LAÇOS --- ")

	// While (enquanto) -------------------------------------------------------
	escreval ("LOOP WHILE: ")
	escreva (" - Digite quantas voltas o loop While dara (limite): ")
	leia (limite)

	enquanto (contador <= limite) faca
		escreval ("Volta numero: ", contador)
		contador <- contador + 1
	fimenquanto
	// fim While -------------------------------------------------------
	
	// Resetar variáveis de controle para o próximo exemplo delaço
	contador <- 0
	limite <- 0
	// num1 continuará sendo o mesmo da entrada do usuário
	
	// Do While (repita) -----------------------------------------------
	escreval (" LOOP DO WHILE:")
	repita
		escreval (" - Digite um valor ou 0 para sair do Loop: ")
		leia (num1)
		acumulador <- acumulador + num1
		contador <- contador + 1
	ate (num1 = 0)
	escreval ("Quantidade de entradas no Loop = ", contador)
	// fim Do Repita -------------------------------------------------------
	
	// Resetar variáveis de controle para o próximo laço
	contador <- 0
	limite <- 0
	contador <- 0
	
	// For (para) -------------------------------------------------------
	escreval (" LOOP FOR: ")
	escreval (" - Digite o comeco do Loop: ")
	leia (contador)
	escreval (" - Digite o limite do Loop: ")
	leia (limite)
	para contador de contador ate limite passo 1 faca
		escreval ("Volta numero: ", contador)
	fimpara
	
	escreval ("")

fimalgoritmo
