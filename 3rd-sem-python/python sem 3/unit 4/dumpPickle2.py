# -*- coding: utf-8 -*-
"""
Created on Tue Dec 10 11:16:27 2024

@author: ashir
"""

import pickle

data = {
    'name': 'Ashirwad Mishra',
    'email': 'ashirwadmishra10@gmail.com',
    'skills': ['Python', 'C++', 'Django']
}

with open("test.pkl", "wb") as f:
    pickle.dump(data, f)