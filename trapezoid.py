import random
def function_1(x):
    return x**2 - 2

def function_2(x):
    return -x**2 + 2

def diff_function(x):
    return function_2(x) - function_1(x)

xmin = -1.5
xmax = 1.5
n = 100
h= (xmax - xmin)/n
result = ((diff_function(xmin) + diff_function(xmax))/2)
for i in range(n):
    result += diff_function(xmin + i * h)
result *= h
print(result)


