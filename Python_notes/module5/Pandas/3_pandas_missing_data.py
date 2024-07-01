"""
Introduction and Explanation:
Handling missing data is a crucial aspect of data analysis. Pandas provides several methods to detect, remove, and fill missing data, ensuring the integrity and usability of datasets.

Key Points:
- Detecting missing data using isnull() and notnull().
- Dropping missing data with dropna().
- Filling missing data with fillna().
- Interpolating missing data using interpolate().

Example Program:
"""

import pandas as pd
import numpy as np

# Create a DataFrame with missing data
data = {'A': [1, 2, np.nan, 4],
        'B': [5, np.nan, np.nan, 8],
        'C': [10, 11, 12, np.nan]}
df = pd.DataFrame(data)
print("Original DataFrame:\n", df)

# Detecting missing data
print("Is Null:\n", df.isnull())

# Dropping missing data
df_dropped = df.dropna()
print("DataFrame after dropping missing data:\n", df_dropped)

# Filling missing data
df_filled = df.fillna(0)
print("DataFrame after filling missing data with 0:\n", df_filled)

# Interpolating missing data
df_interpolated = df.interpolate()
print("DataFrame after interpolating missing data:\n", df_interpolated)

"""
Summary:
Handling missing data is essential for data integrity. Pandas provides tools to detect, remove, fill, and interpolate missing data, making datasets more complete and reliable for analysis.
"""

