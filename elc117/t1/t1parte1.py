#1. Defina uma função somaQuad(x,y) que calcule a soma dos quadrados de dois números x e y.
def somaQuad(x,y):
	return x**2 + y**2

#2. Crie uma função hasEqHeads(l1,l2) que verifique se as listas l1 e l2 possuem o mesmo primeiro elemento.
def hasEqHeads(l1,l2):
	return l1[0] == l2[0]

#3. Escreva uma função que receba uma lista de nomes e retorne uma lista com a string "Sr. " adicionada ao início de cada nome. Defina uma função auxiliar para ajudar neste exercício.

def senhor(l):
    return list(map(senhor_aux,l))

def senhor_aux(l):
    return "Sr. " + l

#def senhor(l):
#	return ["Sr. " + lx for lx in l]

#4. Crie uma função que receba uma string e retorne o número de espaços nela contidos. Defina uma função auxiliar para ajudar neste exercício.
def espacos(l):
    return sum(map(espacos_aux,l))

def espacos_aux(l):
    return l == ' '

#def espacos(s):
#	return sum([len(x) for x in s if x == ' '])

#5. Escreva uma função que, dada uma lista de números, calcule 3n*2 + 2/n + 1 para cada número n da lista. Defina uma função auxiliar para ajudar neste exercício.

def calcula(l):
    return list(map(calcula_aux, l))

def calcula_aux(n):
    return ( (3*n*2) + (2/n) + 1 )

#def calcula(l):
#	return [3*n*2+2/n+1 for n in l]

#6. Escreva uma função que, dada uma lista de números, retorne uma lista com apenas os que forem negativos. Defina uma função auxiliar para ajudar neste exercício.

def negativos(l):
    return list(filter(negativos_aux, l))

def negativos_aux(l):
    return l < 0

#def negativos(l):
#	return [x for x in l if x < 0]

#7. Escreva uma função que receba uma lista de números e retorne somente os que estiverem entre 1 e 100, inclusive. Defina uma função auxiliar para ajudar neste exercício.

def um_cem(l):
    return list(filter(um_cem_aux, l))

def um_cem_aux(l):
    return l > 0 and l <= 100

#def umcem(l):
#	return [x for x in l if x in range(1,101)]


#8. Escreva uma função que receba uma lista de números e retorne somente aqueles que forem pares. Defina uma função auxiliar para ajudar neste exercício.

def pares(l):
    return list(filter(pares_aux, l))

def pares_aux(l):
    return l % 2 == 0

#9. Crie uma função charFound(c,s) que verifique se o caracter c está contido na string. O resultado deve ser True ou False. Você não deve usar o operador in. Defina uma função auxiliar para ajudar neste exercício.

def charFound(c, s):
	def charFound_aux(x):
		return c == x
	return sum(list(map(charFound_aux, s))) > 0

#10. Escreva uma função que receba uma lista de strings e retorne uma nova lista com adição de marcações HTML (p.ex.: <B> e </B>) antes e depois de cada string.

def negrito(l):
    return list(map(negrito_aux,l))

def negrito_aux(l):
    return "<b>" + l + "</b>"



