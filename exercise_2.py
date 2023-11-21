n = int(input("Liczba = "))
i = 0
tab = []
while i < n:
    tab.append(int(input("number= ")))
    i += 1
j = 0
suma = 0
liczbael = 0
ostatni = tab[n-1]
while j < n:
    if tab[j] > ostatni:
        suma += tab[j]
        liczbael += 1
        j += 1
    else:
        break
if liczbael > 0:
    srednia = suma/liczbael
    print("Suma wynosi: " + str(suma))
    print("Srednia wynosi: " + str(srednia))
else:
    print("Zadan element nie spelnia warunku")

