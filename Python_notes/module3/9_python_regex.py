"""
Introduction and Explanation:
Regular expressions (regex) in Python provide a powerful way to search, manipulate, and validate strings based on patterns. The `re` module in Python
provides functions and methods for working with regular expressions.

Essential Points:
- `re.search(pattern, string)`: Searches for the first occurrence of a pattern in a string.
- `re.match(pattern, string)`: Matches the pattern only at the beginning of the string.
- `re.findall(pattern, string)`: Finds all occurrences of a pattern in a string.
- `re.sub(pattern, replacement, string)`: Substitutes occurrences of a pattern in a string with a replacement.

Summary:
Regular expressions are essential for pattern matching and text manipulation tasks in Python, offering a concise and powerful way to work with string data.

Example Program:
"""

import re

# Example of using regular expressions in Python

# Searching for a pattern in a string
text = "Python is fun and Python is easy"
pattern = r'Python'
match = re.search(pattern, text)
if match:
    print(f"Found '{pattern}' in '{text}' at index {match.start()}")

# Finding all occurrences of a pattern in a string
all_matches = re.findall(pattern, text)
print("All occurrences:", all_matches)

# Substituting a pattern in a string
new_text = re.sub(pattern, "Java", text)
print("Substituted text:", new_text)
