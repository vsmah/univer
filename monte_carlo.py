import random
def function_1(x):
    return x**2 - 2

def function_2(x):
    return -x**2 + 2

xmin = -1.5
xmax = 1.5
ymin = -2
ymax = 2
n = 1000
tabx = []
taby = []
dots = 0
s = 12
for i in range(n):
    tabx.append(random.uniform(xmax, xmin))

for i in range(n):
    taby.append(random.uniform(ymax, ymin))

for i in range(n):
     if function_1(tabx[i]) <= taby[i] <= function_2(tabx[i]):
         dots += 1
s_monte_carlo = dots/n * s
print(s_monte_carlo)


