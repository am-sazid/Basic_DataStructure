import math 

a = float(input("Enter a: "))
b = float(input("Enter b: "))
c = float(input("Enter c: "))

D = b*b - 4*a*c

if D > 0:
    x1 = (-b + math.sqrt(D)) / (2*a)
    x2 = (-b - math.sqrt(D)) / (2*a)
    print("Roots:", x1, x2)
elif D == 0:
    x = -b / (2*a)
    print("Root:", x)
else:
    print("No real root")