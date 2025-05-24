# -*- coding: utf-8 -*-
"""
Created on Thu Nov  7 10:47:37 2024

@author: ashir
"""
String = str(input("Enter you string: "))
startIndex = int(input("Enter the start index of slice: "));
endIndex = int (input("Enter the index of last index you want to keep: "));
String = String[startIndex:endIndex+1];
print("The sliced string: "+String);