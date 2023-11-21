n = int(input("Liczba = "))
i = 0
tab = []
while i < n:
    tab.append(int(input("number= ")))
    i += 1
for i in range(len(tab)):
    tab[i] = tab[i]**2
print(sum(tab))