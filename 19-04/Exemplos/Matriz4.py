matriz = [[] for _ in range(3)] # Inicializando uma matriz de 3x3 de listas
for linha in range(3): # loop que define em qual linha da matriz estamos
  for coluna in range(3): # loop que define em qual coluna da matriz estamos
    valor = input(f"Digite o valor a ser digitado na linha {linha+1} coluna {coluna+1}: ")
    matriz[linha].append(valor)