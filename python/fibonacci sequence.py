def generate_fibonacci(n):
    fibonacci_sequence = [0, 1]
    
    while len(fibonacci_sequence) < n:
        next_term = fibonacci_sequence[-1] + fibonacci_sequence[-2]
        fibonacci_sequence.append(next_term)
    
    return fibonacci_sequence

terms = int(input("Enter the number of Fibonacci terms to generate: "))

if terms <= 0:
    print("Please enter a positive number.")
else:
    fibonacci_sequence = generate_fibonacci(terms)
    print("Fibonacci sequence:")
    print(fibonacci_sequence)