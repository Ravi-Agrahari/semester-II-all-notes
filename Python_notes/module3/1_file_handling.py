"""
Introduction and Explanation:
Working with files in Python involves using different modes to handle both text and binary data. Modes such as 'r' for reading, 'w' for writing, 'a' for appending, and 'b' for binary operations determine the type of file operation.

Essential Points:
- `open(filename, mode)`: Opens a file with the specified mode.
- `read()`, `readline()`, `readlines()`: Methods for reading file content.
- `write()`, `writelines()`: Methods for writing content to a file.
- `close()`: Closes the file (automatically handled by `with` statement).

Text File Modes:
- 'r': Read - Opens a text file for reading.
- 'w': Write - Opens a text file for writing (creates a new file or truncates an existing file).
- 'a': Append - Opens a text file for appending new content to the end of the file.
- 'r+': Read and Write - Opens a text file for both reading and writing.
- 'w+': Write and Read - Opens a text file for both writing and reading (truncates the file).
- 'a+': Append and Read - Opens a text file for both appending and reading.

Binary File Modes:
- 'rb': Read Binary - Opens a file for reading in binary mode.
- 'wb': Write Binary - Opens a file for writing in binary mode (creates a new file or truncates an existing file).
- 'ab': Append Binary - Opens a file for appending in binary mode.
- 'rb+': Read and Write Binary - Opens a file for both reading and writing in binary mode.
- 'wb+': Write and Read Binary - Opens a file for both writing and reading in binary mode (truncates the file).
- 'ab+': Append and Read Binary - Opens a file for both appending and reading in binary mode.

Summary:
Handling files in Python supports both text and binary data operations using appropriate modes, facilitating efficient data handling and manipulation.
"""

# Example of reading and writing to a text file in Python

# Opening a file in write mode and writing text to it
with open('example.txt', 'w') as file:
    file.write("Hello, World!\n")
    file.write("Welcome to Python programming.\n")

# Reading the content of the file
with open('example.txt', 'r') as file:
    content = file.read()
    print("File content:")
    print(content)

# Appending text to the existing file
with open('example.txt', 'a') as file:
    file.write("This is an appended line.\n")

# Reading the updated content of the file
with open('example.txt', 'r') as file:
    updated_content = file.read()
    print("Updated file content:")
    print(updated_content)

# Binary file operations

# Writing binary data to a file
with open('binary_data.bin', 'wb') as file:
    data = bytes([65, 66, 67, 68, 69])  # Example binary data
    file.write(data)

# Reading binary data from the file
with open('binary_data.bin', 'rb') as file:
    binary_content = file.read()
    print("Binary data read:")
    print(binary_content)
