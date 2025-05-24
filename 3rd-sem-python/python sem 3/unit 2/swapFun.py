# -*- coding: utf-8 -*-
"""
Created on Tue Dec  3 11:07:11 2024

@author: ashir
"""

def swapThem(x,y):
    tmp = x
    x = y
    y = tmp
    return ([x,y])
A = int (input ("Enter the first number: "))
B = int (input ("Enter the second number: "))
print(swapThem(A, B))