print("Podaj liczbe elementow: ")
n = int(input("liczba elemenotow = "))
i = 0
tab = []
while i < n:
    tab.append(int(input("number =")))
    i += 1
przesun = 0
i = 0
while i < n:
    if tab[i] != 0 and tab[i] % 5 == 0:
        przesun = przesun + 1
        i += 1
    else:
        tab[i - przesun] = tab[i]
        break
i = 0
if i < n-przesun:
    print(tab[i])
    i += 1

