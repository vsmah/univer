i = 0
tab =[]
koniec = False
while i < 10 and koniec == False:
     wartosc = int(input("Wartosc = "))
     if wartosc != 0:
         tab.append(wartosc)
         i += 1
     else:
         koniec = True
ile = i
lewy = 0
prawy = ile-1
while lewy < prawy:
    liczba = tab[lewy]
    if liczba % 2 == 0:
        lewy = lewy + 1
    else:
        tab[lewy] = tab[prawy]
        tab[prawy] = liczba
        prawy = prawy - 1
i = 0
if i < ile:
    tab[i]
    i += 1
print(tab)