#!/usr/bin/env python3

n = int(input("Entrez un nombre : "))

while (n > 0):
    print(n % 10)
    n = n // 10 # En C pas de '//', '/' est ok
