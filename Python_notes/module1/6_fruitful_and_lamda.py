"""
Introduction and Explanation:

    Fruitful Functions in Python:
        - Functions that return a value using the `return` statement.
        - Encapsulate logic for reuse and modularity.

    Lambda Function in Python:
        - Anonymous function defined using `lambda` keyword.
        - Typically used for small, single-use functions.

Summary:
    Fruitful functions return values and enhance code reusability, while lambda functions provide concise function definitions for specific tasks.

"""

# Example of Fruitful Function

# Chocolate Distribution Algorithm: Distribute chocolates evenly among children

def distribute_chocolates(chocolates, children):
    if children == 0:
        return "No children to distribute chocolates"
    per_child = chocolates // children
    remainder = chocolates % children
    return per_child, remainder

chocolates = 10
children = 3
distribution = distribute_chocolates(chocolates, children)
print(f"Each child gets {distribution[0]} chocolates, with {distribution[1]} chocolates remaining")

# Example of Lambda Function
# Define a lambda function to square a number

square = lambda x: x ** 2
print("Square of 5:", square(5))

add = lambda a,b : (a+b)
print('Sum of 4 and 6 is', add(4,6))
