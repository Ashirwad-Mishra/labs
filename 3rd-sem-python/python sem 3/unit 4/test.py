# -*- coding: utf-8 -*-
"""
Created on Thu Mar 20 23:52:40 2025

@author: ashir
"""

file = open("ashirwad.txt" , "w")
file.write("Hello! Ashirwad")
lines = ["Hello\n" , "How are  you doing/n" , "This has been a great day"]
file.writelines(lines)