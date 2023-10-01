def is_prime(number):
    if number <= 1:
        return False
    elif number <= 3:
        return True
    elif number % 2 == 0 or number % 3 == 0:
        return False
    i = 5
    while i * i <= number:
        if number % i == 0 or number % (i + 2) == 0:
            return False
        i += 6
    return True

def generate_primes_in_range(start, end):
    prime_list = []
    for num in range(start, end + 1):
        if is_prime(num):
            prime_list.append(num)
    return prime_list

try:
    start = int(input("Enter the start of the range: "))
    end = int(input("Enter the end of the range: "))

    if start < 2:
        start = 2  # Ensure the start is at least 2, as 2 is the smallest prime number

    if start <= end:
        prime_numbers = generate_primes_in_range(start, end)
        print(f"Prime numbers between {start} and {end}:")
        print(prime_numbers)
    else:
        print("Invalid range. The start value should be less than or equal to the end value.")
except ValueError:
    print("Invalid input. Please enter valid integers for the range.")