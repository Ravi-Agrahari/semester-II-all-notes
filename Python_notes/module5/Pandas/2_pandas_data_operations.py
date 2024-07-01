"""
Introduction and Explanation:
Pandas provides a wide range of data operations to manipulate and analyze data effectively. These operations include merging, grouping, reshaping, and applying functions to data.

Key Points:
- Merging: Combine two DataFrames using join operations.
- Grouping: Split data into groups based on some criteria and apply a function to each group.
- Reshaping: Change the layout of a DataFrame using functions like pivot and melt.
- Applying functions: Use apply, map, and applymap to apply functions to data.

Example Program:
"""

import pandas as pd

# Sample DataFrames
df1 = pd.DataFrame({'A': ['A0', 'A1', 'A2'],
                    'B': ['B0', 'B1', 'B2'],
                    'C': ['C0', 'C1', 'C2']})

df2 = pd.DataFrame({'A': ['A3', 'A4', 'A5'],
                    'B': ['B3', 'B4', 'B5'],
                    'C': ['C3', 'C4', 'C5']})

# Merging DataFrames
merged_df = pd.concat([df1, df2])
print("Merged DataFrame:\n", merged_df)

# Grouping data
data = {'Category': ['A', 'B', 'A', 'B'],
        'Values': [1, 2, 3, 4]}
df = pd.DataFrame(data)
grouped = df.groupby('Category').sum()
print("Grouped DataFrame:\n", grouped)

# Reshaping data
pivot_df = df.pivot(index='Category', columns='Values')
print("Pivoted DataFrame:\n", pivot_df)

# Applying functions
df['Values'] = df['Values'].apply(lambda x: x * 2)
print("DataFrame after applying function:\n", df)

"""
Summary:
Pandas offers extensive data operations for merging, grouping, reshaping, and applying functions. Mastering these operations is key to effective data manipulation and analysis.
"""

