algoritmo "Exemplo basicos de sesenao"
// Fun��o : Instru��es b�sicas para Se e Senao
// Autor : sabino.ws.rs@gmail.com
// Data : 02/09/2016
// DICAS AP�S FIMALGORITMO

var // Declara��o de vari�veis
    num1 : inteiro
    num2 : inteiro
inicio

	// Inicializa��o de vari�veis
	num1 <- 0
   num2 <- 0

	escreval (" --- EXEMPLOS DE SE (IF) E OPERADORES LOGICOS ---")
	
	// Entradas
	escreval ("")
	escreval (" - Entradas -")
	escreva ("Digite um valor inteiro (num1): ")
	leia (num1)
	escreva ("Digite um valor inteiro (num2): ")
	leia (num2)
	
	escreval ("")
	escreval (" - Valores Guardados - ")
	escreval (" -> Valor 1 (I): ", num1)
	escreval (" -> Valor 2 (I): ", num2)
	escreval (" Primeiro SE verificar� se num1 � igual ao numero 1)
	escreval (" Segundo SE verificar� se num2 � igual ao numero 2 SENAO verificar� SE � igual a 3)

   // Processamento Teste 1
	escreval ("")
	escreval ("Teste 1 entrou em: ")
	se (num1 = 1) entao
		escreval (" -> Teste 'se'. Valor 1 = ", num1)
		senao
		     escreval (" -> Teste 'senao'. Valor 1 = Qualquer numero diferente de 1")
   fimse
	// fim Processamento Teste 1
	
	// Processamento Teste 2
	escreval ("")
	escreval ("Teste 2 entrou em: ")
	se (num2 = 2) entao
		escreval (" -> Teste 'if'. Valor 2 igual a 2")
		senao
         se (num2 = 3) entao
   			escreval (" -> Teste 'else if'. Valor diferente de 2 (if falso) e valor 2 igual a 3")	
            senao
   		   	escreval (" -> Nenhum. Else do 'else if'")
         fimse
	fimse
	// fim Processamento Teste 2
	
	escreval ("")

fimalgoritmo
