"""
Introduction and Explanation:
Lists in Python:
- A list is a collection of ordered, changeable, and indexed elements.
- Lists allow duplicate elements and can store elements of different data types.

Operations on Lists:
- Accessing elements: Use indexing to access elements.
- Modifying elements: Change the value of elements using indices.
- List methods: Various methods to manipulate lists (e.g., append, extend, remove).
- Slicing: Extract a portion of the list.
- Looping: Iterate through elements using loops.
- List comprehension: Create lists using a concise syntax.

Pass by Value and Reference:
- In Python, everything is an object and variables are references to objects.
- Mutable objects (like lists) are passed by reference, meaning changes inside a function affect the original list.
- Immutable objects (like integers, strings) behave as if passed by value, meaning changes inside a function do not affect the original object.

Summary:
Lists are versatile data structures in Python with various operations and methods for manipulation. Understanding how passing by reference works with lists is essential for effective programming.
"""

# Example of using lists in Python

# Creating a list and accessing elements
my_list = [1, 2, 3, 4, 5]
print("Original list:", my_list)
print("Element at index 2:", my_list[2])

# Modifying elements in a list
my_list[1] = 10
print("Modified list:", my_list)

# Using list methods
my_list.append(6)
print("After append:", my_list)

# Extending a list
my_list.extend([7, 8, 9])
print("After extend:", my_list)

# Removing elements
my_list.remove(10)
print("After removing 10:", my_list)

# Popping elements
popped_element = my_list.pop()
print("Popped element:", popped_element)
print("After pop:", my_list)

# Slicing a list
slice_of_list = my_list[2:5]
print("Slice of list:", slice_of_list)

# Looping through a list
for item in my_list:
    print("Item:", item)

# List comprehension
squared_list = [x ** 2 for x in my_list]
print("Squared list:", squared_list)

# Passing lists as parameters to functions
def modify_list(lst):
    lst.append(7)
    print("Inside function (modified list):", lst)

modify_list(my_list)
print("Outside function (modified list):", my_list)

# Illustrating pass by reference
def reassign_list(lst):
    lst = [100, 200, 300]
    print("Inside function (reassigned list):", lst)

reassign_list(my_list)
print("Outside function (reassigned list):", my_list)

# Illustrating pass by value with immutable objects
def modify_string(s):
    s = "New string"
    print("Inside function (modified string):", s)

my_string = "Original string"
modify_string(my_string)
print("Outside function (modified string):", my_string)
