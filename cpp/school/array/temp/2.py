import matplotlib.pyplot as ml 
import numpy as np
def f(x) :
    return x**2
x = np.linspace(-10,10,100)
y = f(x)
ml.plot(x,y)
ml.show()