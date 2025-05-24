# -*- coding: utf-8 -*-
"""
Created on Thu Mar 20 23:57:12 2025

@author: ashir
"""

file = open("test.txt" , "r")
f = file.read()
print(f)
digit = 0
charac = 0
for c in f:
    if (c.isdigit()):
        digit+= 1
    elif (c.isalpha()):
        charac+=1
print(digit)
print(charac)
file.close()