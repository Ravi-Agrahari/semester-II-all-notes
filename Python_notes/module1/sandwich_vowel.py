"""
Introduction and Explanation:
    Looping Statements in Python:
    - `for` loop: Iterates over a sequence (e.g., list, tuple) or iterator.
    - `while` loop: Executes code as long as a condition is true.

    Sandwich Vowel:
    - A vowel that is surrounded by consonants on both sides in a string.
    - Uses looping and conditional statements to identify sandwich vowels.

Summary:
Looping statements facilitate repetitive execution of code, and conditional checks help identify specific patterns like sandwich vowels in strings.
"""

# Example of Looping Statements
# Sandwich Vowel: Identify sandwich vowels in a given string

def is_vowel(char):
    vowels = 'aeiouAEIOU'
    return char in vowels

def count_sandwich_vowels(sentence):
    count = 0
    length = len(sentence)
    
    for i in range(1, length - 1):
        if is_vowel(sentence[i]) and not is_vowel(sentence[i - 1]) and not is_vowel(sentence[i + 1]):
            count += 1
            
    return count

# Example usage
input_sentence = "abciefgoh"
print("Number of sandwich vowels:", count_sandwich_vowels(input_sentence))
