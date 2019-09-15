#!/usr/bin/python3

def reverse(s):
    return s[::-1] 

def palindrome():
    for i in range(999, 100, -1):
        for j in range(999, 100, -1):
            resultado = str(i * j)
            if (resultado == reverse(resultado)):
                print(i)
                print(j)
                print(resultado)
                return(resultado)

palindrome()
