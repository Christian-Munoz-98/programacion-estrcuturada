import random

random_number = random.randint(1,101)

selected_number = 0

print(f"ADIVINA EL NUMERO {random_number}\n")


while selected_number != random_number:
    selected_number = int(input("Ingrese un número para adivinarlo: "))
    if selected_number != random_number:
        print("Ese no es el número")

print("Felicidades adivinaste el numero!")

