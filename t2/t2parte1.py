#1. Defina uma função addSuffix(suf,nomes) que retorne a lista de nomes com o sufixo suf adicionado.

def addSufix(suf, nomes):
   return [nome + suf for nome in nomes]

#2. Escreva uma função countShorts(words), que receba uma lista de palavras e retorne a quantidade de palavras dessa lista que possuem menos de 5 caracteres.

def countShorts(words):
    return len([c for c in words if c < 5])

#3. Defina uma função stripVowels(s) que receba uma string e retire suas vogais, conforme os exemplos abaixo:
def isVowel(c):
	return c in 'aeiouAEIOU'

def stripVowels(s):
	return ''.join([x for x in s if not(isVowel(x))])

#4. Defina uma função hideChars(s) que receba uma string, possivelmente contendo espaços, e que retorne outra string substituindo os demais caracteres por '-', mas mantendo os espaços.
def isSpace(c):
	return  ' ' if c == ' ' else '-'

def hideChars(s):
	return ''.join([isSpace(x) for x in s]) 

#5. Defina uma função que receba um número n e retorne uma tabela de números de 1 a n e seus quadrados
def genTable(n):
	return [(x,x**2) for x in range(1, n+1)]

#6. Defina uma função que receba uma lista de palavras e retorne uma string contendo o primeiro e o último caracter de cada palavra da lista
def genCode(s):
	return ''.join([x[0] + x[-1] for x in s]) 

#7. Defina uma função myZip(l1,l2) que reproduza o comportamento da função zip do Python:
def myZip(l1, l2):
    return [ (l1[x],l2[x]) for x in range(0, min(len(l1),len(l2)))]

#8.
def enumerate(words):
    return [(x+1, words[x]) for x in range(len(words))]


#9. Escreva uma função isBin(s) que verifique se a string recebida representa um número binário.

def isBin_aux(s):
    return [x for x in s if x == '1' or x == '0'] 

def isBin(s):
    return len(s) == len(isBin_aux(s))

#10. Escreva uma função bin2dec(digits), que receba uma lista de dígitos representando um número binário e retorne seu equivalente em decimal.

def reverse(digits):
    return digits[::-1]

def bin2dec(digits):
    return sum([2**x for x in range(len(digits)) if reverse(digits)[x] == '1'])
