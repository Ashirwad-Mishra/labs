# -*- coding: utf-8 -*-
"""
Created on Thu Nov 14 11:22:39 2024

@author: ashir
"""

inputList = input("Please enter list element: ").split()
a = int(input("Enter the 1st element index to swap: "))
b = int(input("Enter the 2nd element index to swap: "))
length = len(inputList);
if (a>= length or b>= length):
    print("Out of bound indiceds.");
else:
    print("Original List: ",inputList)
    temp = inputList[a]
    inputList[a] = inputList[b]
    inputList[b] = temp;
    print("The new list: ",inputList);