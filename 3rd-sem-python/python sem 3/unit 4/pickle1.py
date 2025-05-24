# -*- coding: utf-8 -*-
"""
Created on Tue Dec 10 10:48:16 2024

@author: ashir
"""

import pickle

file = open("test.txt","rb")
x = pickle.load(file)
y = pickle.load(file)
z = pickle.load(file)
file.close()
print(x)
print(type(x))