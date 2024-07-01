"""
Introduction and Explanation:
NumPy is a powerful library for numerical computing in Python. It provides support for arrays, matrices, and many mathematical functions to operate on these data structures efficiently. This module will cover the basics of NumPy arrays including their creation, basic operations, and key properties.

Key Points:
- NumPy arrays are more efficient than Python lists for numerical computations.
- Arrays can be created from lists or using NumPy functions.
- Various operations can be performed on arrays such as indexing, slicing, and mathematical operations.

Example Program:
"""

import numpy as np

# Creating NumPy arrays
arr = np.array([1, 2, 3, 4, 5])
print("Array:", arr)

# Array with zeros
zeros = np.zeros(5)
print("Zeros Array:", zeros)
# print(zeros.shape)
# print(zeros.dtype)

# Array with ones
ones = np.ones((2, 3))
print("Ones Array:", ones)

# Array with a range of values
range_arr = np.arange(0, 10, 2)
print("Range Array:", range_arr)

# Array with random values
random_arr = np.random.rand(5)
print("Random Array:", random_arr)

# Array properties
print("Shape:", arr.shape)
print("Data type:", arr.dtype)

# Basic operations
sum_arr = arr + 5
print("Array after adding 5:", sum_arr)

mul_arr = arr * 2
print("Array after multiplying by 2:", mul_arr)

"""
Summary:
NumPy arrays are essential for efficient numerical computations. They can be created in various ways and support numerous operations that make data manipulation straightforward and efficient.
"""

