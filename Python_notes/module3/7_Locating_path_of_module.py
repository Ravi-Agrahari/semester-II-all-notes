"""
Introduction and Explanation:
    Locating the path of modules in Python involves understanding how Python searches for and locates modules and packages in the system. This can be influenced by the `sys.path` list and the PYTHONPATH environment variable.

Essential Points:
    - `sys.path`: List containing directories where Python searches for modules.
    - PYTHONPATH environment variable: Additional directories specified to search for modules.
    - `importlib.util.find_spec(module_name)`: Programmatically finds the location of a module.

Summary:
    Understanding module search paths is crucial for managing dependencies and ensuring Python scripts can locate and import modules correctly from different locations.
"""

import sys
import importlib.util

# Example of finding the path of a module in Python

# Printing the current sys.path list
print("Current sys.path:")
for path in sys.path:
    print(path)

# Finding the location of the 'os' module
spec = importlib.util.find_spec('os')
print("Path of 'os' module:", spec.origin if spec else "Not found")
