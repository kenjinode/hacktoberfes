import random

def generate_random_password(length=12):

  characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()"
  password = ""
  for i in range(length):
    password += random.choice(characters)
  return password

if __name__ == "__main__":
  password = generate_random_password()
  print(password)
