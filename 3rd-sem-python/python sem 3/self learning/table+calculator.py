# -*- coding: utf-8 -*-
"""
Created on Wed Oct  9 14:10:39 2024

@author: ashirwad
""" 
try:
    n = int(input("Enter the number whose table, has, to be printed: "))
    for i in range (1,11):
        print(n," ",i,"s are ",n*i," .")
except:
    print("Enter an integer.")