

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


# deleting saikota's one document form the collection 
    doc = {"name" : "Saikota"} 
    cse_b_collection.delete_one(doc)

# deleting all the documents of Rikesh form the collection 

    # cse_b_collection.delete_many({"name":"Rikesh Yadav"})

    # we can see the deleted count also,...
    deleted = cse_b_collection.delete_many({"name":"Rikesh Yadav"})
    print(deleted.deleted_count)


    #deleting all 
    # cse_b_collection.delete_many({"name":"Rithiga"})
    # cse_b_collection.delete_many({"name":"Ravi Agrahari"})
    # cse_b_collection.delete_many({"name":"Saikota"})
    