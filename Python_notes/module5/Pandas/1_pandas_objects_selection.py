"""
Introduction and Explanation:
Pandas is a powerful data analysis library in Python. It provides two primary data structures: Series and DataFrame. Understanding how to create, index, and select data within these structures is fundamental for data manipulation.

Key Points:
- Series: A one-dimensional labeled array capable of holding any data type.
- DataFrame: A two-dimensional labeled data structure with columns of potentially different data types.
- panel: 3d data structure , hold heterogenous data ...
- Data can be selected using labels, positions, or boolean indexing.

Use of Pandas:
- Data cleaning and preprocessing
- Data analysis and visualization
- Data manipulation and transformation
- Data filtering and grouping


Example Program:
"""

import pandas as pd

# Creating a Series
ser = pd.Series([1, 2, 3, 4, 5], index=['a', 'b', 'c', 'd', 'e'])
print("Series:\n", ser)
print() 

# Creating a DataFrame
data = {'Name': ['Alice', 'Bob', 'Charlie'],
        'Age': [25, 30, 35],
        'City': ['New York', 'Los Angeles', 'Chicago']}

df = pd.DataFrame(data)  # this basically convert dictionary into excel sheet(table form)
print("DataFrame:\n", df , "\n\n")


# Indexing and selection in Series
print("Select element by label:", ser['c'])
print()
print("Select element by position:", ser.iloc[2])
print()

# Indexing and selection in DataFrame
print("Select column 'Name':\n", df['Name'])
print()
print("Select row by label:\n", df.loc[1])
print()
print("Select row by position:\n", df.iloc[1])
print()

# Boolean indexing
print("Rows where Age > 25:\n", df[df['Age'] > 25])

"""
Summary:
Pandas' Series and DataFrame structures are versatile tools for data manipulation. Understanding how to index and select data within these structures is crucial for efficient data analysis.
"""

