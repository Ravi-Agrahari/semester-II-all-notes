"""
Introduction and Explanation:
An object is a fundamental concept in object-oriented programming (OOP) that represents a real-world entity or abstraction. It encapsulates data (attributes) and behaviors (methods) that operate on that data.

Example Programs:
"""

# Example of creating an object in Python
class Car:
    def __init__(self, make, model):
        self.make = make
        self.model = model
    
    def display_info(self):
        print(f"Car: {self.make} {self.model}")

# Creating an object of the Car class
my_car = Car("Toyota", "Camry")
my_car.display_info()

"""
Summary:
Objects are instances of classes that encapsulate data and behavior. They allow for modular and reusable code by modeling real-world entities as self-contained units.
"""

