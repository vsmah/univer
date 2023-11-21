tab = []
n = 1
while n % 10 != 0:
    n = int(input("Podaj liczbe: "))
    tab.append(n)
print("minimalny element: " + str(min(tab)))
print("srednia wynosi: " + str(sum(tab)/len(tab)))
