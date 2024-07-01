import pymongo 

if __name__ == "__main__":

    client = pymongo.MongoClient("mongodb://localhost:27017/")

    #creating the database 
    database_name = "Student_database"
    student_db = client[database_name]

    #creating the collection 
    collection_name = "CSE-B"
    cse_b_collection = student_db[collection_name]


# find one document from the collection ...
     
    random = cse_b_collection.find_one() #pull random document form the collection 
    # print(random) 

    Saikota = cse_b_collection.find_one({"name":"Saikota"}) # using filter 
    # print(Saikota) # pull any one documement in which name is saikota ... 


# finding all the documents from the collecting , 

    all_docs = cse_b_collection.find() # pull all the documents of the collection 
    # print(all_docs)

    all_Rikesh_docs = cse_b_collection.find({"name":"Rikesh Yadav"})
    # print(all_Rikesh_docs)  # note : this will print the object cursor
    # for docs in all_Rikesh_docs:
        # print(docs)


# applying some more filters 

    # I want to see name only ... 
    all_friends_docs  = cse_b_collection.find({},{"name":1, "_id":0})  #here only name will be shown ....
    for doc in all_friends_docs:
        print(doc)


    # I want to see all except name and id only ... 
    all_friends_docs  = cse_b_collection.find({},{"name":0, "_id":0})  #here only name will be shown ....
    for doc in all_friends_docs:
        print(doc)