# -*- coding: utf-8 -*-
"""
Created on Wed Dec  4 12:46:43 2024

@author: ashir
"""

file_object = open("test.txt", "r+")
content = file_object.read()  
print(content)    
file_object.write("\nHello World")
content = file_object.read() 
print(content)
file_object.close()