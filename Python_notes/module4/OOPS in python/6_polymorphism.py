"""
Introduction and Explanation:
Polymorphism is the ability of objects to take on different forms or behaviors based on the context in which they are used. It allows for treating objects of different classes in a uniform manner.

Example Programs:
"""

# Example of polymorphism in Python
class Animal:
    def speak(self):
        pass

class Dog(Animal):
    def speak(self):
        return "Woof!"

class Cat(Animal):
    def speak(self):
        return "Meow!"

# Function demonstrating polymorphic behavior
def make_sound(animal):
    return animal.speak()

# Creating objects of subclasses
dog = Dog()
cat = Cat()

# Calling make_sound function with different objects
print("Dog says:", make_sound(dog))
print("Cat says:", make_sound(cat))

"""
Summary:
Polymorphism allows for treating objects of different classes in a uniform manner, promoting code flexibility, extensibility, and ease of maintenance by enabling code to work with objects at a higher level of abstraction.
"""

