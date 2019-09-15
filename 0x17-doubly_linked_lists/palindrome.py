#!/usr/bin/python3

def reverse(s):
    return s[::-1] 
answers = list()
def palindrome():
    maximo = 0
    for i in range(999, 100, -1):
        for j in range(999, 100, -1):
            resultado = str(i * j)
            if ((resultado == reverse(resultado)) and (int(resultado) > maximo)):
                #print(i)
                #print(j)
                #print(resultado)
                maximo = int(resultado)
    return(maximo)

h = palindrome()
print(h)
