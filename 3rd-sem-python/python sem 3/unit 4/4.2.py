# -*- coding: utf-8 -*-
"""
Created on Thu Dec  5 10:55:42 2024

@author: ashir
"""

file = open ("test.txt","r+")
for each in file:
    print(each);
file.write("\nI am appending this file")
file.close()
file = open("test.txt","a")
file.write("\nI am appending this file")
file.close()