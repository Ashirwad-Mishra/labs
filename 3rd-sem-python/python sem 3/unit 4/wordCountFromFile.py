# -*- coding: utf-8 -*-
"""
Created on Fri Dec  6 11:34:20 2024

@author: ashir
"""

# a function that reads a text file and counts the number of words in it
def isWord(string):
    return string.strip() != ""

def WordCount(filename):
    file = open(filename, "r")
    f = file.read()
    count = 0
    for word in f.split():
        if isWord(word):
            count = count + 1
    file.close()
    return count;

print("The number of words = "+str(WordCount("test.txt")));