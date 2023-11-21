print("Cztery liczbe: ")
n = 4
i = 0
tab = []
while i < n:
    tab.append(int(input("number= ")))
    i += 1
for i in tab:
    if i == n-1:
        break
    print(i/tab[n-1])
