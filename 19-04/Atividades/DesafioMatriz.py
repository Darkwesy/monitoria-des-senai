def verificar_elementos_iguais(matriz):
    primeiro_elemento = matriz[0][0]
    
    for linha in matriz:
        for elemento in linha:
            if elemento != primeiro_elemento:
                return False
    
    return True

matriz_iguais = [[2, 2, 2],
                 [2, 2, 2],
                 [2, 2, 2]]

if verificar_elementos_iguais(matriz_iguais):
    print("Todos os elementos da matriz são iguais.")
else:
    print("Existem elementos diferentes na matriz.")
