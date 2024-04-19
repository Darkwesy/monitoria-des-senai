def contarPalavras(frase):
    palavras = frase.split()
    return len(palavras)

def textoCapitalizado(frase):
    fraseCapitalizada = frase.capitalize()
    return fraseCapitalizada

def textoMinusculo(frase):
    fraseMinuscula = frase.lower()
    return fraseMinuscula

def textoSemEspaco(frase):
    fraseSemEspaco = frase.replace(" ", "")
    return fraseSemEspaco

def quantidadeDeCaracteres(frase):
    quantidade = len(frase)
    return quantidade

def primeiraLetra(frase):
    primeiroCaractere = frase[0]
    return primeiroCaractere

frase = input("Digite uma frase: ")
numeroDePalavras = contarPalavras(frase)
print(f"Numero de palavras: {numeroDePalavras}")
fraseCapitalizada = textoCapitalizado(frase)
print("Frase Capitalizada: " + fraseCapitalizada)
fraseMinuscula = textoMinusculo(frase)
print("Frase Minúscula: " + fraseMinuscula)
fraseSemEspaco = textoSemEspaco(frase)
print(f"Quantidade de caracteres: {quantidadeDeCaracteres(fraseSemEspaco)}")
primeiroCaractere = primeiraLetra(frase)
print("Primeiro caractere: " + primeiroCaractere)