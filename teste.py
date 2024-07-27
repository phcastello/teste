import random

def random_between(low, high, excluded):
    while True:
        rand_num = random.randint(low, high)
        if rand_num not in excluded:
            return rand_num
        else:
            rand_num = random.randint(low, high)

def main():
    low = 1  # Limite inferior
    high = 35  # Limite superior
    excluded = {1,2,10,16,18,19,26,22,21,35}  # Números excluídos

    random_number = random_between(low, high, excluded)

    print(f"Número aleatório entre {low} e {high} excluindo {excluded} é: {random_number}")

if __name__ == "__main__":
    main()
