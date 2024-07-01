import numpy as np
import pandas as pd 

# Creating a Series from a list
list1 = [11, 22, 33, 44, 55]
series = pd.Series(list1)
print(series)

# Dictionary representing student data
student_dict = {
    'Name': ['John', 'Anna', 'Peter', 'Linda'],
    'Age': [28, 24, 35, 32],
    'Country': ['USA', 'UK', 'Australia', 'Germany']
}
# Creating a Series from the dictionary
student_series = pd.Series(student_dict)
print(student_series)


# creating a series with same value , but desired index 
series_with_index = pd.Series(55,index=[11,22,33,44,55])
print(series_with_index)