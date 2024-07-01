"""
Introduction and Explanation:
    Sets in Python are unordered collections of unique elements. They are mutable, meaning elements can be added or removed.

Essential Points:
    - Sets do not allow duplicate elements.
    - Sets are mutable, meaning their elements can be changed after creation.
    - Sets support mathematical operations like union, intersection, difference, and symmetric difference.

Operations:
    - Adding and removing elements: Modifying sets in place.
    - Checking membership: Verifying if an element exists in a set.
    - Set operations: Union (`|`), intersection (`&`), difference (`-`), symmetric difference (`^`).

Summary:
    Sets are useful for tasks requiring uniqueness and mathematical set operations, providing efficient methods for element management.
"""

# Example of using sets in Python

# Creating sets
set1 = {1, 2, 3, 4, 5}
set2 = {3, 4, 5, 6, 7}

# Adding elements to a set
set1.add(6)
print("Set1 after adding an element:", set1)

# Removing elements from a set
set1.remove(6)
print("Set1 after removing an element:", set1)

# Checking membership
print("Is 3 in set1?", 3 in set1)
print("Is 8 in set1?", 8 in set1)

# Union of sets
union_set = set1 | set2
print("Union of set1 and set2:", union_set)

# Intersection of sets
intersection_set = set1 & set2
print("Intersection of set1 and set2:", intersection_set)

# Difference of sets
difference_set = set1 - set2
print("Difference of set1 and set2 (set1 - set2):", difference_set)

# Symmetric difference of sets
symmetric_difference_set = set1 ^ set2
print("Symmetric Difference of set1 and set2:", symmetric_difference_set)

# Iterating through a set
for element in set1:
    print("Element in set1:", element)

# Set comprehension example
number_set = {num for num in range(10) if num % 2 == 0}
print("Set comprehension (even numbers from 0 to 9):", number_set)
