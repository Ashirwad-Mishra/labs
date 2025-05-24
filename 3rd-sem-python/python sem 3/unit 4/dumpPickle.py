# -*- coding: utf-8 -*-
"""
Created on Tue Dec 10 11:06:31 2024

@author: ashir
"""

import pickle as pc
age = 20
sal = 4500.50
data = {
        'MO' : '9934882193',
        'E-mail' : 'ashirwadmishra10@gmail.com',
        }
f = open ("test.txt","wb")
pc.dump(age, f)
pc.dump(sal, f)
pc.dump(data, f)
f.close()