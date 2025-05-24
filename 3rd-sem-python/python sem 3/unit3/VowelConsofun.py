# -*- coding: utf-8 -*-
"""
Created on Thu Nov 14 10:56:45 2024

@author: ashir
"""

def is_vowel(c):
    if c in 'aeiouAEIOU':
        return True
    else:
        return False

def is_consonant(c):
    if c.isalpha():
        if c not in 'aeiouAEIOU':
            return True
        else:
            return False
    else:
        return False