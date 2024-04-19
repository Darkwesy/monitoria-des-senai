texto = input("Digite um texto: ")
textoCapitalizado = texto.capitalize()
textoMinusculo = texto.lower()
textoSemEspaco = texto.replace(" ", "")
tamanhoTexto = len(textoSemEspaco)
primeiraLetra = texto[0]

# Exibir os resultados
print("Texto capitalizado:", textoCapitalizado)
print("Texto em minúsculas:",textoMinusculo)
print("Texto sem espaço:", textoSemEspaco)
print("Tamanho do real do texto:", tamanhoTexto, "caracteres")
print("Primeira letra do texto:", primeiraLetra)