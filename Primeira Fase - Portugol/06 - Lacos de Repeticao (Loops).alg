algoritmo " Exemplos de Loop"
// Fun��o : Instru��es b�sicas para ---
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016

var // Declara��o de vari�veis
num1 : inteiro
contador : inteiro
acumulador : inteiro
limite : inteiro
inicio

	// inicializa��o de vari�veis
	num1 <- 0
	contador <- 1
	acumulador <- 0
	limite <- 0

	escreval (" --- EXEMPLOS BASICOS DE LA�OS --- ")

	// While (enquanto) -------------------------------------------------------
	escreval ("LOOP WHILE: ")
	escreva (" - Digite quantas voltas o loop While dara (limite): ")
	leia (limite)

	enquanto (contador <= limite) faca
		escreval ("Volta numero: ", contador)
		contador <- contador + 1
	fimenquanto
	// fim While -------------------------------------------------------
	
	// Resetar vari�veis de controle para o pr�ximo exemplo dela�o
	contador <- 0
	limite <- 0
	// num1 continuar� sendo o mesmo da entrada do usu�rio
	
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
	
	// Resetar vari�veis de controle para o pr�ximo la�o
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
