"""
Introduction and Explanation:
Looping Statements in Python:
- `for` loop: Iterates over a sequence (e.g., list, tuple) or iterator.
- `while` loop: Executes code as long as a condition is true.

Summary:
Looping statements in Python facilitate repetitive execution of code, iterating over sequences or conditionally executing code until a condition is met.
"""

# Example of Looping Statements
# Counting vowel: Count vowels in a given string using a for loop

def count_vowels(sentence):
    vowels = 'aeiouAEIOU'
    vowel_count = 0
    for char in sentence:
        if char in vowels:
            vowel_count += 1
    return vowel_count

input_sentence = "Hello, how are you?"
print("Number of vowels:", count_vowels(input_sentence))
