/*
Introduction and Explanation:
    File handling in C++ involves reading from and writing to files. CRUD operations stand for Create, Read, Update, and Delete, which are essential for file management.

Mode in file handling 

    ios::in -> opens file for read (default in ifstream)
    ios::out -> opens file for write (default in ofstream)
    ios::app -> opens file for appending 

Some useful functions 

    .open() -> to open file 
    .is_open() -> check if file is open or not 
    .fail() -> return 1 - if fail to open , otherwise return 0 
    .eof() -> return 1 - when end of file reached ... 
            while(!myfile.eof){
                getline(myfile,line)
            }


Example Programs (in C++):
*/

#include <iostream>
#include <fstream>  // libary for file streaming 
using namespace std;

// Create and Write to a file
void createFile() {

    // actually ofstream is a class define in fstream , and derived from fstreambase,,, we create object and write in that 
    ofstream outfile("example.txt");  

    // we can open file using open function also . Example : 

    // ofstream outfile ; 
    // outfile.open("example.txt")


    // to perform check if file is opened or not 
    if(!outfile){
        cout << "Error while opening file" ;
        return ;
    }

    outfile << "This is an example file.\n";
    outfile << "C++ File Handling CRUD operations.\n";
    outfile.close();
}

// Read from a file
void readFile() {

     // actually ifstream is a class define in fstream , and derived from fstreambase ,,,we create object and read from that

    ifstream infile("example.txt");

    string word ; 
    infile >> word ;  // the will read a single word from the file 

    string line;
    while (getline(infile, line)) { // reading line and printing to console ...
        cout << line << endl;
    }
    infile.close();
}

// Update a file
void updateFile() {
    ofstream outfile("example.txt", ios::app);
    outfile << "Appending a new line to the file.\n";
    outfile.close();
}

// Delete a file
void deleteFile() {
    if (remove("example.txt") == 0) {
        cout << "File deleted successfully.\n";
    } else {
        cout << "Error deleting file.\n";
    }
}

int main() {
    createFile();
    readFile();
    updateFile();
    readFile();
    deleteFile();
    return 0;
}

/*
Applications:
- Data storage and retrieval in applications.
- Logging and recording system events.
- Configuration file management.

Summary:
File handling in C++ allows performing CRUD operations on files, enabling data management and persistence.
*/
