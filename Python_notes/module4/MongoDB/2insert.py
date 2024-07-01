import pymongo 

if __name__ == "__main__":

    client = pymongo.MongoClient("mongodb://localhost:27017/")

    #creating the database 
    database_name = "Student_database"
    student_db = client[database_name]

    #creating the collection 
    collection_name = "CSE-B"
    cse_b_collection = student_db[collection_name]


#insertOne

    #creating document to be inserted in the cse_b_collection 

    #dictionary ...
    # roll_123_info = {"name" : "Ravi Agrahari","Address" : "Nepal" }

    #Note:- We can add id by aur self also .. 
    roll_123_info = {  "name" : "Ravi Agrahari","Address" : "Nepal" }


#insertMany... 
    
    #List of Dictionaries ...   
    other_friends = [
            {"name": "Rikesh Yadav", "Address": "Nepal"},
            {"name": "Saikota", "Address": "Nepal"},
            {"name": "Rithiga", "Address": "TamilNadu"}
        ]


    #inserting the information data in the collection 
    cse_b_collection.insert_one(roll_123_info) #inserting one dictionary
    cse_b_collection.insert_many(other_friends) #inserting many documents 

    print("Insertion sucessfull...")


    
    
