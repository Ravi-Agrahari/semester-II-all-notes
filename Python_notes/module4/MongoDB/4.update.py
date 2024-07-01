

import pymongo 

if __name__ == "__main__":

    client = pymongo.MongoClient("mongodb://localhost:27017/")

    #creating the database 
    database_name = "Student_database"
    student_db = client[database_name]

    #creating the collection 
    collection_name = "CSE-B"
    cse_b_collection = student_db[collection_name]


# Bonus points 
    # To show all the databases ... 
    dbs = client.list_database_names()
    print(dbs)


# updating the address of saikota from Nepal to TamilNadu

    #updating only one document of saikota in the collection
    prev = {"name" : "Saikota"} # this is basically to select the document 
    updated = {"$set" : {"Address":"Tamil Nadu"} } # for updating 
    cse_b_collection.update_one(prev, updated)

# updating address to Rikesh from Nepal to Africa in all documents 

    cse_b_collection.update_many({"name":"Rikesh Yadav"}, {"$set":{"Address" : "Africa"}})