n = int(input("Liczba = "))
i = 0
tab = []
while i < n:
    tab.append(int(input("number= ")))
    i += 1
ostatni = tab[n-1]
znalezionych = 0
i = 0
wyniki = []
while i < n:
    liczba = tab[i]
    suma = 0
    if liczba > 0:
        cyfra = liczba % 10
        suma = suma + cyfra
        liczba = liczba/10
    if suma > ostatni:
        znalezionych += 1
        wyniki.append(tab[i])
        i += 1
    else:
        break
print("Znaleziono: " + str(znalezionych))
