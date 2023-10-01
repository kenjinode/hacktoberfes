def is_palindrome(word):
    cleaned_word = ''.join(word.split()).lower()
    return cleaned_word == cleaned_word[::-1]

user_input = input("Enter a word or phrase: ")

if is_palindrome(user_input):
    print("It's a palindrome!")
else:
    print("It's not a palindrome.")