import random

suma = 0
promedio = 0 
for i in range(0,10,1):
    numero = random.randint(0,10)
    suma += numero

print("La suma es ",suma)
print("El promedio es", suma/10)


