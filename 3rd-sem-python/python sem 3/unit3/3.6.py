# -*- coding: utf-8 -*-
"""
Created on Wed Nov 13 14:07:34 2024

@author: ashir
"""

string = input("Enter the string: ")
i = int(input("Enter the index of the character you want to remove: "))
new_string = string[:i] + string[i+1:]
print("The new string: " + new_string)