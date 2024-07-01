"""
Introduction and Explanation:
A constructor is a special method in Python classes that is automatically called when an object of the class is created. It initializes the object's state by setting initial values to its attributes.

Example Programs:
"""

# Example of using a constructor in Python
class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height
    
    def area(self):
        return self.width * self.height

# Creating an object of the Rectangle class using constructor
rectangle = Rectangle(4, 5)
print("Area of rectangle:", rectangle.area())

"""
Summary:
Constructors provide a way to initialize object attributes when objects are created. They ensure that objects are in a valid state upon instantiation, facilitating proper initialization.
"""

