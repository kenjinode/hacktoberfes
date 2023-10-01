import random

secret_number = random.randint(1, 100)
attempts = 0

print("Guess the secret number between 1 and 100.")

while True:
    guess = int(input("Enter your guess: "))
    attempts += 1

    if guess == secret_number:
        print(f"Congratulations! You guessed the number in {attempts} attempts.")
        break
    elif guess < secret_number:
        print("Try a higher number.")
    else:
        print("Try a lower number.")
