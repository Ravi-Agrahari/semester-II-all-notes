"""
Introduction and Explanation:
Inheritance is a powerful feature in OOP that allows a class (subclass) to inherit attributes and methods from another class (superclass). It promotes code reuse and enables the creation of hierarchical relationships between classes.

Example Programs:
"""

# Example of using inheritance in Python
class Animal:
    def speak(self):
        pass

class Dog(Animal):
    def speak(self):
        return "Woof!"

class Cat(Animal):
    def speak(self):
        return "Meow!"

# Creating objects of subclasses
dog = Dog()
cat = Cat()

# Calling speak method of each object
print("Dog says:", dog.speak())
print("Cat says:", cat.speak())

"""
Summary:
Inheritance allows subclasses to inherit attributes and methods from a superclass, facilitating code reuse and promoting the concept of specialization and generalization in object-oriented design.
"""

