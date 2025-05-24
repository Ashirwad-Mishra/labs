# -*- coding: utf-8 -*-
"""
Created on Tue Dec  3 10:50:34 2024

@author: ashir
"""

def IsPrimeNo(x):
    nf = 0;
    if (x == 1):
        return False;
    for i in range(3,x):
        if (x%i == 0):
            nf +=1;
    return (nf==0);
print(IsPrimeNo(int(input("Enter the number you want to check, if prime or not: "))))