n = int(input("Liczba = "))
i = 0
tab = []
while i < n:
    tab.append(int(input("number= ")))
    i += 1
print("Najwieksza suma wynosi: "+ str(sum(sorted(tab)[-3:])))