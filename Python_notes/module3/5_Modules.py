"""
Introduction and Explanation:
Modules in Python are files containing Python definitions, statements, and functions. They allow code reuse and organization by grouping related code into a file that can be imported and used in other Python scripts.

Essential Points:
    - `import module_name`: Imports an entire module into the current namespace.
    - `from module_name import function_name`: Imports specific functions or variables from a module.
    - `import module_name as alias_name`: Allows importing a module with an alias for convenience.

Summary:
Using modules promotes code modularity, reusability, and maintainability by encapsulating related functionalities into separate units that can be easily integrated into other scripts.
"""

# Example of importing and using modules in Python

# Importing the math module and using its functions
import math

print("Value of pi:", math.pi)
print("Square root of 16:", math.sqrt(16))

# Importing specific functions from the random module
from random import randint, choice

print("Random number between 1 and 100:", randint(1, 100))
print("Random choice from a list:", choice(['apple', 'banana', 'cherry']))
