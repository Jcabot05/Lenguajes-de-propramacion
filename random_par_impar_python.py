import random

pares = 0
impares = 0

for _ in range(500):
    num = random.randint(50, 100)
    if num % 2 == 0:
        pares += 1
    else:
        impares += 1

print("Cantidad de pares:", pares)
print("Cantidad de impares:", impares)
