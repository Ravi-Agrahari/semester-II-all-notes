"""
Introduction and Explanation:
Tuples in Python are ordered collections of elements, similar to lists, but they are immutable once created. They are used to store multiple items in a single variable.

Essential Points:
    - Tuples are immutable, meaning their elements cannot be changed or modified.
    - Tuples can contain elements of different data types.
    - Tuples support indexing, slicing, and iteration like lists.

Operations:
    - Indexing and slicing: Accessing tuple elements.
    - Packing and unpacking: Assigning multiple values to a tuple.
    - Concatenation: Combining tuples using the `+` operator.
    - Tuple methods: Methods such as `count` and `index`.

Summary:
Tuples provide data integrity since their elements cannot be changed, making them suitable for storing fixed collections of data.
"""

# Example of using tuples in Python

# Creating a tuple
my_tuple = (1, 2, 3, 4, 5)
print("Original tuple:", my_tuple)

# Accessing elements using indexing
print("Element at index 2:", my_tuple[2])

# Slicing a tuple
print("Slice of tuple (1:4):", my_tuple[1:4])

# Packing and unpacking tuples
# Tuple assignment (packing)
point = (3, 5)
# Unpacking the tuple into variables
x, y = point
print("x coordinate:", x)
print("y coordinate:", y)

# Concatenating tuples
tuple1 = (1, 2, 3)
tuple2 = (4, 5, 6)
concatenated_tuple = tuple1 + tuple2
print("Concatenated tuple:", concatenated_tuple)

# Repeating tuples
repeated_tuple = tuple1 * 2
print("Repeated tuple:", repeated_tuple)

# Using tuple methods
count_of_2 = my_tuple.count(2)
index_of_3 = my_tuple.index(3)
print("Count of 2 in tuple:", count_of_2)
print("Index of 3 in tuple:", index_of_3)

# Iterating through a tuple
for item in my_tuple:
    print("Item:", item)

# Tuple as return value
def get_coordinates():
    return (10, 20)

coordinates = get_coordinates()
print("Coordinates returned from function:", coordinates)
