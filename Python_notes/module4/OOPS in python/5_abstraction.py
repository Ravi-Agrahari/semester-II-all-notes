"""
Introduction and Explanation:
Abstraction is the process of hiding the implementation details and showing only the essential features of an object. It allows for focusing on what an object does rather than how it does it, simplifying complexity and promoting modularity.

Example Programs:
"""

# Example of abstraction in Python
from abc import ABC, abstractmethod

class Shape(ABC):
    @abstractmethod
    def area(self):
        pass

class Rectangle(Shape):
    def __init__(self, width, height):
        self.width = width
        self.height = height
    
    def area(self):
        return self.width * self.height

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius
    
    def area(self):
        return 3.14 * self.radius ** 2

# Creating objects of subclasses
rectangle = Rectangle(4, 5)
circle = Circle(3)

# Calling area method of each object
print("Area of rectangle:", rectangle.area())
print("Area of circle:", circle.area())

"""
Summary:
Abstraction allows for focusing on essential features while hiding implementation details. It promotes code simplicity, modularity, and flexibility by providing a high-level view of objects and their behaviors.
"""

