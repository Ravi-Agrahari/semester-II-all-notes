import numpy as np
import pandas as pd 

if __name__ == "__main__" :

    friends_dict = {
        "name" : ["Awadesh", "Sudarsan" , "Rikesh" , "Saikota" , "Rithiga"],
        "age" : [20,19,21,20,19],
        "address" : ["Lankahawa","SriNagar","Sunsari","Kathmandu","Tamil Nadu"]
    }

    # to convert dictionary into dataframe (excel sheet type.. )
    friends_df = pd.DataFrame(friends_dict)
    print(friends_df , "\n\n")

    # to convert dataframe into csv 
    # friends_df.to_csv("friends.csv")

    # to convert dataframe int csv without index 
    # friends_df.to_csv("friends_without_index.csv" , index = False)



# some useful methods on dataframe are :

    print(friends_df.head(2)) #print top 2 rows 
    print() 
 
    print(friends_df.tail(2)) #print bottom 2 rows 
    print()


    print(friends_df.describe() , "\n") #give the detail for numerical value in dataframe


# reading the csv file ... 
# friends_df = pd.read_csv("friends.csv")



