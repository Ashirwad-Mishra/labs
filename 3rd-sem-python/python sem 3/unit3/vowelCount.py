# -*- coding: utf-8 -*-
"""
Created on Thu Nov 14 10:46:51 2024

@author: ashir
"""
def Isvowel(c):
    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c ==
        'u' or c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U'):
        return True;
    else:
        return False;
string = input("Enter the string: ");
count = 0;
for c in string:
    if (c.isalpha()):
        if (Isvowel(c)):
            count += 1;
print(f"The number of vowels in '{string}' is {count}.")    