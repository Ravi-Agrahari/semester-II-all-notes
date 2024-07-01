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

    #to show all the collection in particular db 
    cols = student_db.list_collection_names()
    print(cols)

    print(client['SECE'].list_collection_names())


