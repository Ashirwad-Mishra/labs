# -*- coding: utf-8 -*-
"""
Created on Wed Nov 13 14:19:19 2024

@author: Ashirwad Mishra
"""

string = input("Enter your string: ");
albha = 0;
dig = 0;
for i in string:
    if i.isalpha():
        albha += 1;
    if i.isdigit():
        dig += 1;
print("The number of albhabet: ",albha)
print("The number of digits: ",dig)