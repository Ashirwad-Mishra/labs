# -*- coding: utf-8 -*-
"""
Created on Fri Nov 22 14:59:08 2024

@author: ashirwad mishra
"""

dict1 = {
    1:1,
    2:4,
    3:9
    };
for i in dict1:
    print(i,dict1[i]);
    
dict2 = {
    1:"abc",
    'a':"Python",
    'College':"Abes"
    }
if 'a' in dict2:
    print("Yes");
else:
    print("No");
newdict = dict();
for i in range (1,6):
    newdict[i] = i*i;
print(newdict);
