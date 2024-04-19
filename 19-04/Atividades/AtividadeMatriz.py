def encontrar_maior_elemento(matriz):
    maior_elemento = matriz[0][0]
    
    for linha in matriz:
        for elemento in linha:
            if elemento > maior_elemento:
                maior_elemento = elemento
    
    return maior_elemento

matriz = [
    [3, 5, 2],
    [9, 7, 1],
    [4, 8, 6]
]
    
maior = encontrar_maior_elemento(matriz)
print(f"O maior elemento da matriz é {maior}.")