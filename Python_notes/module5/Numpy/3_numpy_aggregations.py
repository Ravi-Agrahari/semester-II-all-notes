"""
Introduction and Explanation:
Aggregation functions in NumPy are used to summarize data. These functions include calculating minimum, maximum, mean, sum, standard deviation, and more. They are essential for statistical analysis and data reduction.

Key Points:
- Aggregation functions compute a single value from an array's elements.
- Common aggregation functions include np.min, np.max, np.sum, np.mean, np.std.
- These functions can be applied to entire arrays or along specific axes.

Example Program:
"""

import numpy as np

# Create an array
arr = np.array([1, 2, 3, 4, 5])

# Aggregation functions
min_val = np.min(arr)
print("Minimum:", min_val)

max_val = np.max(arr)
print("Maximum:", max_val)

sum_val = np.sum(arr)
print("Sum:", sum_val)

mean_val = np.mean(arr)
print("Mean:", mean_val)

std_val = np.std(arr)
print("Standard Deviation:", std_val)

# Aggregations along an axis
matrix = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
print("Matrix:\n", matrix)

sum_axis0 = np.sum(matrix, axis=0)
print("Sum along axis 0:", sum_axis0)

sum_axis1 = np.sum(matrix, axis=1)
print("Sum along axis 1:", sum_axis1)

"""
Summary:
Aggregation functions in NumPy are used to summarize and analyze data efficiently. They can calculate various statistical measures and can operate on entire arrays or along specific axes.
"""

