a = int(input("a= "))
b = int(input("b= "))
c = int(input("c= "))
d = b**2 - 4*a*c
if d < 0:
    print("no solution")
if d == 0:
    x = -b/2*a
    print("there is only one solution {0}".format(x))
if d > 0:
    x1 = (pow(d, 0.5) - b)/2*a
    x2 = (-pow(d, 0.5) - b)/2*a
    print("the solution are {0} and {1}".format(x1, x2))