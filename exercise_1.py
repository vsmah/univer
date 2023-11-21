koniec = False
suma = 0
ile = 0
tryb_sredniej = False
while koniec == False:
    print("Podaj liczbe: ")
    liczba = int(input("Liczba = "))
    if liczba == 0:
        tryb_sredniej = not(tryb_sredniej)
    else:
        if tryb_sredniej == True:
            suma += liczba
            ile += 1
        else:
            if liczba < 0:
                koniec = True
if ile > 0:
    srednia = suma/ile
    print("Srednia wynosi: " + str(srednia))
else:
    print("Nie dodano zadnej liczby")
