"""
Introduction and Explanation:
Dictionaries in Python are unordered collections of key-value pairs. They are mutable, indexed, and can contain items of any data type.

Essential Points:

    - Dictionaries are mutable, meaning their elements can be changed after creation.
    - Keys in dictionaries must be unique and immutable (strings, numbers, tuples).
    - Dictionaries do not support slicing and are unordered.

Operations and Methods:

    - Accessing elements: Retrieving values using keys.
    - Adding and updating elements: Modifying dictionaries.
    - Deleting elements: Removing key-value pairs.
    - Iterating over keys, values, and items using methods like `keys()`, `values()`, and `items()`.
    - Dictionary comprehension: Creating dictionaries from iterables.
    - Methods like `get()`, `pop()`, `popitem()`, `update()`, `clear()`.

Summary:
    Dictionaries provide a flexible way to store and retrieve data using keys, making them efficient for mapping and quick lookup operations.
"""

# Example of using dictionaries in Python

# Creating a dictionary
my_dict = {
    'name': 'Alice', 
    'age': 30, 
    'city': 'Wonderland'
    }
print("Original dictionary:", my_dict)

# Accessing elements
print("Age of Alice:", my_dict['age'])

# Adding a new key-value pair
my_dict['profession'] = 'Adventurer'
print("Dictionary after adding a new element:", my_dict)

# Updating elements
my_dict['age'] = 31
print("Modified dictionary:", my_dict)

# Deleting elements
del my_dict['city']
print("Dictionary after deleting an element:", my_dict)

# Using dictionary methods
print("Keys in dictionary:", my_dict.keys())
print("Values in dictionary:", my_dict.values())
print("Items in dictionary:", my_dict.items())

# Iterating over keys, values, and items

for key in my_dict.keys():
    print("Key:", key)

for value in my_dict.values():
    print("Value:", value)
    
for key, value in my_dict.items():
    print("Key:", key, "Value:", value)

# Dictionary comprehension example
numbers = [1, 2, 3, 4, 5]
square_dict = {num: num**2 for num in numbers}
print("Dictionary comprehension:", square_dict)

# Checking if a key exists
if 'name' in my_dict:
    print("Name exists in dictionary")

# Using get() method to access values
age = my_dict.get('age')
print("Age using get method:", age)

# Using pop() method to remove a specific key-value pair
profession = my_dict.pop('profession')
print("Removed profession:", profession)
print("Dictionary after pop:", my_dict)

# Using popitem() method to remove and return the last key-value pair
last_item = my_dict.popitem()
print("Removed last item:", last_item)
print("Dictionary after popitem:", my_dict)

# Merging dictionaries using update() method
another_dict = {'country': 'Wonderland', 'hobby': 'Exploring'}
my_dict.update(another_dict)
print("Dictionary after update:", my_dict)

# Clearing the dictionary
my_dict.clear()
print("Dictionary after clearing all elements:", my_dict)
