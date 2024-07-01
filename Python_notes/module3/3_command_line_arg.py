"""
Introduction and Explanation:
Command line arguments allow users to provide input parameters to a Python script when executing it from the command line. These arguments are accessed via the `sys.argv` list provided by the `sys` module.

Essential Points:
- `sys.argv`: List containing command-line arguments passed to a Python script.
- Argument indexing: `sys.argv[0]` is the script name, and subsequent indices contain user-provided arguments.
- Useful for passing input data, configuration options, or file paths to Python scripts.

Summary:
Command line arguments provide flexibility by allowing users to customize script behavior without modifying the script itself, enhancing script reusability and automation.
"""

import sys

# Example of accessing command line arguments in Python

# Printing the script name
print("Script name:", sys.argv[0])

# Printing all command line arguments provided by the user
if len(sys.argv) > 1:
    print("Arguments provided:")
    for i, arg in enumerate(sys.argv[1:], start=1):
        print(f"Argument {i}: {arg}")
else:
    print("No command line arguments provided.")
