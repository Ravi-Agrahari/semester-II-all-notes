"""
Introduction and Explanation:
Encapsulation is the bundling of data (attributes) and methods (behaviors) that operate on the data within a single unit (class). It hides the internal state of objects from external access and modification.

Example Programs:
"""

# Example of encapsulation in Python
class BankAccount:
    def __init__(self, balance):
        self.__balance = balance
    
    def get_balance(self):
        return self.__balance
    
    def deposit(self, amount):
        self.__balance += amount
    
    def withdraw(self, amount):
        if amount <= self.__balance:
            self.__balance -= amount
        else:
            print("Insufficient funds")

# Creating an object of the BankAccount class
account = BankAccount(1000)

# Accessing balance and performing transactions
print("Initial balance:", account.get_balance())
account.deposit(500)
print("Balance after deposit:", account.get_balance())
account.withdraw(200)
print("Balance after withdrawal:", account.get_balance())

"""
Summary:
Encapsulation restricts direct access to an object's internal state, promoting data integrity and security. It allows for controlling access to data and enforcing constraints on how data is modified, enhancing code maintainability and reliability.
"""

