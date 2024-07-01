"""
Introduction and Explanation:
Universal functions (ufuncs) are functions that operate element-wise on an array. They are essential for performing vectorized operations efficiently in NumPy, enabling fast computations on arrays.

Key Points:
- Ufuncs are vectorized wrappers for simple functions.
- They allow element-wise operations on arrays without the need for explicit loops.
- Common ufuncs include mathematical, comparison, and trigonometric functions.

Example Program:
"""

import numpy as np

# Create an array
arr = np.array([1, 2, 3, 4, 5])

# Universal functions
sqrt_arr = np.sqrt(arr)
print("Square Root:", sqrt_arr)

exp_arr = np.exp(arr)
print("Exponential:", exp_arr)

sin_arr = np.sin(arr)
print("Sine:", sin_arr)

# Binary ufuncs
arr2 = np.array([5, 4, 3, 2, 1])
add_arr = np.add(arr, arr2)
print("Addition:", add_arr)

# Comparison ufuncs
greater_arr = np.greater(arr, 3)
print("Greater than 3:", greater_arr)

"""
Summary:
Universal functions in NumPy provide efficient, element-wise operations on arrays. They are crucial for performing fast computations and support a wide range of mathematical, comparison, and trigonometric functions.
"""

