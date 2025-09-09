import random

sucursales = [f"Sucursal {i+1}" for i in range(25)]
ventas = [random.randint(1000, 5000) for _ in range(25)]

promedio = sum(ventas) / len(ventas)

print("Promedio de ventas:", promedio)
print("Sucursales con ventas mayores al promedio:")
for i in range(25):
    if ventas[i] > promedio:
        print(sucursales[i], "->", ventas[i])
