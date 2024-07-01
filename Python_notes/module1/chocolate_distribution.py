"""
Introduction and Explanation:
Chocolate Distribution Algorithm: Distribute chocolates evenly among children.

Essential Points:
- Uses a function to calculate chocolates per child and any remainder.
- Demonstrates division and modulus operations.

Summary:
This program calculates how many chocolates each child gets when evenly distributing chocolates, highlighting division and remainder calculations.
"""

# Example of Chocolate Distribution Algorithm
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
