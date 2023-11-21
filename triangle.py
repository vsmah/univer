a = int(input("a= "))
b = int(input("b= "))
c = int(input("c= "))
invalid_triangle_message = "triangle cannot exist"
if a + b <= c:
    print(invalid_triangle_message)
if a + c <= b:
    print(invalid_triangle_message)
if b + c <= a:
    print(invalid_triangle_message)
p = (a+b+c)/2
s = pow(p*(p-a)*(p-b)*(p-c), 0.5)
print(s)
sa = pow(a, 2)
sb = pow(b, 2)
sc = pow(c, 2)
if sa == sc + sb or sb == sa+sc or sc == sa+sb:
    print("Right-angled triangle")
elif sa > sc + sb or sb > sa+sc or sc > sa+sb:
    print("Obtuse-angled triangle")
else:
    print("Acute-angled triangle")