# -*- coding: utf-8 -*-
"""
Created on Thu Nov  7 11:02:08 2024

@author: ashir
"""

String = str(input("Enter your string: "));
temp = str(String[::-1])
i = 0;
j = len(String)
if (String == temp):
    print("The string is pallindrome.")
else:
    print("The string is not pallindrome.")