# -*- coding: utf-8 -*-
"""
Created on Tue Dec 10 11:15:04 2024

@author: ashir
"""

import pickle

# Open the file in read-binary mode
with open("test.txt", "rb") as f:
    loaded_data = pickle.load(f)

# Access non-numeric data
name = loaded_data['name']
email = loaded_data['email']
skills = loaded_data['skills']

print("Name:", name)       # Output: Ashirwad Mishra
print("Email:", email)     # Output: ashirwadmishra10@gmail.com
print("Skills:", skills)   # Output: ['Python', 'C++', 'Django']
