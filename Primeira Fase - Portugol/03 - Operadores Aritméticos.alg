algoritmo "Exemplos operadores"
// Fun��o : Instru��es b�sicas para Operadores Aritm�ticos
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016
// DICAS AP�S ""

var
    // Declara��o de vari�veis
    num1, num2 : inteiro
    num3, num4 : real
    resultSoma, resultSub, resultMult, resultMod : inteiro
    resultDivR : real
    
inicio

	// Inicializa��o de vari�veis
	num1 <- 0
   num2 <- 0
	num3 <- 0
   num4 <- 0
	
	escreval (" -- EXEMPLOS DE OPERADORES E CALCULOS BASICOS --")
	
	escreval ("")
	escreval (" -- Entradas --")
	// Entradas
	escreva (" - Digite um valor inteiro: ")
	leia (num1)
	escreva (" - Digite um segundo valor inteiro: ")
	leia (num2)
	escreva (" - Digite um valor real: ")
	leia (num3)
	escreva (" - Digite um segundo valor real: ")
	leia (num4)
	
	escreval ("")
	escreval (" -- Valores guardados --")
	escreval (" -> Valor 1 (I) = ", num1)
	escreval (" -> Valor 2 (I) = ", num2)
	escreval (" -> Valor 3 (R) = ", num3)
	escreval (" -> Valor 4 (R) = ", num4)
	escreval ("")
	
	// C�LCULOS -------------Novo---------------
	// (sem tratamento de divis�o por 0)
	
	// Utilizando apenas inteiros
	escreval ("SOMA") // Apresenta��o para usu�rio
	resultSoma <- num1 + num2 // C�lculo
	escreval (num1," + ", num2," = ", resultSoma) // Apresenta o c�lculo e o resultado
	
	escreval ("SUBTRACAO")
	resultSub <- num1 - num2
	escreval (num1," - ", num2," = ", resultSub)
	
	escreval ("MULTIPLICACAO")
	resultMult <- num1 * num2
	escreval (num1," * ", num2," = ", resultMult)
	
	// Divisao com INTEIROS por�m com resultado REAL
	escreval ("DIVISAO INTEIROS")
	resultDivR <- num1 / num2
	escreval (num1," / ", num2," = ", resultDivR)
	
	escreval ("RESTO DA DIVISAO")
	resultMod <- num1 % num2
	escreval (num1," Mod ", num2," = ", resultMod)
	
	// Usando num reais
	escreval ("DIVISAO REAIS")
	resultDivR <- (num3 / num4)
	escreval (num3," / ", num4," = ", resultDivR)
	
	// fim C�LCULOS
	
	escreval ("")


fimalgoritmo
