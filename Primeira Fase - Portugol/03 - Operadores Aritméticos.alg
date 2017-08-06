algoritmo "Exemplos operadores"
// Função : Instruções básicas para Operadores Aritméticos
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016
// DICAS APÓS ""

var
    // Declaração de variáveis
    num1, num2 : inteiro
    num3, num4 : real
    resultSoma, resultSub, resultMult, resultMod : inteiro
    resultDivR : real
    
inicio

	// Inicialização de variáveis
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
	
	// CÁLCULOS -------------Novo---------------
	// (sem tratamento de divisão por 0)
	
	// Utilizando apenas inteiros
	escreval ("SOMA") // Apresentação para usuário
	resultSoma <- num1 + num2 // Cálculo
	escreval (num1," + ", num2," = ", resultSoma) // Apresenta o cálculo e o resultado
	
	escreval ("SUBTRACAO")
	resultSub <- num1 - num2
	escreval (num1," - ", num2," = ", resultSub)
	
	escreval ("MULTIPLICACAO")
	resultMult <- num1 * num2
	escreval (num1," * ", num2," = ", resultMult)
	
	// Divisao com INTEIROS porém com resultado REAL
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
	
	// fim CÁLCULOS
	
	escreval ("")


fimalgoritmo
