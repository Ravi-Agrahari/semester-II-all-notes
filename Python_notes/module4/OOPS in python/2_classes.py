"""
Introduction and Explanation:
A class is a blueprint for creating objects in Python. It defines the attributes and methods that objects of the class will have. Classes enable code reusability, modularity, and maintainability in OOP.

Example Programs:
"""

# Example of creating a class in Python
class Dog:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    
    def bark(self):
        print("Woof!")

# Creating objects of the Dog class
dog1 = Dog("Buddy", 3)
dog2 = Dog("Max", 5)

# Accessing attributes and calling methods of objects
print(f"{dog1.name} is {dog1.age} years old.")
dog2.bark()

"""
Summary:
Classes define the structure and behavior of objects. They serve as templates for creating objects with similar attributes and methods, promoting code organization and reusability.
"""

