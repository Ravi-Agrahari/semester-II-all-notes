"""
Introduction and Explanation:
    Packages in Python are namespaces that contain multiple modules. They organize modules into a hierarchical structure to prevent naming conflicts and provide a structured way to manage and distribute Python projects.

Essential Points:
    - Package structure: Packages are directories containing an `__init__.py` file and modules or subpackages.
    - `import package_name.module_name`: Imports a specific module from a package.
    - `from package_name import module_name`: Imports a module directly from a package.

Summary:
    Using packages allows for better organization of large Python projects, enhances code reusability, and facilitates collaboration by providing a standardized way to structure and share code.
"""

# Example of importing modules from packages in Python

# Importing a module from a package
import urllib.request

# Using urllib to fetch data from a URL
with urllib.request.urlopen('https://www.python.org/') as response:
    html = response.read()
    print(html)
