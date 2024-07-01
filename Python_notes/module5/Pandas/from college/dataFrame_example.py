import pandas as pd 
import numpy as mp 

if __name__ == "__main__":

    # Creating dataframe from dictionary..
    employee_dict ={
        "Name": ["John", "Anna", "Peter", "Linda"],
        "Age": [28, 24, 35, 32],
        "Country": ["USA", "UK", "Australia", "Germany"]

    }

    employee_df = pd.DataFrame(employee_dict)
    print(employee_df)
            
